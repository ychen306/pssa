#ifndef VEGEN_DEPENDENCECHECKER_H
#define VEGEN_DEPENDENCECHECKER_H

#include "llvm/ADT/ArrayRef.h"
#include "llvm/ADT/SmallVector.h"
#include <map>

namespace llvm {
class DependenceInfo;
class Instruction;
} // namespace llvm

class VLoop;
class Item;

bool mayReadOrWriteMemory(llvm::Instruction *I);
bool mayReadOrWriteMemory(const Item &It);

class DependenceChecker {
  struct LoopSummary {
    llvm::SmallVector<llvm::Instruction *, 8> LiveIns, MemoryInsts;
  };

  llvm::DependenceInfo &DI;
  // use std::map to avoid reacllocation
  std::map<VLoop *, LoopSummary> Summaries;

  void processLoop(VLoop *VL);
  llvm::ArrayRef<llvm::Instruction *> getMemoryInsts(VLoop *);

public:
  DependenceChecker(llvm::DependenceInfo &DI) : DI(DI) {}

  void invalidate(VLoop *VL) { Summaries.erase(VL); }

  // Check if there's any *memory dependence* from It1 to It2 (assuming It1
  // comes before It2), assuming It1 and It2 have the same parent.
  bool depends(const Item &It1, const Item &It2);

  llvm::ArrayRef<llvm::Instruction *> getLiveIns(VLoop *VL);
};

#endif // VEGEN_DEPENDENCECHECKER_H
