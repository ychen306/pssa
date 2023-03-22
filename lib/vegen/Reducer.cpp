#include "Reducer.h"
#include "Reduction.h"
#include "llvm/Support/raw_ostream.h"

using namespace llvm;

// If V if a trivial reduction, return the single value
static Value *trySimplifyReduction(Value *V) {
  if (auto *Rdx = dyn_cast<Reduction>(V))
    if (auto *V2 = Rdx->getSingleElement())
      return V2;
  return V;
}

Reducer::Reducer(Reduction *Result, ArrayRef<Value *> OrigElements)
    : Instruction(Result->getType(), ReducerValID,
                  OperandTraits<Reducer>::op_end(this) - OrigElements.size(),
                  OrigElements.size() /*num operands*/),
      Result(Result) {
  SmallVector<Value *, 4> Elements;
  for (auto *V : OrigElements)
    Elements.push_back(trySimplifyReduction(V));
  llvm::copy(Elements, op_begin());
}

void Reducer::dump(raw_ostream &OS) {
  OS << '(' << getReductionName(getKind());
  for (auto *O : operand_values()) {
    if (!isa<PHINode>(O))
      OS << ' ' << *O;
    else
      OS << " phi";
  }
  OS << ')';
}
