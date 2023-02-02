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
}

void LooseInstructionTable::addLoose(Reducer *R, VLoop *VL, const ControlCondition *C) {
  assert(!LooseInsts.count(R) && "attempting to insert loose reducer twice");
  LooseInsts.try_emplace(R, Location{VL, C});
}

bool LooseInstructionTable::insertInto(ArrayRef<Instruction *> Insts,
                                       PredicatedSSA &PSSA,
                                       DependenceChecker &DepChecker,
                                       ReductionInfo &RI) {
  // Collect all of the reductions being produced
  DenseMap<Reduction *, Reducer *> ReductionToReducerMap;
  DenseSet<Value *> Visited;
  std::function<void(Value *)> CollectRdxs = [&](Value *V) {
    if (!Visited.insert(V).second)
      return;

    auto *R = dyn_cast<Reducer>(V);
    if (!R)
      return;
    ReductionToReducerMap.try_emplace(R->getResult(), R);
    llvm::for_each(R->operand_values(), CollectRdxs);
  };

  llvm::for_each(Insts, CollectRdxs);

  // Step 1:
  // rewire the loose instructions to use `Reducers` instead of `ReductionToReducerMap`
  for (auto [Rdx, R] : ReductionToReducerMap) {
    for (auto *V : RI.getValuesForReduction(Rdx))
      V->replaceAllUsesWith(R);
    Rdx->replaceAllUsesWith(R);
  }

  // Step 2: insert the loose instructions (and their loose operands)
  std::function<bool(Value *)> InsertIfLoose = [&](Value *V) -> bool {
    auto *I = dyn_cast<Instruction>(V);
    if (!I || !isLoose(I))
      return true;

    if (auto *PN = dyn_cast<PHINode>(V); PN && LooseMus.count(PN)) {
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

    // Insert VL at the end of VL, we may have to move it again if it has some
    // users
    VL->insert(I, Loc.C, VL->item_end());
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

PHINode *LooseInstructionTable::createLooseMu(VLoop *VL, Value *InitVal) {
  auto *Mu = PHINode::Create(InitVal->getType(), 2);
  Mu->setNumHungOffUseOperands(2);
  Mu->setIncomingValue(0, InitVal);
  LooseMus.try_emplace(Mu, VL);
  return Mu;
}

LooseInstructionTable::~LooseInstructionTable() {
  // The table owns all of the loose instructions
  // that are still left in the table
  for (Instruction *I : make_first_range(LooseInsts))
    I->dropAllReferences();
  for (PHINode *Mu : make_first_range(LooseMus))
    Mu->dropAllReferences();
}
