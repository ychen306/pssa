#include "VLoop.h"
#include "ControlDependence.h"
#include "llvm/Transforms/Utils/Cloning.h"
#include "llvm/ADT/PostOrderIterator.h"
#include "llvm/Analysis/LoopInfo.h"
#include "llvm/Analysis/LoopIterator.h"
#include "llvm/Transforms/Utils/ValueMapper.h"
#include "llvm/IR/Dominators.h"
#include "llvm/IR/InstIterator.h"
#include "llvm/Analysis/PostDominators.h"

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
  return Items.insert(InsertBefore ? *InsertBefore : Items.end(), I);
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
  return Items.insert(InsertBefore ? *InsertBefore : Items.end(), SubVL);
}

PredicatedSSA buildPSSA(Function *SrcF) {
  ValueToValueMapTy VMap;
  auto *F = CloneFunction(SrcF, VMap);

  // Remap instructions to use the argument of SrcF
  ValueToValueMapTy ArgMap;
  for (auto Pair : llvm::zip(F->args(), SrcF->args()))
    ArgMap[&std::get<0>(Pair)] = &std::get<1>(Pair);
  for (auto &I : instructions(F))
    RemapInstruction(&I, ArgMap,
                     RF_NoModuleLevelChanges | RF_IgnoreMissingLocals);

  PredicatedSSA PSSA;
  auto &CT = PSSA.CT;

  DominatorTree DT(*F);
  PostDominatorTree PDT(*F);
  LoopInfo LI(DT);
  ControlDependenceAnalysis CDA(LI, DT, PDT, CT);

  PSSA.TopVL = std::move(std::make_unique<VLoop>());
  auto *TopVL = PSSA.TopVL.get();

  ReversePostOrderTraversal<Function *> RPO(F);
  SmallPtrSet<Loop *, 8> Visited;
  SmallVector<std::pair<VLoop *, Loop *>> Worklist;

  // Populate the loop items in program order
  for (auto *BB : RPO) {
    auto *L = LI.getLoopFor(BB);
    if (!L) {
      // BB is not contained in any loop
      auto *C = CDA.getConditionForBlock(BB);
      for (auto &SrcI : *BB) {
        if (SrcI.isTerminator() && !isa<ReturnInst>(&SrcI))
          continue;

        auto I = &SrcI;

        if (auto *PN = dyn_cast<PHINode>(I))
          TopVL->insert(PN, C, CDA);
        else
          TopVL->insert(I, C);
        PSSA.mapInstToLoop(I, TopVL);
      }
    } else {
      // BB is contained in some loop, get the top-level loop that contains BB
      while (L->getParentLoop() != nullptr)
        L = L->getParentLoop();
      assert(L);
      // skip if we've seen this sub-loop before
      if (!Visited.insert(L).second)
        continue;
      auto *SubVL = new VLoop(nullptr, nullptr, TopVL);
      TopVL->insert(SubVL);
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
      VL->setBackEdgeCond(
          CT.getAnd(LatchCond, LoopBr->getCondition(),
                     LoopBr->getSuccessor(0) == L->getHeader()));
    else
      VL->setBackEdgeCond(LatchCond);

    // Figure out the mu nodes
    for (PHINode &SrcPN : Header->phis()) {
      assert(SrcPN.getNumIncomingValues() == 2);

      auto *PN = &SrcPN;
      // Canonicalize the phi-node so that first value is the init. and second
      // iter.
      auto *Init = PN->getIncomingValueForBlock(Preheader);
      auto *Iter = PN->getIncomingValueForBlock(Latch);
      PN->setIncomingValue(0, Init);
      PN->setIncomingValue(1, Iter);
      PN->setIncomingBlock(0, Preheader);
      PN->setIncomingBlock(1, Latch);

      VL->addMu(PN);
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
        for (auto &SrcI : *BB) {
          if (SrcI.isTerminator() && !isa<ReturnInst>(&SrcI))
            continue;

          auto *I = &SrcI;

          auto *PN = dyn_cast<PHINode>(I);
          if (PN && !VL->isMu(PN))
            VL->insert(PN, C, CDA);
          else
            VL->insert(I, C);
          PSSA.mapInstToLoop(I, VL);
        }
      } else {
        while (L2->getParentLoop() != L)
          L2 = L2->getParentLoop();
        assert(L2 && L2->getParentLoop() == L);
        // Skip if we've seen L2 before
        if (!Visited.insert(L2).second)
          continue;
        auto *SubVL = new VLoop(nullptr, nullptr, VL);
        VL->insert(SubVL);
        Worklist.emplace_back(SubVL, L2);
      }
    }
  }

  std::vector<Instruction *> Insts;
  for (auto &I : instructions(F))
    Insts.push_back(&I);
  for (auto *I : Insts) {
    if (I->isTerminator() && !isa<ReturnInst>(I))
      I->eraseFromParent();
    else
      I->removeFromParent();
  }
  F->dropAllReferences();

  return PSSA;
}
