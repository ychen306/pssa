#include "LICM.h"
#include "pssa/Lower.h"
#include "pssa/PSSA.h"
#include "llvm/Analysis/LoopInfo.h"
#include "llvm/Analysis/PostDominators.h"
#include "llvm/IR/Dominators.h"

using namespace llvm;

namespace {

// Generalized LICM
class GLICM {
  DenseSet<VLoop *> Visited;
  PredicatedSSA *PSSA;
  DenseMap<std::pair<Instruction *, VLoop *>, bool> InstMemo;
  DenseMap<std::pair<const ControlCondition *, VLoop *>, bool> CondMemo;

public:
  GLICM(PredicatedSSA *PSSA) : PSSA(PSSA) {}
  bool isInvariant(Instruction *, VLoop *);
  bool isInvariant(const ControlCondition *, VLoop *);
  bool runOnLoop(VLoop *);
};

} // namespace

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

  if (I->mayReadOrWriteMemory())
    return false;

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
  assert(!Visited.count(VL) && "cycle in loop hierarchy");
  Visited.insert(VL);

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
  for (auto &InstOrLoop : VL->items()) {
    if (auto *I = InstOrLoop.asInstruction(); I && isInvariant(I, VL))
      InvariantInsts.push_back(I);
  }

  // Hoist the invariant instructions to before the loop
  auto *ParentVL = VL->getParent();
  auto BeforeVL = PSSA->toIterator(VL);
  for (auto *I : InvariantInsts) {
    auto *C = VL->getInstCond(I);
    if (auto *PN = dyn_cast<PHINode>(I)) {
      assert(VL->isGatedPhi(PN));
      auto Conds = VL->getPhiConditions(PN);
      SmallVector<const ControlCondition *, 8> CondVec(Conds.begin(), Conds.end());
      VL->erase(I);
      ParentVL->insert(PN, Conds, C, BeforeVL);
    } else {
      VL->erase(I);
      ParentVL->insert(I, C, BeforeVL);
    }
  }

  return Changed | !InvariantInsts.empty();
}

PreservedAnalyses MyLICMPass::run(Function &F, FunctionAnalysisManager &AM) {
  auto &LI = AM.getResult<LoopAnalysis>(F);
  auto &DT = AM.getResult<DominatorTreeAnalysis>(F);
  auto &PDT = AM.getResult<PostDominatorTreeAnalysis>(F);

  if (!isConvertibleToPSSA(F, LI, DT))
    return PreservedAnalyses::all();

  PredicatedSSA PSSA(&F, LI, DT, PDT);
  GLICM LICM(&PSSA);

  errs() << "====== top level =======\n";
  if (!LICM.runOnLoop(&PSSA.getTopLevel()))
    return PreservedAnalyses::all();

  errs() << "Hoisted something in " << F.getName() << '\n';

  lowerPSSAToLLVM(&F, PSSA);
  return PreservedAnalyses::none();
}
