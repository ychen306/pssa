#ifndef VEGEN_VERSIONING_H
#define VEGEN_VERSIONING_H

#include "ConditionUserTracker.h"
#include "DependenceChecker.h"
#include "llvm/ADT/DenseMap.h"
#include "llvm/ADT/EquivalenceClasses.h"
#include "llvm/Transforms/Utils/ValueMapper.h"
#include <functional>

// Mapping an item that we want to version -> the versioning condition
using VersioningMapTy =
    llvm::DenseMap<Item, std::vector<DepCondition>, ItemHashInfo>;

class Versioner {
  PredicatedSSA &PSSA;
  llvm::ScalarEvolution &SE;
  DependenceChecker DepChecker;
  IndependenceTracker IndepTracker;

  llvm::DenseMap<llvm::Instruction *, llvm::Instruction *> CloneToOrigMap;
  llvm::DenseMap<const ControlCondition *, const ControlCondition *> OrigConds;
  // Mapping a <strengthened condition> -> <the flag that it's strengthened
  // with>
  llvm::DenseMap<const ControlCondition *, std::pair<llvm::Value *, bool>>
      StrengthenedConds;
  // Mapping an instruction -> its versioning phis (we have multiple phis when
  // we have nested versioning)
  llvm::DenseMap<llvm::Instruction *, std::vector<llvm::Instruction *>>
      VersioningPhisMap;

  ConditionUserTracker CUT;

  using CallbackTy = std::function<void(Item, Item)>;
  VLoop *cloneLoop(VLoop *OrigVL, llvm::ValueToValueMapTy &VMap,
                   CallbackTy Callback);

  void runOnLoop(VLoop *, const VersioningMapTy &);

public:
  Versioner(PredicatedSSA &PSSA, llvm::DependenceInfo &DI, llvm::AAResults &AA,
            llvm::LoopInfo &LI, llvm::ScalarEvolution &SE)
      : PSSA(PSSA), SE(SE),
        DepChecker(PSSA, DI, AA, LI, SE, nullptr /*dead insts*/, this),
        IndepTracker(*this, PSSA), CUT(PSSA) {}

  // Items in the same EC will get the same versioning conditions 
  // (by merging their original versioning conditions)
  void
  run(llvm::ArrayRef<Versioning *>,
      const llvm::EquivalenceClasses<Item> &EC,
      const llvm::DenseMap<DepEdge, llvm::DenseSet<DepEdge>> &InterLoopDeps,
      bool RemoveRedundantConditions);

  IndependenceTracker &getIndependenceTracker() { return IndepTracker; }
  llvm::Instruction *getOriginalIfCloned(llvm::Instruction *I) const {
    return CloneToOrigMap.lookup(I);
  }
  llvm::ArrayRef<llvm::Instruction *>
  getVersioningPhis(llvm::Instruction *I) const {
    auto It = VersioningPhisMap.find(I);
    if (It == VersioningPhisMap.end())
      return {};
    return It->second;
  }
  // If we strenghtened an instruction's condition to C during versioning,
  // return the original condition
  const ControlCondition *
  getOriginalCondition(const ControlCondition *C) const {
    return OrigConds.lookup(C);
  }
  // Get C', a strengthened version of C, such that C' is true if Flag is true
  // (or false)
  const ControlCondition *strengthenCondition(const ControlCondition *C,
                                              llvm::Value *Flag, bool IsTrue);
  bool isExclusive(const ControlCondition *, const ControlCondition *);
};

#endif // end VEGEN_VERSIONING_H
