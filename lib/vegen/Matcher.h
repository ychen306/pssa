#ifndef VEGEN_MATCHER_H
#define VEGEN_MATCHER_H

#include "llvm/ADT/ArrayRef.h"
#include "llvm/ADT/DenseMap.h"
#include "llvm/ADT/Optional.h"
#include "llvm/ADT/SmallVector.h"

namespace llvm {
class Value;
}

class Operation;
class ReductionInfo;
class LooseInstructionTable;

class Matcher {
  ReductionInfo &RI;
  LooseInstructionTable &LIT;

  // Remember the matched values
  using MatchKey = std::pair<const Operation *, llvm::Value *>;
  llvm::DenseMap<MatchKey, std::vector<llvm::Value *>> Memo;

public:
  Matcher(ReductionInfo &RI, LooseInstructionTable &LIT) : RI(RI), LIT(LIT) {}

  // Check if we can match `V` with `Op` and fill in
  llvm::ArrayRef<llvm::Value *> match(const Operation *Op, llvm::Value *V);
};

#endif // VEGEN_MATCHER_H
