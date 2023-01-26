#include "Reducer.h"
#include "Reduction.h"

using namespace llvm;

Reducer::Reducer(Reduction *Result, ArrayRef<Value *> Elements)
    : Instruction(Result->getType(), ReducerValID,
                  OperandTraits<Reducer>::op_end(this) - Elements.size(),
                  Elements.size() /*num operands*/),
      Result(Result) {
  llvm::copy(Elements, op_begin());
}
