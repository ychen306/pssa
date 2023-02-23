#ifndef VEGEN_MATCHER_H
#define VEGEN_MATCHER_H

#include "llvm/ADT/ArrayRef.h"
#include "llvm/ADT/DenseMap.h"
#include "llvm/ADT/Optional.h"
#include "llvm/ADT/SmallVector.h"

namespace llvm {
class Value;
class Use;
class Instruction;
}

class Operation;
class ReductionInfo;
class LooseInstructionTable;

struct Match {
  llvm::Instruction *Root;
  // Track the use instead of just the values
  // in case those values get replaced later
  llvm::SmallVector<llvm::Use *, 4> LiveIns;
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
