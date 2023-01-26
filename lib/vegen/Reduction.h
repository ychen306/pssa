#ifndef VEGEN_REDUCTION_H
#define VEGEN_REDUCTION_H

#include "llvm/ADT/DenseMap.h"
#include "llvm/ADT/SmallVector.h"
#include "llvm/Analysis/IVDescriptors.h"
#include "llvm/IR/Instruction.h"
#include <vector>

namespace llvm {
class Value;
class raw_ostream;
}

class VLoop;
class PredicatedSSA;
class ControlCondition;

struct ReductionElement {
  llvm::Value *Val;

  // Condition under which we will accumulate `Val`
  const ControlCondition *C;
  std::vector<VLoop *> Loops;


  ReductionElement(llvm::Value *V, const ControlCondition *C) : Val(V), C(C) {}
  bool operator==(const ReductionElement &Other) const {
    return Val == Other.Val && Loops == Other.Loops;
  }
  bool operator<(const ReductionElement &Other) const {
    return std::tie(Val, Loops) < std::tie(Other.Val, Other.Loops);
  }
  bool reducedByLoop() const {
    return !Loops.empty();
  }
};

struct Reduction : public llvm::Instruction {
  // For supporting isa<> and friends. Ajay said use 120
  static constexpr unsigned ReductionValID = 120;

  llvm::RecurKind Kind;
  std::vector<ReductionElement> Elements;
  VLoop *ParentLoop; // where this value is available

  void copyFrom(const Reduction *Rdx) {
    assert(getType() == Rdx->getType());
    Kind = Rdx->Kind;
    Elements = Rdx->Elements;
    ParentLoop = Rdx->ParentLoop;
  }

  Reduction(llvm::Type *Ty) : Instruction(Ty, ReductionValID, nullptr, 0) {}
  void *operator new(size_t S) { return User::operator new(S, 0); }

  // Methods for support type inquiry through isa, cast, and dyn_cast:
  static bool classof(const Instruction *I) {
    return I->getOpcode() == ReductionValID;
  }
  static bool classof(const Value *V) {
    return llvm::isa<Instruction>(V) && classof(llvm::cast<Instruction>(V));
  }
};

class ReductionInfo {
  llvm::DenseMap<llvm::Value *, Reduction *> ValueToReductionMap;
  std::vector<std::unique_ptr<Reduction>> Reductions;
  Reduction *newReduction(llvm::Type *Ty) {
    Reductions.emplace_back(new Reduction(Ty));
    return Reductions.back().get();
  }
  void processLoop(VLoop *);
public:
  ReductionInfo(PredicatedSSA &);
  const Reduction *getReductionFor(llvm::Value *V) const {
    return ValueToReductionMap.lookup(V);
  }
};

llvm::raw_ostream &operator<<(llvm::raw_ostream &, const Reduction &);

#endif
