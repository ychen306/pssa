#ifndef VEGEN_MATCHER_H
#define VEGEN_MATCHER_H

#include "llvm/ADT/SmallVector.h"
#include "llvm/ADT/Optional.h"

namespace llvm {
class Value;
}


class Operation;
class ReductionInfo;
class LooseInstructionTable;

class Matcher {
  ReductionInfo &RI;
  LooseInstructionTable &LIT;
public:
  Matcher(ReductionInfo &RI, LooseInstructionTable &LIT) : RI(RI), LIT(LIT) {}

  using Substitution = llvm::SmallVector<llvm::Value *, 4>;
  // Check if we can match `V` with `Op` and fill in 
  llvm::Optional<Substitution> match(const Operation *Op, llvm::Value *V);
};

#endif // VEGEN_MATCHER_H
