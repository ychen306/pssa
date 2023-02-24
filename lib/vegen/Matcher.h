#ifndef VEGEN_MATCHER_H
#define VEGEN_MATCHER_H

#include "llvm/ADT/ArrayRef.h"
#include "llvm/ADT/DenseMap.h"
#include "llvm/ADT/Optional.h"
#include "llvm/ADT/SmallVector.h"

namespace llvm {
class Value;
class Instruction;
}

class Operation;
class ReductionInfo;
class LooseInstructionTable;

struct Match {
  llvm::Instruction *Root;
  llvm::SmallVector<llvm::Value *, 4> LiveIns;
  llvm::SmallVector<llvm::Instruction *, 4> LooseInsts;
};

class Matcher {
  ReductionInfo &RI;
  LooseInstructionTable &LIT;

  // Remember the matched values
  using MatchKey = std::pair<const Operation *, llvm::Instruction *>;
  llvm::DenseMap<MatchKey, std::unique_ptr<Match>> Matches;

public:
  Matcher(ReductionInfo &RI, LooseInstructionTable &LIT) : RI(RI), LIT(LIT) {}

  // Check if we can match `V` with `Op` and fill in
  Match *match(const Operation *Op, llvm::Instruction *Root);
};

#endif // VEGEN_MATCHER_H
