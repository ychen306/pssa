#include "BlockBuilder.h"
#include "pssa/ControlDependence.h"
#include "llvm/IR/IRBuilder.h"
#include "llvm/Support/Debug.h"

using namespace llvm;

#define DEBUG_TYPE "block-builder"

BlockBuilder::BlockBuilder(
    BasicBlock *EntryBB,
    std::function<llvm::Value *(llvm::Value *)> EmitCondition)
    : Ctx(EntryBB->getContext()), F(EntryBB->getParent()),
      EmitCondition(EmitCondition), ActiveConds({{nullptr, EntryBB}}) {}

BasicBlock *BlockBuilder::createBlock() {
  return BasicBlock::Create(Ctx, "", F);
}

namespace {

class ConditionEmitter {
  IRBuilder<> IRB;
  const ControlCondition *Common;
  std::function<llvm::Value *(llvm::Value *)> EmitCondition;
  DenseMap<const ControlCondition *, Value *> Emitted;

  Value *emitAnd(const ConditionAnd *And) {
    if (auto *V = Emitted.lookup(And))
      return V;
    auto *V =
        IRB.CreateAnd(emit(And->Parent),
                      And->IsTrue ? EmitCondition(And->Cond)
                                  : IRB.CreateNot(EmitCondition(And->Cond)));
    return Emitted[And] = V;
  }

  Value *emitOr(const ConditionOr *Or) {
    if (auto *V = Emitted.lookup(Or))
      return V;
    return Emitted[Or] = emitDisjunction(Or->Conds);
  }

public:
  ConditionEmitter(BasicBlock *BB, const ControlCondition *Common,
                   decltype(EmitCondition) EmitCondition)
      : IRB(BB), Common(Common), EmitCondition(EmitCondition) {}
  Value *emit(const ControlCondition *C) {
    if (C == Common || !C)
      return IRB.getTrue();
    if (auto *And = dyn_cast<ConditionAnd>(C))
      return emitAnd(And);
    return emitOr(cast<ConditionOr>(C));
  }
  Value *emitDisjunction(ArrayRef<const ControlCondition *> Conds) {
    SmallVector<Value *, 8> Values;
    for (auto *C : Conds)
      Values.push_back(emit(C));
    return IRB.CreateOr(Values);
  }
};

} // namespace

BasicBlock *BlockBuilder::getBlockFor(const ControlCondition *C) {
  if (auto *BB = ActiveConds.lookup(C))
    return BB;

  LLVM_DEBUG(dbgs() << "Getting block for " << *C << '\n');

  using CondSet = SmallPtrSet<const ControlCondition *, 4>;

  // Get active conditions that use C and
  // unmark all intermediate semi-active conditions.
  auto GetActiveConds = [&](const ControlCondition *C,
                            CondSet &Visited,
                            CondSet &Conds, CondSet &IncomingConds) {
    SmallVector<const ControlCondition *> Worklist{C};
    while (!Worklist.empty()) {
      auto *C2 = Worklist.pop_back_val();
      if (!Visited.insert(C2).second)
        continue;

      if (ActiveConds.count(C2)) {
        Conds.insert(C2);
        assert(!SemiActiveConds.count(C2));
        continue;
      }

      auto It = SemiActiveConds.find(C2);
      assert(It != SemiActiveConds.end());
      Worklist.append(It->second.begin(), It->second.end());

      for (auto *C2 : It->second) {
        if (!C2) continue;
        assert(ParentConds.count(C2));
        for (auto *ParentC : ParentConds[C2])
          IncomingConds.insert(ParentC);
      }
    }
  };

  // If C is a semi-active condition,
  // join all of the blocks using C to the block for C
  if (SemiActiveConds.count(C)) {
    CondSet Visited, Conds, IncomingConds;
    GetActiveConds(C, Visited, Conds, IncomingConds);
    SmallVector<const ControlCondition *, 4> UnresolvedConds;
    for (auto *C2 : IncomingConds) {
      if (!Visited.count(C2))
        UnresolvedConds.push_back(C2);
    }

    assert(UnresolvedConds.empty());
    auto *BB = createBlock();
    for (auto *C2 : Visited) {
      auto It = SemiActiveConds.find(C2);
      if (It != SemiActiveConds.end()) {
        SemiActiveConds.erase(It);
        if (C2 && C2 != C) {
          assert(ParentConds.count(C2));
          ParentConds.erase(C2);
        }
      }
    }

    for (auto *C2 : Conds) {
      auto It = ActiveConds.find(C2);
      assert(It != ActiveConds.end());
      BranchInst::Create(BB, It->second);
      ActiveConds.erase(It);
      if (C2) {
        assert(ParentConds.count(C2));
        ParentConds.erase(C2);
      }
    }

    ActiveConds[C] = BB;
    return BB;
  }

  if (auto *And = dyn_cast<ConditionAnd>(C)) {
    auto *IfTrue = createBlock();
    auto *IfFalse = createBlock();
    BranchInst::Create(IfTrue, IfFalse, EmitCondition(And->Cond),
                       getBlockFor(And->Parent));
    auto *BB = And->IsTrue ? IfTrue : IfFalse;

    assert(ActiveConds.count(And->Parent));
    ActiveConds.erase(And->Parent);
    SemiActiveConds[And->Parent].assign({And, And->Complement});
    ActiveConds[And] = BB;
    ActiveConds[And->Complement] = And->IsTrue ? IfFalse : IfTrue;
    ParentConds[And].assign({And->Parent});
    ParentConds[And->Complement].assign({And->Parent});
    return BB;
  }

  auto *Or = cast<ConditionOr>(C);
  LLVM_DEBUG(dbgs() << "Getting block for OR " << *Or << '\n');
  LLVM_DEBUG(dbgs() << "<<<<<<< TERMS TO JOIN <<<<<<<\n");
  for (auto *C2 : Or->Conds) {
    LLVM_DEBUG(dbgs() << "\t semi-active? " << SemiActiveConds.count(C2)
                      << ", is active? " << ActiveConds.count(C2)
                      << "\n\t cond = " << *C2 << '\n');
    if (!SemiActiveConds.count(C2))
      getBlockFor(C2);
  }

  bool AllAvailable = all_of(Or->Conds, [&](auto *C2) {
    return ActiveConds.count(C2) || SemiActiveConds.count(C2);
  });
  // Best case scenario: just join all of the terms
  if (AllAvailable) {
    auto *BB = createBlock();
    CondSet Visited, Conds, IncomingConds;
    for (auto *C2 : Or->Conds)
      GetActiveConds(C2, Visited, Conds, IncomingConds);
    SmallVector<const ControlCondition *, 4> UnresolvedConds;
    for (auto *C2 : IncomingConds) {
      if (!Visited.count(C2))
        UnresolvedConds.push_back(C2);
    }

    assert(UnresolvedConds.empty());
    for (auto *C2 : Conds) {
      auto It = ActiveConds.find(C2);
      assert(It != ActiveConds.end());
      BranchInst::Create(BB, It->second);
      ActiveConds.erase(It);
      SemiActiveConds[C2] = {Or};
      ParentConds[Or].push_back(C2);
    }
    return ActiveConds[Or] = BB;
  }

  auto *CommonC = Or->GreatestCommonCond;
  auto *AuxBB = getBlockFor(CommonC);
  auto *BB = createBlock();
  auto *DrainBB = createBlock();

  ConditionEmitter CE(AuxBB, CommonC, EmitCondition);
  BranchInst::Create(BB /*if true*/, DrainBB /*if false*/,
                     CE.emitDisjunction(Or->Conds), AuxBB);
  // Create a dummy condition that represents the complement of the disjunction.
  auto *DummyC = getDummyCondition();
  ActiveConds.erase(CommonC);
  ActiveConds[C] = BB;
  ActiveConds[DummyC] = DrainBB;
  SemiActiveConds[CommonC] = {C, DummyC};
  ParentConds[C].assign({CommonC});
  ParentConds[DummyC].assign({CommonC});
  return BB;
}

void BlockBuilder::setBlockForCondition(llvm::BasicBlock *BB,
                                        const ControlCondition *C) {
  assert(ActiveConds.count(C) && "can only set block for active condition");
  ActiveConds[C] = BB;
}

const ControlCondition *BlockBuilder::getDummyCondition() {
  return reinterpret_cast<const ControlCondition *>(++DummyCounter);
}
