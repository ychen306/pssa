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

bool LooseInstructionTable::insertInto(ArrayRef<Instruction *> Insts,
                                       PredicatedSSA &PSSA,
                                       DependenceChecker &DepChecker,
                                       ReductionInfo &RI) {
  // Collect all of the reductions being produced
  std::vector<std::pair<Reduction *, Reducer *>> Reductions;
  std::function<void(Value *)> CollectRdxs = [&](Value *V) {
    auto *R = dyn_cast<Reducer>(V);
    if (!R)
      return;
    Reductions.emplace_back(R->getResult(), R);
    llvm::for_each(R->operand_values(), CollectRdxs);
  };

  llvm::for_each(Insts, CollectRdxs);

  // Step 1:
  // rewire the loose instructions to use `Reducers` instead of `Reductions`
  for (auto [Rdx, R] : Reductions) {
    for (auto *V : RI.getValuesForReduction(Rdx))
      V->replaceAllUsesWith(R);
    Rdx->replaceAllUsesWith(R);
  }

  errs() << "Num loose instructions " << Insts.size() << '\n';

  // Step 2: insert the loose instructions (and their loose operands)
  std::function<bool(Value *)> InsertIfLoose = [&](Value *V) -> bool {
    auto *I = dyn_cast<Instruction>(V);
    errs() << "???? trying to insert " << *V << '\n';
    if (!I || !isLoose(I))
      return true;

    for (auto *O : I->operand_values()) {
      bool Ok = InsertIfLoose(O);
      if (!Ok)
        return false;
    }

    assert(LooseInsts.count(I));
    auto Loc = LooseInsts[I];
    auto *VL = Loc.VL;

    errs() << "Inserting " << *I << "\n";

    // Find the earliest user of `I` inside `VL`,
    // this is where we will *try* to insert the instruction
    Optional<Item> Earliest;
    for (auto *U : I->users()) {
      errs() << "???? " << *U << '\n';
      if (isLoose(U))
        continue;
      auto *R = dyn_cast<Reducer>(U);
      if (R)
        errs() << "!!!! used by reducer " << *R << '\n';
      else
        errs() << "!!! used by inst " << *U << '\n';

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

      errs() << "~~~ earliest = " << *Earliest->asInstruction() << '\n';
      errs() << "Moving " << Deps.size() << " deps\n";

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
