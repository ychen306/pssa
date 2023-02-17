#ifndef VEGEN_REDUCTION_H
#define VEGEN_REDUCTION_H

#include "llvm/ADT/DenseMap.h"
#include "llvm/ADT/FoldingSet.h"
#include "llvm/ADT/SmallVector.h"
#include "llvm/Analysis/IVDescriptors.h"
#include "llvm/IR/Instruction.h"
#include "llvm/Support/Allocator.h"
#include <vector>

namespace llvm {
class Value;
class raw_ostream;
class Reducer;
} // namespace llvm

class VLoop;
class PredicatedSSA;
class ControlCondition;

struct ReductionElement {
  llvm::Value *Val;

  // Condition under which we will accumulate `Val`
  const ControlCondition *C;
  llvm::SmallVector<VLoop *, 2> Loops;

  ReductionElement(llvm::Value *V, const ControlCondition *C) : Val(V), C(C) {}
  bool operator==(const ReductionElement &Other) const {
    return Val == Other.Val && Loops == Other.Loops;
  }
  bool operator<(const ReductionElement &Other) const {
    return std::tie(Val, Loops) < std::tie(Other.Val, Other.Loops);
  }
  bool operator!=(const ReductionElement &Other) const {
    return !(*this == Other);
  }
  bool reducedByLoop() const { return !Loops.empty(); }
};

// For supporting llvm::isa<> and friends.
static constexpr unsigned ReductionValID = 120;
static constexpr unsigned ReducerValID = 121;

// FIXME: don't make everything public
struct Reduction : public llvm::Instruction {
  // Non-null this value represents the previous iteration
  // of a recurrent reduction
  Reduction *PrevOf;

  llvm::RecurKind Kind;
  std::vector<ReductionElement> Elements;
  VLoop *ParentLoop;                  // where this value is available
  const ControlCondition *ParentCond; // "when" this value is available

  void copyFrom(const Reduction *Rdx) {
    assert(getType() == Rdx->getType());
    Kind = Rdx->Kind;
    Elements = Rdx->Elements;
    ParentLoop = Rdx->ParentLoop;
    ParentCond = Rdx->ParentCond;
    PrevOf = Rdx->PrevOf;
  }

  Reduction(llvm::Type *Ty)
      : Instruction(Ty, ReductionValID, nullptr, 0), PrevOf(nullptr) {}
  void *operator new(size_t S) { return User::operator new(S, 0); }

  // Methods for support type inquiry through isa, cast, and dyn_cast:
  static bool classof(const Instruction *I) {
    return I->getOpcode() == ReductionValID;
  }
  static bool classof(const Value *V) {
    return llvm::isa<Instruction>(V) && classof(llvm::cast<Instruction>(V));
  }

  // Number of elements in the reduction
  unsigned size() const { return Elements.size(); }

  // Detect the case of a trivial, singleton reduction
  llvm::Value *getSingleElement() const {
    if (size() == 1 && Elements.front().Loops.empty() && !Elements.front().C)
      return Elements.front().Val;
    return nullptr;
  }

  VLoop *getParentLoop() const { return ParentLoop; }
  const ControlCondition *getParentCond() const { return ParentCond; }

  Value *identity() const;
  void dump() const;
};

class Pack;
class LooseInstructionTable;

void profileReduction(const Reduction *, llvm::FoldingSetNodeID &);

// Hash cons Reduction so we can check equality by pointer comparison
struct UniqueReduction : public llvm::FoldingSetNode {
  Reduction *Rdx;
  UniqueReduction(Reduction *Rdx) : Rdx(Rdx) {}
  void Profile(llvm::FoldingSetNodeID &ID) { profileReduction(Rdx, ID); }
};

class ReductionInfo {
  // Remember the order in which we discover values,
  // we prefer to order reduction elements by the order
  // in which their values are first encountered.
  llvm::DenseMap<llvm::Value *, unsigned> ValueOrdering;
  llvm::DenseMap<llvm::Value *, Reduction *> ValueToReductionMap;
  llvm::DenseMap<Reduction *, std::vector<llvm::Value *>> ReductionToValuesMap;
  // Mapping value to the its corresponding recurrent reduction.
  // For example, consider `for (int i ... ) s += x[i];`.
  // Inside the loop, the add may have the reduction `(+ phi x[i])`
  // But its live-out reduction is `(+ s.init x[i]:loop)`.
  llvm::DenseMap<llvm::Value *, std::pair<Reduction *, VLoop *>> LiveOutRdxs;
  std::vector<std::unique_ptr<Reduction>> Reductions;
  Reduction *newReduction(llvm::Type *Ty) {
    Reductions.emplace_back(new Reduction(Ty));
    return Reductions.back().get();
  }
  Reduction *copyReduction(const Reduction *OrigRdx) {
    auto *Rdx = newReduction(OrigRdx->getType());
    Rdx->copyFrom(OrigRdx);
    return Rdx;
  }
  void processLoop(VLoop *);
  void setReductionFor(llvm::Value *V, Reduction *Rdx);

  // For hash-consing reductions
  llvm::BumpPtrAllocator UniqueRdxAllocator;
  llvm::FoldingSet<UniqueReduction> UniqueRdxs;

  // Give V an order number if we haven't seen it already
  void trackValue(llvm::Value *V);

public:
  ReductionInfo(PredicatedSSA &);
  ~ReductionInfo();
  Reduction *getReductionFor(llvm::Value *V) const {
    return ValueToReductionMap.lookup(V);
  }
  // Split a reduction into sub redutions evenly
  // Examples:
  //    (+ a b c d) by 4 -> a, b, c, d
  //    (+ a b c d) by 2 -> (+ a c), (+ b d)
  void split(const Reduction *Rdx, unsigned Parts,
             llvm::SmallVectorImpl<Reduction *> &SubRdxs);

  // Decompose a reduction into sub redutions with a binary reducer
  llvm::Reducer *decomposeWithBinary(Reduction *Rdx,
                                     LooseInstructionTable &LIT);

  // (+ a@c) -> phi (c : a, _: 0)
  llvm::PHINode *unwrapCondition(Reduction *Rdx, LooseInstructionTable &LIT);

  // Get the original IR values that computes a given reduction
  llvm::ArrayRef<llvm::Value *> getValuesForReduction(Reduction *Rdx) const {
    auto It = ReductionToValuesMap.find(Rdx);
    if (It == ReductionToValuesMap.end())
      return {};
    return It->second;
  }

  Reduction *dedup(Reduction *);
};

class Inserter;
// emit instructions to compute a single binary reduction
llvm::Value *emitBinaryReduction(llvm::RecurKind, llvm::Value *A,
                                 llvm::Value *B, Inserter &);

// Convenience wrapper around RAUW to replace uses of Rdx to I 
// (assuming I produces Rdx)
void replaceUsesOfReductionWith(Reduction *Rdx, llvm::Instruction *I,
                                ReductionInfo &RI);

class DependenceChecker;
// Find all Reductions used in the program and
// lower them into actual instructions.
// Set ReplaceInsts to true if you want to "re-lower" reduction producing insts.
void lowerReductions(ReductionInfo &, PredicatedSSA &, LooseInstructionTable &,
                     DependenceChecker &, bool ReplaceInsts = true);

// Mark all the live instructions that are left in the program
// if we were to do the following:
//   For each instruction I that computes a reduction R,
//   eplace its uses with R. This kills I, obviously,
//   but can also transitively kill some of I's operands.
llvm::DenseSet<llvm::Instruction *> findDeadInsts(ReductionInfo &,
                                                  PredicatedSSA &);

llvm::raw_ostream &operator<<(llvm::raw_ostream &, const Reduction &);
llvm::StringRef getReductionName(llvm::RecurKind);

#endif
