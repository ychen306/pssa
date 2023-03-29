#include "pssa/PSSA.h"
#include "pssa/ControlDependence.h"
#include "llvm/ADT/PostOrderIterator.h"
#include "llvm/Analysis/LoopInfo.h"
#include "llvm/Analysis/LoopIterator.h"
#include "llvm/IR/Dominators.h"
#include "llvm/Analysis/MustExecute.h" // mayContainIrreducibleControl

using namespace llvm;

static SmallVector<const ControlCondition *, 4>
canonicalizeAndGetConditions(PHINode *PN, ControlDependenceAnalysis &CDA) {
  struct Incoming {
    const ControlCondition *C;
    BasicBlock *BB;
    Value *V;
  };
  SmallVector<Incoming, 4> Incomings;

  for (auto [BB, V] : zip(PN->blocks(), PN->incoming_values())) {
    auto *C = CDA.getConditionForEdge(BB, PN->getParent());
    Incomings.push_back(Incoming{C, BB, V});
  }
  // Canonicalize the incoming values by their conditions
  //llvm::sort(Incomings,
  //           [](const Incoming &IncomingA, const Incoming &IncomingB) -> bool {
  //             return IncomingA.C < IncomingB.C;
  //           });
  SmallVector<const ControlCondition *, 4> Conds;
  for (unsigned i = 0; i < Incomings.size(); i++) {
    PN->setIncomingValue(i, Incomings[i].V);
    PN->setIncomingBlock(i, Incomings[i].BB);
    Conds.push_back(Incomings[i].C);
  }
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
  return insert(PN, C, InsertBefore);
}

VLoop::ItemIterator VLoop::insert(const ControlCondition *GateC, Value *IfTrue,
                                  Value *IfFalse, const ControlCondition *C,
                                  Optional<ItemIterator> InsertBefore) {
  assert(IfTrue->getType() == IfFalse->getType());
  auto *PN = PHINode::Create(IfTrue->getType(), 2);
  PN->setNumHungOffUseOperands(2);
  // By default, set the true value/condition last.
  PN->setIncomingValue(0, IfFalse);
  PN->setIncomingValue(1, IfTrue);
  OneHotPhis.insert(PN);
  return insert(PN, {C, GateC}, C, InsertBefore);
}

VLoop::ItemIterator VLoop::insert(VLoop *SubVL,
                                  Optional<ItemIterator> InsertBefore) {
  auto It = Items.insert(InsertBefore ? *InsertBefore : Items.end(), SubVL);
  SubVL->Parent = this;
  PSSA->mapItemToLoop(It, this);
  return It;
}

void VLoop::erase(ItemIterator It) {
  if (auto *I = It->asInstruction()) {
    InstConds.erase(I);
    if (auto *PN = dyn_cast<PHINode>(I)) {
      OneHotPhis.erase(PN);
      PhiConds.erase(PN);
    }
  }
  Items.erase(It);
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

VLoop::ItemIterator VLoop::toIterator(const Item &It) {
  auto *PN = dyn_cast_or_null<PHINode>(It.asInstruction());
  if (PN && isMu(PN))
    return Items.begin();

  return PSSA->toIterator(It);
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

PHINode *VLoop::createMu(Value *InitVal) {
  auto *Mu = PHINode::Create(InitVal->getType(), 2);
  Mu->setNumHungOffUseOperands(2);
  Mu->setIncomingValue(0, InitVal);
  addMu(Mu);
  return Mu;
}

void VLoop::eraseMu(PHINode *PN) {
  Mus.erase(PN);
  assert(PSSA);
  // FIXME: remove PN from PSSA::InstToVLoopMap?
}

const ControlCondition *VLoop::getInstCond(Instruction *I) const {
  if (auto *PN = dyn_cast<PHINode>(I); PN && isMu(PN))
    return nullptr;

  assert(InstConds.count(I));
  return InstConds.lookup(I);
}

PredicatedSSA::PredicatedSSA(Function *F, LoopInfo &LI, DominatorTree &DT,
                             PostDominatorTree &PDT, ScalarEvolution *SE)
    : F(F), TopVL(this), SE(SE) {
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
          TopVL.insert(PN, canonicalizeAndGetConditions(PN, CDA), C);
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
    auto [VL, L] = Worklist.pop_back_val();
    VLoopToLoopMap[VL] = L;

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
            VL->insert(PN, canonicalizeAndGetConditions(PN, CDA), C);
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

bool isConvertibleToPSSA(Function &F, LoopInfo &LI, DominatorTree &DT) {
  // Don't deal with irreducible CFG
  if (mayContainIrreducibleControl(F, &LI))
    return false;

  // We don't deal with things like switches or invoke
  for (auto &BB : F) {
    if (!isa<ReturnInst>(BB.getTerminator()) &&
        !isa<BranchInst>(BB.getTerminator()))
      return false;
  }

  // Don't deal with infinite loops or non-rotated loops
  for (auto *L : LI.getLoopsInPreorder()) {
    if (!L->isLoopSimplifyForm() || !L->isRotatedForm() || L->hasNoExitBlocks())
      return false;
  }

  // Don't deal with unreachable blocks
  for (auto &BB : F) {
    if (!DT.isReachableFromEntry(&BB))
      return false;
  }

  return true;
}

unsigned PredicatedSSA::getLoopDepth(VLoop *VL) {
  if (!VL->isLoop())
    return 0;
  return getOrigLoop(VL)->getLoopDepth();
}
