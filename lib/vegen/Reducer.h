#ifndef VEGEN_REDUCER_H
#define VEGEN_REDUCER_H

#include "llvm/IR/Instruction.h"
#include "llvm/IR/OperandTraits.h"

struct Reduction;

namespace llvm {

// A concrete way to implement a reduction
class Reducer : public Instruction {
  Reduction *Result; // the reduction we are implementing
  inline Reducer(Reduction *Result, ArrayRef<Value *> Elements);

public:
  Reducer *Create(Reduction *Result, ArrayRef<Value *> Elements) {
    return new (Elements.size()) Reducer(Result, Elements);
  }
  DECLARE_TRANSPARENT_OPERAND_ACCESSORS(Value);
  Reduction *getResult() const { return Result; }
};

template <>
struct llvm::OperandTraits<Reducer> : public VariadicOperandTraits<Reducer, 1> {
};
DEFINE_TRANSPARENT_OPERAND_ACCESSORS(Reducer, Value);

} // namespace llvm

#endif // end VEGEN_REDUCER_H
