#ifndef PSSA_INSERTER_H
#define PSSA_INSERTER_H

#include "pssa/PSSA.h"

class Inserter {
  VLoop *VL;
  const ControlCondition *C;
  VLoop::ItemIterator InsertBefore;

public:
  Inserter(VLoop *VL, const ControlCondition *C,
           VLoop::ItemIterator InsertBefore)
      : VL(VL), C(C), InsertBefore(InsertBefore) {}

  llvm::Value *operator()(llvm::Value *);
  llvm::PHINode *insertPhi(llvm::ArrayRef<llvm::Value *> Values,
                           llvm::ArrayRef<const ControlCondition *> Conds);

  PredicatedSSA *getPSSA() const { return VL->getPSSA(); }
};

#endif // PSSA_INSERTER_H
