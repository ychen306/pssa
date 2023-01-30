#ifndef VEGEN_LOOSEINSTRUCTIONTABLE_H
#define VEGEN_LOOSEINSTRUCTIONTABLE_H

#include "llvm/ADT/ArrayRef.h"
#include "llvm/ADT/DenseMap.h"
#include "llvm/ADT/Optional.h"
#include "llvm/IR/Instruction.h"

namespace llvm {
class Reducer;
} // namespace llvm

class VLoop;
class ControlCondition;
class PredicatedSSA;
class DependenceChecker;

// Utility to keep track of instructions
// created from scratch to change the order of reductions.
// These instructions are not present in the original program,
// and needs to be inserted later.
class LooseInstructionTable {
  // When/where this instruction should we available
  struct Location {
    VLoop *VL;
    const ControlCondition *C;
  };
  llvm::DenseMap<llvm::Instruction *, Location> LooseInsts;

public:
  void addLoose(llvm::Reducer *);
  bool isLoose(llvm::Instruction *I) const { return LooseInsts.count(I); }
  bool isLoose(llvm::Value *V) const {
    using namespace llvm;
    auto *I = dyn_cast<Instruction>(V);
    return I && isLoose(I);
  }
  // Insert a subset of the loose instructions into the IR.
  // Note that Insts are only the "root" instructions that we want to insert;
  // these instructions may use other loose instructions, which we will also
  // insert.
  // 
  // Return true if successful.
  // We fail if somehow we accidentally introduced
  // a dependence cycle while decomposing the reductions.
  bool insertInto(llvm::ArrayRef<llvm::Instruction *> Insts,
                  PredicatedSSA &PSSA, DependenceChecker &DepChecker);
};

#endif // END VEGEN_LOOSEINSTRUCTIONTABLE_H
