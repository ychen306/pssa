#ifndef VEGEN_MATCHER_H
#define VEGEN_MATCHER_H

#include "llvm/ADT/DenseMap.h"
#include "llvm/ADT/PointerUnion.h"
#include "llvm/ADT/SmallVector.h"

namespace llvm {
class Value;
class Instruction;
class Use;
} // namespace llvm

class Operation;
class ReductionInfo;
class LooseInstructionTable;
struct Reduction;

struct Match {
  llvm::Instruction *Root;
  // Keep track of the *use of the live ins* instead of just the values in case
  // they get rewritten (e.g., during co-iteration)
  llvm::SmallVector<llvm::Use *, 4> LiveIns;
  llvm::SmallVector<llvm::Instruction *, 4> LooseInsts;
};

class Matcher {
  ReductionInfo &RI;
  LooseInstructionTable &LIT;

  // Remember the matched values
  using MatchKey = std::pair<const Operation *, llvm::Instruction *>;
  llvm::DenseMap<MatchKey, std::unique_ptr<Match>> Matches;

  Match *matchImpl(const Operation *Op, llvm::Instruction *Root);

public:
  Matcher(ReductionInfo &RI, LooseInstructionTable &LIT) : RI(RI), LIT(LIT) {}

  using Result = llvm::PointerUnion<Match *, Reduction *>;
  Result match(const Operation *Op, llvm::Instruction *Root);
};

#endif // VEGEN_MATCHER_H
