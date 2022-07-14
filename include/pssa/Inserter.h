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
  llvm::PHINode *makePhi(llvm::ArrayRef<llvm::Value *> Values,
                         llvm::ArrayRef<const ControlCondition *> Conds);

  // Wrapper around <InstType>::Create
  template <typename InstType, typename... ArgTypes>
  llvm::Value *create(ArgTypes &&...Args) {
    return (*this)(InstType::Create(std::forward<ArgTypes>(Args)...));
  }

  // Wrapper around <InstType> constructor
  template <typename InstType, typename... ArgTypes>
  llvm::Value *make(ArgTypes &&...Args) {
    return (*this)(new InstType(std::forward<ArgTypes>(Args)...));
  }
};

#endif // PSSA_INSERTER_H
