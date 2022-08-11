#ifndef VEGEN_DEPENDENCECHECKER_H
#define VEGEN_DEPENDENCECHECKER_H

#include "llvm/ADT/ArrayRef.h"
#include "llvm/ADT/SmallVector.h"
#include <map>

namespace llvm {
class DependenceInfo;
class Instruction;
class AAResults;
class LoopInfo;
} // namespace llvm

class PredicatedSSA;
class VLoop;
class Item;
class PackSet;

bool mayReadOrWriteMemory(llvm::Instruction *I);
bool mayReadOrWriteMemory(const Item &It);

class DependenceChecker {
  struct LoopSummary {
    llvm::SmallVector<llvm::Instruction *, 8> LiveIns, MemoryInsts;
  };

  PredicatedSSA &PSSA;
  llvm::DependenceInfo &DI;
  llvm::AAResults &AA;
  llvm::LoopInfo &LI;

  // use std::map to avoid reacllocation
  std::map<VLoop *, LoopSummary> Summaries;

  void processLoop(VLoop *VL);
  llvm::ArrayRef<llvm::Instruction *> getMemoryInsts(VLoop *);

  bool hasDependency(llvm::Instruction *, llvm::Instruction *);

public:
  DependenceChecker(PredicatedSSA &PSSA, llvm::DependenceInfo &DI,
                    llvm::AAResults &AA, llvm::LoopInfo &LI)
      : PSSA(PSSA), DI(DI), AA(AA), LI(LI) {}

  void invalidate(VLoop *VL) { Summaries.erase(VL); }

  // Check if there's any *memory dependence* from It1 to It2 (assuming It1
  // comes before It2), assuming It1 and It2 have the same parent.
  bool depends(const Item &It1, const Item &It2);

  llvm::ArrayRef<llvm::Instruction *> getLiveIns(VLoop *VL);
};

// Find the dependences of Items but scan no further than the earliest Items
// Also report if there's any circular dep
bool findInBetweenDeps(llvm::SmallVectorImpl<Item> &Deps,
                       llvm::ArrayRef<Item> Items, VLoop *VL,
                       PredicatedSSA &PSSA, DependenceChecker &DepChecker,
                       const PackSet *Packs = nullptr);

#endif // VEGEN_DEPENDENCECHECKER_H
