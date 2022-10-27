#include "LICM.h"
#include "pssa/Lower.h"
#include "pssa/PSSA.h"
#include "pssa/Inserter.h"
#include "llvm/Analysis/AliasAnalysis.h"
#include "llvm/Analysis/LoopInfo.h"
#include "llvm/Analysis/PostDominators.h"
#include "llvm/IR/Dominators.h"

using namespace llvm;


namespace {

// Generalized LICM
class GLICM {
  PredicatedSSA *PSSA;
  AliasAnalysis &AA;
  DenseMap<std::pair<Instruction *, VLoop *>, bool> InstMemo;
  DenseMap<std::pair<const ControlCondition *, VLoop *>, bool> CondMemo;

  bool isInvariant(Instruction *, VLoop *);
  bool isInvariant(Value *, VLoop *);
  bool isInvariant(VLoop *, VLoop *);
  bool isInvariant(const ControlCondition *, VLoop *);
  bool isInvalidatedByLoop(MemoryLocation, VLoop *);

public:
  GLICM(PredicatedSSA *PSSA, AliasAnalysis &AA) : PSSA(PSSA), AA(AA) {}
  bool runOnLoop(VLoop *);
};

} // namespace

bool GLICM::isInvalidatedByLoop(MemoryLocation Loc, VLoop *VL) {
  for (auto &InstOrLoop : VL->items()) {
    if (auto *I = InstOrLoop.asInstruction()) {
      if (isModSet(AA.getModRefInfo(I, Loc)))
        return true;
    } else {
      if (isInvalidatedByLoop(Loc, InstOrLoop.asLoop()))
        return true;
    }
  }
  return false;
}

bool GLICM::isInvariant(Value *V, VLoop *VL) {
  auto *I = dyn_cast<Instruction>(V);
  return !I || isInvariant(I, VL);
}

// TODO: deal with memory
// Check is I is invariant w.r.t. VL
bool GLICM::isInvariant(Instruction *I, VLoop *VL) {
  auto It = InstMemo.find({I, VL});
  if (It != InstMemo.end())
    return It->second;

  // For now, just assume Mu nodes are always variant
  auto *PN = dyn_cast<PHINode>(I);
  if (PN && PSSA->getLoopForInst(PN)->isMu(PN))
    return false;

  if (!isa<LoadInst>(I) && I->mayReadOrWriteMemory())
    return false;

  if (auto *LI = dyn_cast<LoadInst>(I)) {
    if (!LI->isSimple())
      return false;
    auto *Ptr = dyn_cast<Instruction>(LI->getPointerOperand());
    if (Ptr && !isInvariant(Ptr, VL))
      return false;
    if (isInvalidatedByLoop(MemoryLocation::get(LI), VL))
      return false;
  }

  if (!VL->contains(I))
    return true;

  for (auto *O : I->operand_values()) {
    if (auto *OI = dyn_cast<Instruction>(O); OI && !isInvariant(OI, VL))
      return false;
  }

  // For gated phis, also need to check that their conditions are invariant
  if (PN && VL->isGatedPhi(PN)) {
    for (auto *C : VL->getPhiConditions(PN)) {
      if (!isInvariant(C, VL))
        return false;
    }
  }

  // FIXME:
  // this can also be relaxed so we can execute things like ADD speculatively
  return isInvariant(PSSA->getInstCond(I), VL);
}

static void summarize(VLoop *VL, SmallVectorImpl<Instruction *> &LiveIns,
                      SmallVectorImpl<Instruction *> &MemoryAccesses) {
  DenseSet<const ControlCondition *> Processed;
  std::function<void(const ControlCondition *)> ProcessCondition =
      [&](const ControlCondition *C) {
        if (!C)
          return;
        if (!Processed.insert(C).second)
          return;
        if (auto *And = dyn_cast<ConditionAnd>(C)) {
          ProcessCondition(And->Parent);
          auto *I = dyn_cast<Instruction>(And->Cond);
          if (I && !VL->contains(I))
            LiveIns.push_back(I);
          return;
        }
        llvm::for_each(cast<ConditionOr>(C)->Conds, ProcessCondition);
      };

  SmallVector<VLoop *, 8> Worklist{VL};
  while (!Worklist.empty()) {
    auto *VL2 = Worklist.pop_back_val();

    ProcessCondition(VL2->getLoopCond());
    ProcessCondition(VL2->getBackEdgeCond());

    for (auto *PN : VL2->mus()) {
      auto *I = dyn_cast<Instruction>(PN->getOperand(0));
      if (I && !VL->contains(I))
        LiveIns.push_back(I);
    }

    for (auto &InstOrLoop : VL2->items()) {
      if (auto *SubVL = InstOrLoop.asLoop()) {
        Worklist.push_back(SubVL);
        continue;
      }

      auto *I = InstOrLoop.asInstruction();
      assert(I);
      for (auto *O : I->operand_values()) {
        // Ignore mu of VL
        //auto *PN = dyn_cast<PHINode>(O);
        //if (PN && VL->isMu(PN))
        //  continue;
        auto *OI = dyn_cast<Instruction>(O);
        if (OI && !VL->contains(OI))
          LiveIns.push_back(OI);
      }
      ProcessCondition(VL2->getInstCond(I));

      if (auto *PN = dyn_cast<PHINode>(I)) {
        llvm::for_each(VL2->getPhiConditions(PN), ProcessCondition);
      }

      if (I->mayReadOrWriteMemory()) {
        MemoryAccesses.push_back(I);
      }
    }
  }
}

// Check if `VL` can be hoisted out of its parent loop
bool GLICM::isInvariant(VLoop *VL, VLoop *ParentVL) {
  assert(VL->getParent() == ParentVL);

  if (!isInvariant(VL->getLoopCond(), ParentVL))
    return false;

  SmallVector<Instruction *> LiveIns, MemoryAccesses;
  summarize(VL, LiveIns, MemoryAccesses);

  for (auto *I : LiveIns) {
    if (!isInvariant(I, ParentVL))
      return false;
  }

  for (auto *I : MemoryAccesses) {
    auto *LI = dyn_cast<LoadInst>(I);
    if (!LI && I->mayReadOrWriteMemory())
      return false;
    assert(LI);
    if (isInvalidatedByLoop(MemoryLocation::get(LI), ParentVL))
      return false;
  }

  return true;
}

bool GLICM::isInvariant(const ControlCondition *C, VLoop *VL) {
  // True is invariant
  if (!C)
    return true;

  auto It = CondMemo.find({C, VL});
  if (It != CondMemo.end())
    return It->second;

  bool Invariant = true;
  if (auto *And = dyn_cast<ConditionAnd>(C)) {
    auto *I = dyn_cast<Instruction>(And->Cond);
    if (I && !isInvariant(I, VL))
      Invariant = false;
    else
      Invariant = isInvariant(And->Parent, VL);
  } else {
    auto *Or = cast<ConditionOr>(C);
    for (auto *C2 : Or->Conds) {
      if (!isInvariant(C2, VL)) {
        Invariant = false;
        break;
      }
    }
  }

  return CondMemo[{C, VL}] = Invariant;
}

// We only assume LI is done unconditionally within the loop
static void hoistLoadSpeculatively(LoadInst *LI, VLoop *VL, PredicatedSSA *PSSA, AliasAnalysis &AA) {
  auto *ParentVL = VL->getParent();
  auto BeforeVL = PSSA->toIterator(VL);

  VL->erase(LI);
  ParentVL->insert(LI, nullptr, BeforeVL);

  auto *Mu = VL->createMu(LI);
  // The value we are replacing the load with
  Value *LoadRep = Mu;

  auto *Ty = LI->getType();
  auto *Ptr = LI->getPointerOperand();
  auto Loc = MemoryLocation::get(LI);
  SmallVector<Instruction *> Insts;
  // Collect the instructions first to avoid invalidating iterator
  DenseSet<Instruction *> InvalidatingInsts;
  for (auto &InstOrLoop : VL->items()) {
    if (auto *I = InstOrLoop.asInstruction()) {
      Insts.push_back(I);
      if (isModSet(AA.getModRefInfo(I, Loc)))
        InvalidatingInsts.insert(I);
    }
  }
  for (auto *I : Insts) {
    for (unsigned i = 0; i < I->getNumOperands(); i++) {
      auto *LI2 = dyn_cast<LoadInst>(I->getOperand(i));
      if (LI2 && LI2->getPointerOperand() == Ptr && LI2->getType() == Ty) {
        I->setOperand(i, LoadRep);
      }
    }

    if (!InvalidatingInsts.count(I))
      continue;

    // If it's a store, just forward conditionally
    if (auto *Store = dyn_cast<StoreInst>(I); Store && Store->getValueOperand()->getType() == Ty) {
      // If we know the pointer that could be invalidated, just check the pointer
      auto *StoreC = VL->getInstCond(Store);
      Inserter InsertAfter(VL, StoreC, std::next(VL->toIterator(Store)));
      auto *Eq = cast<Instruction>(InsertAfter.create<CmpInst>(Instruction::ICmp, CmpInst::ICMP_EQ, Store->getPointerOperand(), Ptr));
      Inserter InsertAfterEq(VL, nullptr/*true*/, std::next(VL->toIterator(Eq)));
      LoadRep = InsertAfterEq.createOneHotPhi(
          PSSA->getAnd(StoreC, Eq, true/*is true*/), /* update the load if load happens and the pointers are equal */
          Store->getValueOperand(), /* if true: forward the store */
          LoadRep /* if false: keep the cached value */);
      continue;
    }

    // Just reload for other instructions
    auto *C = VL->getInstCond(I);
    Inserter InsertAfter(VL, C, std::next(VL->toIterator(I)));
    auto *Reload = cast<Instruction>(InsertAfter.make<LoadInst>(Ty, Ptr, LI->getName() + ".reload", false/*is volatile*/, LI->getAlign()));
    Inserter InsertAfterReload(VL, nullptr/* true */, std::next(VL->toIterator(Reload)));
    LoadRep = InsertAfterReload.createOneHotPhi(
        C /* update if this instruction happens */,
        Reload, LoadRep);
  }

  Mu->setIncomingValue(1, LoadRep);
}

bool GLICM::runOnLoop(VLoop *VL) {
  // Gather the sub loops in a vector to avoid invalidation
  SmallVector<VLoop *> SubLoops;
  for (auto &InstOrLoop : VL->items()) {
    if (auto *SubVL = InstOrLoop.asLoop())
      SubLoops.push_back(SubVL);
  }

  bool Changed = false;

  // Hoist things out of the sub loops first
  for (auto *SubVL : SubLoops)
    Changed |= runOnLoop(SubVL);

  if (!VL->isLoop())
    return Changed;

  // Figure out which instructions are invariant
  SmallVector<Instruction *> InvariantInsts;
  SmallVector<VLoop *> InvariantLoops;
  std::map<std::pair<Value *, Type *>, SmallVector<LoadInst *, 8>> ConditionallyInvariantLoads;
  unsigned NumRedundantLoads = 0;
  for (auto &InstOrLoop : VL->items()) {
    if (auto *SubVL = InstOrLoop.asLoop(); SubVL && isInvariant(SubVL, VL)) {
      InvariantLoops.push_back(SubVL);
      continue;
    }

    if (auto *I = InstOrLoop.asInstruction(); I && isInvariant(I, VL)) {
      InvariantInsts.push_back(I);
      continue;
    }

    if (auto *LI = dyn_cast_or_null<LoadInst>(InstOrLoop.asInstruction());
        LI && isInvariant(LI->getPointerOperand(), VL) &&
        !VL->getInstCond(LI)) {
      auto *Ptr = LI->getPointerOperand();
      ConditionallyInvariantLoads[{Ptr, LI->getType()}].push_back(LI);
      NumRedundantLoads++;
    }
  }

  if (!ConditionallyInvariantLoads.empty())
    errs() << "Num possibly invariant loads: " << NumRedundantLoads << '\n';

  // Hoist the invariant instructions to before the loop
  auto *ParentVL = VL->getParent();
  auto BeforeVL = PSSA->toIterator(VL);
  for (auto *I : InvariantInsts) {
    errs() << "!!! hoisting " << *I << '\n';
    auto *C = PSSA->concat(VL->getLoopCond(), VL->getInstCond(I));
    if (auto *PN = dyn_cast<PHINode>(I)) {
      assert(VL->isGatedPhi(PN));
      auto Conds = VL->getPhiConditions(PN);
      SmallVector<const ControlCondition *, 8> CondVec(Conds.begin(),
                                                       Conds.end());
      VL->erase(I);
      ParentVL->insert(PN, Conds, C, BeforeVL);
    } else {
      VL->erase(I);
      ParentVL->insert(I, C, BeforeVL);
    }
  }

#if 0
  for (auto *SubVL : InvariantLoops) {
    VL->erase(SubVL);
    auto *NewLoopCond = PSSA->concat(VL->getLoopCond(), SubVL->getLoopCond());
    SubVL->setLoopCond(NewLoopCond);
    ParentVL->insert(SubVL, BeforeVL);
    assert(SubVL->getParent() == ParentVL);
    errs() << "Hoisted one *loop-invariant* loop\n";
  }
#endif

  for (auto KV : ConditionallyInvariantLoads) {
    auto *LI = KV.second.front();
    hoistLoadSpeculatively(LI, VL, PSSA, AA);
    break;
  }

  return Changed | !InvariantInsts.empty() | !InvariantLoops.empty() | !ConditionallyInvariantLoads.empty();
}

PreservedAnalyses MyLICMPass::run(Function &F, FunctionAnalysisManager &AM) {
  auto &LI = AM.getResult<LoopAnalysis>(F);
  auto &DT = AM.getResult<DominatorTreeAnalysis>(F);
  auto &PDT = AM.getResult<PostDominatorTreeAnalysis>(F);
  auto &AA = AM.getResult<AAManager>(F);

  if (!isConvertibleToPSSA(F, LI, DT))
    return PreservedAnalyses::all();

  PredicatedSSA PSSA(&F, LI, DT, PDT);
  GLICM LICM(&PSSA, AA);

  if (!LICM.runOnLoop(&PSSA.getTopLevel()))
    return PreservedAnalyses::all();

  errs() << "Hoisted something in " << F.getName() << '\n';

  lowerPSSAToLLVM(&F, PSSA);
  return PreservedAnalyses::none();
}
