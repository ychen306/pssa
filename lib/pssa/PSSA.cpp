#include "pssa/PSSA.h"
#include "pssa/ControlDependence.h"
#include "llvm/ADT/PostOrderIterator.h"
#include "llvm/Analysis/LoopInfo.h"
#include "llvm/Analysis/LoopIterator.h"

using namespace llvm;

static SmallVector<const ControlCondition *, 4>
getIncomingConditions(PHINode *PN, ControlDependenceAnalysis &CDA) {
  SmallVector<const ControlCondition *, 4> Conds;
  for (auto *SrcBB : PN->blocks())
    Conds.push_back(CDA.getConditionForEdge(SrcBB, PN->getParent()));
  return Conds;
}

VLoop::ItemIterator VLoop::insert(Instruction *I, const ControlCondition *C,
                                  Optional<ItemIterator> InsertBefore) {
  assert((!isa<PHINode>(I) || isGatedPhi(cast<PHINode>(I))) &&
         "need to register phi conds before insert");
  InstConds[I] = C;
  auto It = Items.insert(InsertBefore ? *InsertBefore : Items.end(), I);
  PSSA->mapItemToLoop(It, this);
  return It;
}

VLoop::ItemIterator VLoop::insert(PHINode *PN,
                                  ArrayRef<const ControlCondition *> Conds,
                                  const ControlCondition *C,
                                  Optional<ItemIterator> InsertBefore) {
  PhiConds[PN].assign(Conds.begin(), Conds.end());
  return insert(PN, C);
}

VLoop::ItemIterator VLoop::insert(VLoop *SubVL,
                                  Optional<ItemIterator> InsertBefore) {
  auto It = Items.insert(InsertBefore ? *InsertBefore : Items.end(), SubVL);
  SubVL->Parent = this;
  PSSA->mapItemToLoop(It, this);
  return It;
}

bool VLoop::contains(VLoop *VL) const {
  if (VL == this)
    return true;
  if (!VL)
    return false;
  return contains(VL->getParent());
}

bool VLoop::comesBefore(const Item &A, const Item &B) const {
  // Nothing comes before a mu node
  if (isMu(dyn_cast_or_null<PHINode>(B.asInstruction())))
    return false;

  return Items.comesBefore(A, B);
}

VLoop::ItemIterator VLoop::toIterator(const Item &I) {
  return PSSA->toIterator(I);
}

bool VLoop::contains(Instruction *I) const {
  return contains(PSSA->getLoopForInst(I));
}

void PredicatedSSA::InsertPoint::insert(Instruction *I,
                                        const ControlCondition *C) {
  assert(VL);
  assert(!I->isTerminator());
  assert(!isa<PHINode>(I));
  VL->insert(I, C, It);
}

void VLoop::addMu(PHINode *PN) {
  Mus.insert(PN);
  assert(PSSA);
  PSSA->mapMuToLoop(PN, this);
}

PredicatedSSA::PredicatedSSA(Function *F, LoopInfo &LI, DominatorTree &DT,
                             PostDominatorTree &PDT)
    : Ctx(F->getContext()), LI(LI), TopVL(this) {
  ControlDependenceAnalysis CDA(LI, DT, PDT, CT);

  ReversePostOrderTraversal<Function *> RPO(F);
  SmallPtrSet<Loop *, 8> Visited;
  SmallVector<std::pair<VLoop *, Loop *>> Worklist;

  // Populate the loop items in program order
  for (auto *BB : RPO) {
    auto *L = LI.getLoopFor(BB);
    if (!L) {
      // BB is not contained in any loop
      auto *C = CDA.getConditionForBlock(BB);
      for (auto &I : *BB) {
        if (I.isTerminator() && !isa<ReturnInst>(&I))
          continue;

        if (auto *PN = dyn_cast<PHINode>(&I)) {
          TopVL.insert(PN, getIncomingConditions(PN, CDA), C);
        } else {
          TopVL.insert(&I, C);
        }
      }
    } else {
      // BB is contained in some loop, get the top-level loop that contains BB
      while (L->getParentLoop() != nullptr)
        L = L->getParentLoop();
      assert(L);
      // skip if we've seen this sub-loop before
      if (!Visited.insert(L).second)
        continue;
      auto *SubVL = new VLoop(this, nullptr, nullptr, &TopVL);
      TopVL.insert(SubVL);
      // Remember to build the child loop later
      Worklist.emplace_back(SubVL, L);
    }
  }

  while (!Worklist.empty()) {
    VLoop *VL;
    Loop *L;
    std::tie(VL, L) = Worklist.pop_back_val();

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
      VL->setBackEdgeCond(CT.getAnd(LatchCond, LoopBr->getCondition(),
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

          auto *PN = dyn_cast<PHINode>(&I);
          if (PN && !VL->isMu(PN))
            VL->insert(PN, getIncomingConditions(PN, CDA), C);
          else if (!PN)
            VL->insert(&I, C);
        }
      } else {
        while (L2->getParentLoop() != L)
          L2 = L2->getParentLoop();
        assert(L2 && L2->getParentLoop() == L);
        // Skip if we've seen L2 before
        if (!Visited.insert(L2).second)
          continue;
        auto *SubVL = new VLoop(this, nullptr, nullptr, VL);
        VL->insert(SubVL);
        Worklist.emplace_back(SubVL, L2);
      }
    }
  }
}
