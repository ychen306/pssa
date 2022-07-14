#include "pssa/Inserter.h"
#include "llvm/IR/Instructions.h"

using namespace llvm;

Value *Inserter::operator()(Value *V) {
  assert(!isa<PHINode>(V) && "can't insert phi node directly");
  if (auto *I = dyn_cast<Instruction>(V))
    VL->insert(I, C, InsertBefore);
  return V;
}

PHINode *Inserter::insertPhi(ArrayRef<Value *> Values,
                             ArrayRef<const ControlCondition *> Conds) {
  assert(Values.size() == Conds.size());
  auto *PN = PHINode::Create(Values.front()->getType(), Values.size());
  PN->setNumHungOffUseOperands(Values.size());
  for (auto X : enumerate(Values))
    PN->setIncomingValue(X.index(), X.value());
  VL->insert(PN, Conds, C, InsertBefore);
  return PN;
}
