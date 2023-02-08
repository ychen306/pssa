#include "LooseInstructionTable.h"
#include "DependenceChecker.h"
#include "ItemMover.h"
#include "Reducer.h"
#include "pssa/PSSA.h"

using namespace llvm;

void LooseInstructionTable::addLoose(Reducer *R) {
  assert(!LooseInsts.count(R) && "attempting to insert loose reducer twice");
  auto *Rdx = R->getResult();
  LooseInsts.try_emplace(R,
                         Location{Rdx->getParentLoop(), Rdx->getParentCond()});
  InstToReductionMap.try_emplace(R, R->getResult());
}

void LooseInstructionTable::addLoose(Reducer *R, VLoop *VL,
                                     const ControlCondition *C) {
  assert(!LooseInsts.count(R) && "attempting to insert loose reducer twice");
  LooseInsts.try_emplace(R, Location{VL, C});
  InstToReductionMap.try_emplace(R, R->getResult());
}

void UniqueReducer::Profile(FoldingSetNodeID &ID) const {
  ID.AddPointer(Rdx);
  ID.AddPointer(VL);
  ID.AddPointer(C);
  for (auto *V : Elts)
    ID.AddPointer(V);
}

Reducer *LooseInstructionTable::findOrCreateReducer(Reduction *Rdx,
                                                    ArrayRef<Value *> Elts,
                                                    VLoop *VL,
                                                    const ControlCondition *C) {
  auto *UR = new (UniqueReducerAllocator) UniqueReducer(Rdx, Elts, VL, C);
  UR = UniqueReducers.GetOrInsertNode(UR);
  if (!UR->R)
    UR->R = Reducer::Create(Rdx, Elts);
  return UR->R;
}

Reducer *LooseInstructionTable::getOrCreateReducer(Reduction *Rdx,
                                                   ArrayRef<Value *> Elts,
                                                   const llvm::Twine &Name) {
  auto *R = findOrCreateReducer(Rdx, Elts, Rdx->getParentLoop(),
                                Rdx->getParentCond());
  R->setName(Name);
  addLoose(R);
  return R;
}

Reducer *LooseInstructionTable::getOrCreateReducer(Reduction *Rdx,
                                                   ArrayRef<Value *> Elts,
                                                   VLoop *VL,
                                                   const ControlCondition *C,
                                                   const llvm::Twine &Name) {
  auto *R = findOrCreateReducer(Rdx, Elts, VL, C);
  R->setName(Name);
  addLoose(R, VL, C);
  return R;
}

bool LooseInstructionTable::insertInto(ArrayRef<Instruction *> Insts,
                                       PredicatedSSA &PSSA,
                                       DependenceChecker &DepChecker,
                                       ReductionInfo &RI) {
  // Collect all of the reductions being produced
  DenseMap<Reduction *, Instruction *> ReductionToInstMap;
  DenseSet<Value *> Visited;
  std::function<void(Value *)> CollectRdxs = [&](Value *V) {
    if (!Visited.insert(V).second)
      return;
    auto *I = dyn_cast<Instruction>(V);
    if (!I)
      return;
    if (auto *Rdx = InstToReductionMap.lookup(I))
      ReductionToInstMap.try_emplace(Rdx, I);
    llvm::for_each(I->operand_values(), CollectRdxs);
  };

  llvm::for_each(Insts, CollectRdxs);

  // Step 1:
  // rewire the loose instructions to use `Reducers` instead of
  // `ReductionToReducerMap`
  for (auto [Rdx, R] : ReductionToInstMap) {
    for (auto *V : RI.getValuesForReduction(Rdx))
      V->replaceAllUsesWith(R);
    Rdx->replaceAllUsesWith(R);
  }

  // Step 2: insert the loose instructions (and their loose operands)
  std::function<bool(Value *)> InsertIfLoose = [&](Value *V) -> bool {
    auto *I = dyn_cast<Instruction>(V);
    if (!I || !isLoose(I))
      return true;

    auto *PN = dyn_cast<PHINode>(V);
    if (PN && LooseMus.count(PN)) {
      auto *VL = LooseMus.lookup(PN);
      VL->addMu(PN);
      LooseMus.erase(PN);
      return true;
    }

    for (auto *O : I->operand_values()) {
      bool Ok = InsertIfLoose(O);
      if (!Ok)
        return false;
    }

    assert(LooseInsts.count(I));
    auto Loc = LooseInsts[I];
    auto *VL = Loc.VL;

    // Find the earliest user of `I` inside `VL`,
    // this is where we will *try* to insert the instruction
    Optional<Item> Earliest;
    for (auto *U : I->users()) {
      if (isLoose(U) || VL->isMu(U))
        continue;

      auto *UI = cast<Instruction>(U);
      auto *UserVL = PSSA.getLoopForInst(UI);
      // ignore out-of-loop user
      if (!VL->contains(UserVL))
        continue;

      Item UserIt = UI;
      // Find the outermost loop within VL that contains UserIt
      while (UserVL != VL) {
        UserIt = UserVL;
        UserVL = UserVL->getParent();
      }
      if (!Earliest || VL->comesBefore(UserIt, *Earliest))
        Earliest = UserIt;
    }

    // Insert VL at the end of VL.
    // We may have to move it again if it has some users
    if (!PN) {
      VL->insert(I, Loc.C, VL->item_end());
    } else {
      // Insert one-hot phi as a special case
      assert(OneHotConds.count(PN) && "unexpected loose phi-node");
      // We assume all loose phi conds are
      auto *GateC = OneHotConds.lookup(PN);
      assert(GateC);
      assert(LooseInsts.count(I));
      auto Loc = LooseInsts[I];
      VL->insert(PN, {Loc.C, GateC}, Loc.C, VL->item_end());
      VL->markOneHot(PN);
    }

    // If there's a user of I in VL, we may have to move it
    if (Earliest) {
      // Find all dependences of `I` that occurs *after* `Earliest`.
      // We will move those dependencies *before* `Earliest`
      SmallVector<Item> Deps;
      DependencesFinder DepFinder(Deps, *Earliest, VL, DepChecker);
      bool FoundCycle = DepFinder.findDep(I);
      if (FoundCycle)
        return false;

      auto InsertPt = VL->toIterator(*Earliest);

      // Move these deps before Earliest
      ItemMover Mover(VL);
      for (auto Dep : Deps)
        Mover.remove(Dep);
      Mover.reinsert(InsertPt);

      // Move I to before Earliest
      Mover.remove(I);
      Mover.reinsert(InsertPt);
    }

    // Not loose anymore after insertion
    LooseInsts.erase(I);
    return true;
  };

  for (auto *I : Insts) {
    bool Ok = InsertIfLoose(I);
    if (!Ok)
      return false;
  }

  return true;
}

PHINode *LooseInstructionTable::createMu(VLoop *VL, Value *InitVal) {
  auto *Mu = PHINode::Create(InitVal->getType(), 2);
  Mu->setNumHungOffUseOperands(2);
  Mu->setIncomingValue(0, InitVal);
  LooseMus.try_emplace(Mu, VL);
  return Mu;
}

void UniqueOneHotPhi::Profile(FoldingSetNodeID &ID) const {
  ID.AddPointer(VL);
  ID.AddPointer(GateC);
  ID.AddPointer(IfTrue);
  ID.AddPointer(IfFalse);
  ID.AddPointer(C);
  ID.AddPointer(Rdx);
}

PHINode *LooseInstructionTable::createOneHotPhi(VLoop *VL,
                                                const ControlCondition *GateC,
                                                Value *IfTrue, Value *IfFalse,
                                                const ControlCondition *C,
                                                Reduction *Rdx) {
  assert(IfTrue->getType() == IfFalse->getType());
  auto *UniquePN = new (UniqueOneHotPhiAllocator)
      UniqueOneHotPhi(VL, GateC, IfTrue, IfFalse, C, Rdx);
  UniquePN = UniqueOneHotPhis.GetOrInsertNode(UniquePN);
  if (UniquePN->PN)
    return UniquePN->PN;

  auto *PN = PHINode::Create(IfTrue->getType(), 2);
  PN->setNumHungOffUseOperands(2);
  // By default, set the true value/condition last.
  PN->setIncomingValue(0, IfFalse);
  PN->setIncomingValue(1, IfTrue);
  LooseInsts.try_emplace(PN, Location{VL, C});
  OneHotConds.try_emplace(PN, GateC);
  InstToReductionMap[PN] = Rdx;
  return UniquePN->PN = PN;
}

LooseInstructionTable::~LooseInstructionTable() {
  // The table owns all of the loose instructions
  // that are still left in the table
  for (Instruction *I : make_first_range(LooseInsts))
    I->dropAllReferences();
  for (PHINode *Mu : make_first_range(LooseMus))
    Mu->dropAllReferences();
}
