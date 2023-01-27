#include "Reducer.h"
#include "Reduction.h"
#include "llvm/Support/raw_ostream.h"

using namespace llvm;

Reducer::Reducer(Reduction *Result, ArrayRef<Value *> Elements)
    : Instruction(Result->getType(), ReducerValID,
                  OperandTraits<Reducer>::op_end(this) - Elements.size(),
                  Elements.size() /*num operands*/),
      Result(Result) {
  llvm::copy(Elements, op_begin());
}

void Reducer::dump(raw_ostream &OS) {
  OS << '(' << getReductionName(getKind());
  OS << *getOperand(0);
  for (auto *O : drop_begin(operand_values()))
    OS << ' ' << *O;
  OS << ')';
}
