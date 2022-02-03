#include "VLoop.h"
#include "ControlDependence.h"
#include "llvm/ADT/PostOrderIterator.h"
#include "llvm/Analysis/LoopInfo.h"
#include "llvm/Analysis/LoopIterator.h"
#include "llvm/IR/Dominators.h"

using namespace llvm;

static void setSubtract(BitVector &Src, BitVector ToRemove) {
  ToRemove.flip();
  Src &= ToRemove;
}

static void
getIncomingPhiConditions(SmallVectorImpl<const ControlCondition *> &Conds,
                         PHINode *PN, ControlDependenceAnalysis &CDA) {
  for (auto *SrcBB : PN->blocks())
    Conds.push_back(CDA.getConditionForEdge(SrcBB, PN->getParent()));
}

VLoop::VLoop(Function *F, LoopInfo &LI, DominatorTree &DT,
             ControlDependenceAnalysis &CDA, VLoopInfo &VLI)
    : IsTopLevel(true), Parent(nullptr), LoopCond(nullptr), L(nullptr),
      VLI(VLI) {
  ReversePostOrderTraversal<Function *> RPO(F);
  SmallPtrSet<Loop *, 8> Visited;
  // Populate the loop items in program order
  for (auto *BB : RPO) {
    auto *L = LI.getLoopFor(BB);
    if (!L) {
      // BB is not contained in any loop
      auto *C = CDA.getConditionForBlock(BB);
      for (auto &I : *BB) {
        if (I.isTerminator() && !isa<ReturnInst>(&I))
          continue;
        Items.push_back(&I);
        InstConds[&I] = C;
        if (auto *PN = dyn_cast<PHINode>(&I))
          getIncomingPhiConditions(PhiConds[PN], PN, CDA);
        VLI.mapInstToLoop(&I, this);
      }
    } else {
      // BB is contained in some loop, get the top-level loop that contains BB
      while (L->getParentLoop() != nullptr)
        L = L->getParentLoop();
      assert(L);
      // skip if we've seen this sub-loop before
      if (!Visited.insert(L).second)
        continue;
      auto *SubVL = new VLoop(LI, L, CDA, VLI);
      Items.push_back(SubVL);
      SubLoops.emplace_back(SubVL);
    }
  }
}

VLoop::VLoop(LoopInfo &LI, Loop *L, ControlDependenceAnalysis &CDA,
             VLoopInfo &VLI)
    : IsTopLevel(false),
      LoopCond(CDA.getConditionForBlock(L->getLoopPreheader())), L(L),
      Parent(nullptr), VLI(VLI) {
  VLI.setVLoop(L, this);
  assert(L->isRotatedForm());

  auto *Preheader = L->getLoopPreheader();
  auto *Header = L->getHeader();
  auto *Latch = L->getLoopLatch();

  // Figure out the condition for taking the backedge (vs exiting the loop)
  auto *LoopBr = cast<BranchInst>(Latch->getTerminator());
  auto *LatchCond = CDA.getConditionForBlock(Latch);
  // Back edge taken === reaches latch && back edge taken
  if (LoopBr->isConditional())
    BackEdgeCond = CDA.getAnd(LatchCond, LoopBr->getCondition(),
                              LoopBr->getSuccessor(0) == L->getHeader());
  else
    BackEdgeCond = LatchCond;

  // Figure out the mu nodes
  for (PHINode &PN : Header->phis()) {
    assert(PN.getNumIncomingValues() == 2);
    auto *Init = PN.getIncomingValueForBlock(Preheader);
    auto *Iter = PN.getIncomingValueForBlock(Latch);
    Mus.try_emplace(&PN, Init, Iter);
    // Also canonicalize the phi-node so that first value is the init. and second iter.
    PN.setIncomingValue(0, Init);
    PN.setIncomingValue(1, Iter);
    PN.setIncomingBlock(0, Preheader);
    PN.setIncomingBlock(1, Latch);
  }

  // Populate the loop items
  LoopBlocksRPO RPO(L);
  RPO.perform(&LI);
  SmallPtrSet<Loop *, 8> Visited;
  for (auto *BB : RPO) {
    auto *C = CDA.getConditionForBlock(BB);
    auto *L2 = LI.getLoopFor(BB);
    assert(L2);
    if (L2 == L) {
      // BB is contained immediately within L
      for (auto &I : *BB) {
        if (I.isTerminator() && !isa<ReturnInst>(&I))
          continue;
        Items.push_back(&I);
        InstConds[&I] = C;
        VLI.mapInstToLoop(&I, this);
        auto *PN = dyn_cast<PHINode>(&I);
        if (PN && !getMu(PN))
          getIncomingPhiConditions(PhiConds[PN], PN, CDA);
      }
    } else {
      while (L2->getParentLoop() != L)
        L2 = L2->getParentLoop();
      assert(L2 && L2->getParentLoop() == L);
      // Skip if we've seen L2 before
      if (!Visited.insert(L2).second)
        continue;
      auto *SubVL = new VLoop(LI, L2, CDA, VLI);
      Items.push_back(SubVL);
      SubLoops.emplace_back(SubVL);
      SubVL->Parent = this;
    }
  }
}

Optional<MuNode> VLoop::getMu(PHINode *PN) const {
  auto It = Mus.find(PN);
  if (It != Mus.end())
    return It->second;
  return None;
}

VLoop *VLoopInfo::getVLoop(Loop *L) const { return LoopToVLoopMap.lookup(L); }

void VLoopInfo::setVLoop(Loop *L, VLoop *VL) { LoopToVLoopMap[L] = VL; }
