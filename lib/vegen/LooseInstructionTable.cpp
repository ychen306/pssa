#include "LooseInstructionTable.h"
#include "Reducer.h"
#include "DependenceChecker.h"
#include "pssa/PSSA.h"

using namespace llvm;

void LooseInstructionTable::addLoose(Reducer *R) {
  assert(!LooseInsts.count(R) && "attempting to insert loose reducer twice");
  auto *Rdx = R->getResult();
  LooseInsts.try_emplace(R,
                         Location{Rdx->getParentLoop(), Rdx->getParentCond()});
}

bool LooseInstructionTable::insertInto(ArrayRef<Instruction *> Insts,
                                       PredicatedSSA &PSSA, DependenceChecker &DepChecker) {
  // Step 1:
  // rewire the loose instructions to use `Reducers` instead of `Reductions`
  for (auto *I : Insts) {
    assert(isLoose(I) && "can only insert loose instruction");
    auto *R = dyn_cast<Reducer>(I);
    if (!R)
      continue;
    auto *Rdx = R->getResult();
    Rdx->replaceAllUsesWith(I);
  }

  // Step 2: insert the loose instructions (and their loose operands)
  std::function<bool (Value *)> InsertIfLoose = [&](Value *V) -> bool {
    auto *I = dyn_cast<Instruction>(V);
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

    // Find the earliest user of `I` inside `VL`,
    // this is where we will *try* to insert the instruction
    assert(VL->item_begin() != VL->item_end());
    Item Earliest = *VL->item_end();
    for (auto *U : I->users()) {
      if (!isLoose(U))
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
      if (VL->comesBefore(UserIt, Earliest))
        Earliest = UserIt;
    }

    // Find all dependences of `I` that occurs *after* `Earliest`.
    // We will move those dependencies *before* `Earliest`
    SmallVector<Item> Deps;
    DependencesFinder DepFinder(Deps, Earliest, VL, DepChecker);

    // Move these deps before Earliest

    // Not loose anymore after insertion
    LooseInsts.erase(I);
  };

  for (auto *I : Insts) {
    bool Ok = InsertIfLoose(I);
    if (!Ok)
      return false;
  }
  return true;
}
