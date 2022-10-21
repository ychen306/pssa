#include "LICM.h"
#include "pssa/Lower.h"
#include "pssa/PSSA.h"
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
  for (auto &InstOrLoop : VL->items()) {
    if (auto *SubVL = InstOrLoop.asLoop(); SubVL && isInvariant(SubVL, VL))
      InvariantLoops.push_back(SubVL);
    if (auto *I = InstOrLoop.asInstruction(); I && isInvariant(I, VL))
      InvariantInsts.push_back(I);
  }

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

#if 1
  for (auto *SubVL : InvariantLoops) {
    VL->erase(SubVL);
    auto *NewLoopCond = PSSA->concat(VL->getLoopCond(), SubVL->getLoopCond());
    SubVL->setLoopCond(NewLoopCond);
    ParentVL->insert(SubVL, BeforeVL);
    assert(SubVL->getParent() == ParentVL);
    errs() << "Hoisted one *loop-invariant* loop\n";
  }
#endif

  return Changed | !InvariantInsts.empty() | !InvariantLoops.empty();
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
