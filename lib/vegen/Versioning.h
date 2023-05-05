#ifndef VEGEN_VERSIONING_H
#define VEGEN_VERSIONING_H

#include "DependenceChecker.h"
#include "llvm/ADT/DenseMap.h"

class Versioner {
public:
  // Mapping an item that we want to version -> the versioning condition
  using VersioningMapTy = llvm::DenseMap<Item, std::vector<DepCondition>, ItemHashInfo>;
private:
  PredicatedSSA &PSSA;
  llvm::ScalarEvolution &SE;
  const VersioningMapTy &VersioningMap;
  llvm::DenseMap<llvm::Instruction *, llvm::Instruction *> CloneToOrigMap;
  void runOnLoop(VLoop *);
public:
  Versioner(PredicatedSSA &PSSA, llvm::ScalarEvolution &SE, const VersioningMapTy &VersioningMap)
      : PSSA(PSSA), SE(SE), VersioningMap(VersioningMap) {}
  void run() { runOnLoop(&PSSA.getTopLevel()); }
};

#endif // end VEGEN_VERSIONING_H
