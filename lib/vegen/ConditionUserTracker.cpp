#include "ConditionUserTracker.h"

using namespace llvm;

// Populate InstToCondsMap map.
void ConditionUserTracker::processCondition(const ControlCondition *C) {
  if (!C || !VisitedConds.insert(C).second)
    return;

  SmallVector<const ControlCondition *> Worklist {C};
  DenseSet<Instruction *> Insts;
  DenseSet<const ControlCondition *> Visited;
  while (!Worklist.empty()) {
    auto *C2 = Worklist.pop_back_val();
    if (!C2)
      continue;
    if (!Visited.insert(C2).second)
      continue;

    if (auto *Or = dyn_cast<ConditionOr>(C2)) {
      append_range(Worklist, Or->Conds);
      continue;
    }

    auto *And = cast<ConditionAnd>(C2);
    if (auto *I = dyn_cast<Instruction>(And->Cond)) {
      Insts.insert(I);
    }
    Worklist.push_back(And->Parent);
  }

  for (auto *I : Insts)
    InstToCondsMap[I].insert(C);
}

void ConditionUserTracker::add(Item It) {
  SmallVector<Item> Worklist{It};
  while (!Worklist.empty()) {
    auto It = Worklist.pop_back_val();

    if (auto *VL = It.asLoop()) {
      Worklist.append(VL->item_begin(), VL->item_end());
      if (!VL->isLoop())
        continue;
      auto *LoopCond = VL->getLoopCond();
      auto *BackEdgeCond = VL->getBackEdgeCond();
      CondToUsersMap[LoopCond].push_back(VL);
      CondToUsersMap[BackEdgeCond].push_back(VL);
      processCondition(LoopCond);
      processCondition(BackEdgeCond);
      continue;
    }

    auto *I = It.asInstruction();
    assert(I);
    auto *C = PSSA.getInstCond(I);
    processCondition(C);
    CondToUsersMap[C].push_back(I);
    auto *PN = dyn_cast<PHINode>(I);
    if (!PN)
      continue;
    for (auto *PhiC : PSSA.getPhiConditions(PN)) {
      processCondition(PhiC);
      CondToUsersMap[PhiC].push_back(I);
    }
  }
}

void ConditionUserTracker::getUsers(ConditionUserTracker::UserSet &Users,
                                    llvm::Instruction *I) {
  for (auto *C : InstToCondsMap[I]) {
    auto Items = CondToUsersMap[C];
    for (auto It : Items) {
      if (auto *I = It.asInstruction(); I && Deleted.count(I))
        continue;
      Users.insert(It);
    }
  }
}
