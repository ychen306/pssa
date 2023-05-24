#ifndef VEGEN_VERSIONING_H
#define VEGEN_VERSIONING_H

#include "DependenceChecker.h"
#include "llvm/ADT/DenseMap.h"
#include "llvm/Transforms/Utils/ValueMapper.h"
#include <functional>

// Mapping an item that we want to version -> the versioning condition
using VersioningMapTy =
    llvm::DenseMap<Item, std::vector<DepCondition>, ItemHashInfo>;

class Versioner {
  PredicatedSSA &PSSA;
  llvm::ScalarEvolution &SE;
  DependenceChecker DepChecker;
  const VersioningMapTy &VersioningMap;
  IndependenceTracker IndepTracker;

  llvm::DenseMap<llvm::Instruction *, llvm::Instruction *> CloneToOrigMap;

  using CallbackTy =
      std::function<void(llvm::Instruction *, llvm::Instruction *)>;
  VLoop *cloneLoop(VLoop *OrigVL, llvm::ValueToValueMapTy &VMap,
                   CallbackTy Callback);
  void runOnLoop(VLoop *);

public:
  Versioner(
      const llvm::DenseSet<DepEdge> &DepEdgesToIgnore,
      const llvm::DenseMap<DepEdge, llvm::DenseSet<DepEdge>> &InterLoopDeps,
      PredicatedSSA &PSSA, llvm::DependenceInfo &DI, llvm::AAResults &AA,
      llvm::LoopInfo &LI, llvm::ScalarEvolution &SE,
      const VersioningMapTy &VersioningMap)
      : PSSA(PSSA), SE(SE),
        DepChecker(PSSA, DI, AA, LI, SE, nullptr /*dead insts*/, this),
        VersioningMap(VersioningMap),
        IndepTracker(DepEdgesToIgnore, InterLoopDeps, *this) {}
  IndependenceTracker &getIndependenceTracker() { return IndepTracker; }
  void run() { runOnLoop(&PSSA.getTopLevel()); }
  llvm::Instruction *getOriginalIfCloned(llvm::Instruction *I) const {
    return CloneToOrigMap.lookup(I);
  }
};

// If an instruction/loop's has a versioning condition that's implied by its
// parent loop's versioning condition, remove it
void removeRedundantConditions(PredicatedSSA &, VersioningMapTy &);

#endif // end VEGEN_VERSIONING_H
