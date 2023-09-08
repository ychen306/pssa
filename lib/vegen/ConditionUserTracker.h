#ifndef VEGEN_CONDITIONUSERSTRACKER_H
#define VEGEN_CONDITIONUSERSTRACKER_H

#include "pssa/PSSA.h"
#include "llvm/ADT/DenseSet.h"

class ConditionUserTracker {
  PredicatedSSA &PSSA;
  // Mapping <an instruction I> -> <conditions C that use I>
  llvm::DenseMap<llvm::Instruction *, llvm::DenseSet<const ControlCondition *>> InstToCondsMap;
  llvm::DenseSet<llvm::Instruction *> Deleted;
  // Mapping <a condition C> -> <items that uses C>
  llvm::DenseMap<const ControlCondition *, std::vector<Item>> CondToUsersMap;
  llvm::DenseSet<const ControlCondition *> VisitedConds;
  void processCondition(const ControlCondition *);
public:
  ConditionUserTracker(PredicatedSSA &PSSA) : PSSA(PSSA) { add(&PSSA.getTopLevel()); }
  void add(Item);
  void markInstAsDeleted(llvm::Instruction *I) { Deleted.insert(I); }
  using UserSet = llvm::DenseSet<Item, ItemHashInfo>; 
  // Get users of any condition C such that C uses I
  void getUsers(UserSet &Users, llvm::Instruction *I);
};

#endif // VEGEN_CONDITIONUSERSTRACKER_H
