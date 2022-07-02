#include "PSSA.h"
#include "ControlDependence.h"
#include "llvm/ADT/PostOrderIterator.h"
#include "llvm/Analysis/LoopInfo.h"
#include "llvm/Analysis/LoopIterator.h"

using namespace llvm;

static void
getIncomingPhiConditions(SmallVectorImpl<const ControlCondition *> &Conds,
                         PHINode *PN, ControlDependenceAnalysis &CDA) {
  for (auto *SrcBB : PN->blocks())
    Conds.push_back(CDA.getConditionForEdge(SrcBB, PN->getParent()));
}

VLoop::ItemIterator VLoop::insert(Instruction *I, const ControlCondition *C,
                                  Optional<ItemIterator> InsertBefore) {
  InstConds[I] = C;
  auto It = Items.insert(InsertBefore ? *InsertBefore : Items.end(), I);
  PSSA->mapItemToLoop(It, this);
  return It;
}

VLoop::ItemIterator VLoop::insert(PHINode *PN, const ControlCondition *C,
                                  ControlDependenceAnalysis &CDA,
                                  Optional<ItemIterator> InsertBefore) {
  getIncomingPhiConditions(PhiConds[PN], PN, CDA);
  return insert(PN, C);
}

VLoop::ItemIterator VLoop::insert(VLoop *SubVL,
                                  Optional<ItemIterator> InsertBefore) {
  SubLoops.emplace_back(SubVL);
  auto It = Items.insert(InsertBefore ? *InsertBefore : Items.end(), SubVL);
  PSSA->mapItemToLoop(It, this);
  return It;
}

void PredicatedSSA::InsertPoint::insert(Instruction *I,
                                        const ControlCondition *C) {
  assert(VL);
  assert(!I->isTerminator());
  assert(!isa<PHINode>(I));
  VL->insert(I, C, It);
}

PredicatedSSA::PredicatedSSA(Function *F, LoopInfo &LI, DominatorTree &DT,
                             PostDominatorTree &PDT)
    : LI(LI), TopVL(this) {
  ControlDependenceAnalysis CDA(LI, DT, PDT, CT);

  SmallVector<Loop *, 8> LoopStack{nullptr};
  using BlockOrLoop = PointerUnion<BasicBlock *, Loop *>;
  std::map<Loop *, std::vector<BlockOrLoop>> Bodies;
  DenseSet<BasicBlock *> VisitedBlocks;
  DenseSet<Loop *> VisitedLoops;
  DenseMap<Loop *, VLoop *> VLoops;
  VLoops[nullptr] = &TopVL;

  std::function<void(Loop *)> VisitLoop;
  std::function<void(BasicBlock *)> VisitBlock;

  VisitLoop = [&](Loop *L) {
    SmallVector<BasicBlock *, 2> Exits;
    L->getExitBlocks(Exits);
    llvm::for_each(Exits, VisitBlock);

    Bodies[LoopStack.back()].push_back(L);

    LoopStack.push_back(L);
    VisitBlock(L->getHeader());
    LoopStack.pop_back();
  };

  VisitBlock = [&](BasicBlock *BB) {
    if (!VisitedBlocks.insert(BB).second)
      return;

    auto *CurL = LoopStack.back();
    auto *CurVL = VLoops.lookup(CurL);
    assert(CurVL);
    assert(LI.getLoopFor(BB) == CurL);
    for (auto *Succ : successors(BB)) {
      auto *SuccL = LI.getLoopFor(Succ);
      if (SuccL == CurL) {
        VisitBlock(Succ);
      } else if (!CurL || CurL->contains(Succ)) {
        assert(!VLoops.lookup(SuccL) && "loops should have unique parents");
        VLoops[SuccL] = new VLoop(this, nullptr, nullptr, CurVL);
        VisitLoop(SuccL);
      }
      // otherwise Succ is an exit block and is visited by VistLoop(SuccL)
    }

    Bodies[CurL].push_back(BB);
  };

  VisitBlock(&F->getEntryBlock());

  for (auto &KV : Bodies) {
    Loop *L = KV.first;
    auto *VL = VLoops.lookup(L);
    assert(VL);

    if (L) {
      assert(L->isRotatedForm());
      VL->setLoopCond(CDA.getConditionForBlock(L->getLoopPreheader()));

      auto *Preheader = L->getLoopPreheader();
      auto *Header = L->getHeader();
      auto *Latch = L->getLoopLatch();

      // Figure out the condition for taking the backedge (vs exiting the loop)
      auto *LoopBr = cast<BranchInst>(Latch->getTerminator());
      auto *LatchCond = CDA.getConditionForBlock(Latch);
      // Back edge taken === reaches latch && back edge taken
      if (LoopBr->isConditional())
        VL->setBackEdgeCond(
            CT.getAnd(LatchCond, LoopBr->getCondition(),
                      LoopBr->getSuccessor(0) == L->getHeader()));
      else
        VL->setBackEdgeCond(LatchCond);

      // Figure out the mu nodes
      for (PHINode &PN : Header->phis()) {
        assert(PN.getNumIncomingValues() == 2);

        // Canonicalize the phi-node so that first value is the init. and second
        // iter.
        auto *Init = PN.getIncomingValueForBlock(Preheader);
        auto *Iter = PN.getIncomingValueForBlock(Latch);
        PN.setIncomingValue(0, Init);
        PN.setIncomingValue(1, Iter);
        PN.setIncomingBlock(0, Preheader);
        PN.setIncomingBlock(1, Latch);

        VL->addMu(&PN);
      }
    }

    for (auto BlockOrLoop : reverse(KV.second)) {
      if (auto *BB = BlockOrLoop.dyn_cast<BasicBlock *>()) {
        auto *C = CDA.getConditionForBlock(BB);
        for (auto &I : *BB) {
          if (I.isTerminator() && !isa<ReturnInst>(&I))
            continue;

          auto *PN = dyn_cast<PHINode>(&I);
          if (PN && !VL->isMu(PN))
            VL->insert(PN, C, CDA);
          else if (!PN)
            VL->insert(&I, C);
        }
      } else {
        auto *SubVL = VLoops.lookup(BlockOrLoop.get<Loop *>());
        assert(SubVL);
        VL->insert(SubVL);
      }
    }
  }
}
