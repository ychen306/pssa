#ifndef VEGEN_REDUCER_H
#define VEGEN_REDUCER_H

#include "Reduction.h"
#include "llvm/IR/Instruction.h"
#include "llvm/IR/OperandTraits.h"

namespace llvm {

class raw_ostream;

// A concrete way to implement a reduction
class Reducer : public Instruction {
  Reduction *Result; // the reduction we are implementing
  Reducer(Reduction *Result, ArrayRef<Value *> Elements);

public:
  static Reducer *Create(Reduction *Result, ArrayRef<Value *> Elements) {
    return new (Elements.size()) Reducer(Result, Elements);
  }
  DECLARE_TRANSPARENT_OPERAND_ACCESSORS(Value);
  Reduction *getResult() const { return Result; }
  RecurKind getKind() const { return Result->Kind; }

  // Methods for support type inquiry through isa, cast, and dyn_cast:
  static bool classof(const Instruction *I) {
    return I->getOpcode() == ReducerValID;
  }
  static bool classof(const Value *V) {
    return llvm::isa<Instruction>(V) && classof(llvm::cast<Instruction>(V));
  }
  void dump(llvm::raw_ostream &);

  static Reducer *clone(Reducer *);
};

template <>
struct llvm::OperandTraits<Reducer> : public VariadicOperandTraits<Reducer, 1> {
};
DEFINE_TRANSPARENT_OPERAND_ACCESSORS(Reducer, Value);

} // namespace llvm

#endif // end VEGEN_REDUCER_H
