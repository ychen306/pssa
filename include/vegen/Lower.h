#ifndef VEGEN_LOWER_H
#define VEGEN_LOWER_H

#include "llvm/ADT/ArrayRef.h"

namespace llvm {
class DependenceInfo;
class AAResults;
class LoopInfo;
class Instruction;
class Value;
} // namespace llvm

class Pack;
class PredicatedSSA;

// Lower a set of packs to vector instructions.
// May bail out due to circular deps introduced by the packs.
// Return true if succeeded.
bool lower(llvm::ArrayRef<Pack *>, PredicatedSSA &, llvm::DependenceInfo &,
           llvm::AAResults &, llvm::LoopInfo &, std::shared_ptr<llvm::Module>);

const ControlCondition *
findSpeculativeCond(llvm::Instruction *I,
                    llvm::ArrayRef<llvm::Instruction *> Users,
                    PredicatedSSA &PSSA);

bool canSpeculateAt(llvm::Value *V, const ControlCondition *C,
                    PredicatedSSA &PSSA);

#endif // end VEGEN_LOWER_H
