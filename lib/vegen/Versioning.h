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

class IndependenceTracker {
  using NodeToNodeSetTy = llvm::DenseMap<DepNode, llvm::DenseSet<DepNode>>;
  // Mapping a node -> nodes that it's *conditionally* independent from
  NodeToNodeSetTy IndependentFrom;

  // Mapping a node -> nodes that it's independent from once the node is fully
  // versioned
  NodeToNodeSetTy NodeToDepsMap;

  llvm::DenseMap<std::pair<VLoop *, DepNode>, llvm::DenseSet<DepNode>>
      LoopToDepsMap;

  Versioner &TheVersioner;
  PredicatedSSA &PSSA;
  llvm::DenseSet<DepEdge> Whitelist;
  bool checkIndependence(const DepNode &Src, const DepNode &Dest) const;

public:
  IndependenceTracker(Versioner &TheVersioner, PredicatedSSA &PSSA);
  void ignoreDependences(
      const llvm::DenseSet<DepEdge> &DepEdgesToIgnore,
      const llvm::DenseSet<DepEdge> &AliasedEdgesToIgnore,
      const llvm::DenseMap<DepEdge, llvm::DenseSet<DepEdge>> &InterLoopDeps);
  void markInstAsVersioned(llvm::Instruction *Orig, llvm::Instruction *Cloned);
  // Mark a loop as versioned (and activate one of the loop instruction's
  // conditional independences).
  void markLoopInstAsVersioned(llvm::Instruction *Orig,
                               llvm::Instruction *Cloned, VLoop *VL);

  bool isIndependent(const DepNode &Src, const DepNode &Dest) const;
};

namespace llvm {
class Reducer;
}

class Versioner {
  PredicatedSSA &PSSA;
  llvm::ScalarEvolution &SE;
  DependenceChecker DepChecker;
  IndependenceTracker IndepTracker;

  llvm::DenseMap<llvm::Instruction *, llvm::Instruction *> CloneToOrigMap;
  llvm::DenseMap<const ControlCondition *, const ControlCondition *> OrigConds;
  // Mapping a <strengthened condition> -> <the flag that it's strengthened
  // with>
  // llvm::DenseMap<const ControlCondition *, std::pair<llvm::Value *, bool>>
  llvm::DenseMap<const ControlCondition *,
                 llvm::SmallVector<std::pair<llvm::Value *, bool>, 2>>
      StrengthenedConds;
  // Mapping an instruction -> its versioning phis (we have multiple phis when
  // we have nested versioning)
  llvm::DenseMap<llvm::Instruction *, std::vector<llvm::Instruction *>>
      VersioningPhisMap;

  // Keep track of use old values before versioning to allow temporarily revert
  // back to the old values so that analyses like ScalarEvolution will still
  // work.
  llvm::DenseMap<llvm::Use *, llvm::Value *> OldUses;
  // Similar to OldUses, except for "unrevert"
  llvm::DenseMap<llvm::Use *, llvm::Value *> NewUses;
  // Conditions falsified by versioning
  llvm::DenseSet<const ControlCondition *> FalseConds;

  ////////////
  llvm::DenseMap<Item, Item, ItemHashInfo> OrigToCloneMap;
  ////////
  void reset() { OrigToCloneMap.clear(); }

  ConditionUserTracker CUT;

  llvm::SmallVector<llvm::Reducer *> ClonedReducers;

  using CallbackTy = std::function<void(Item, Item)>;
  VLoop *cloneLoop(VLoop *OrigVL, llvm::ValueToValueMapTy &VMap,
                   CallbackTy Callback);

  void runOnLoop(VLoop *, const VersioningMapTy &);
  void registerNewCondition(const ControlCondition *, const ControlCondition *);
  llvm::Instruction *cloneInst(llvm::Instruction *);
  void recordCloning(Item It, Item ClonedIt);

public:
  Versioner(PredicatedSSA &PSSA, WrappedDependenceInfo &DI, CachingAA &AA,
            llvm::LoopInfo &LI, llvm::ScalarEvolution &SE)
      : PSSA(PSSA), SE(SE),
        DepChecker(PSSA, DI, AA, LI, SE, nullptr /*dead insts*/, this),
        IndepTracker(*this, PSSA), CUT(PSSA) {}

  // Items in the same EC will get the same versioning conditions
  // (by merging their original versioning conditions)
  void
  run(llvm::ArrayRef<Versioning *>, const llvm::EquivalenceClasses<Item> &EC,
      const llvm::DenseMap<DepEdge, llvm::DenseSet<DepEdge>> &InterLoopDeps,
      ConditionSetTracker &);

  bool isIndependent(const Item &Src, const Item &Dst) const {
    return IndepTracker.isIndependent(Src, Dst);
  }
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
  const ControlCondition *
  strengthenCondition(const ControlCondition *C, llvm::Value *Flag,
                      llvm::ArrayRef<DepCondition> DepConds, bool IsTrue);
  bool isExclusive(const ControlCondition *, const ControlCondition *);
  llvm::ArrayRef<llvm::Reducer *> getClonedReducers() const {
    return ClonedReducers;
  }

  bool isFalse(const ControlCondition *C) const { return C && FalseConds.count(C); }

  void undo() const;
  void redo() const;
};

// Check if the proposed versioning plan is feasible to lower
bool isVersioningPlanFeasible(const VersioningPlan &,
                              llvm::EquivalenceClasses<Item> EC,
                              DependenceChecker &DepChecker, PredicatedSSA &,
                              llvm::ScalarEvolution &);

// See Versionier::run for EC for merging conditions
void lowerVersioningPlan(VersioningPlan &, Versioner &,
                         llvm::EquivalenceClasses<Item> EC, PredicatedSSA &,
                         llvm::ScalarEvolution &);

#endif // end VEGEN_VERSIONING_H
