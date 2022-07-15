#ifndef PSSA_INSERTER_H
#define PSSA_INSERTER_H

#include "pssa/PSSA.h"
#include "llvm/Support/Alignment.h"

namespace llvm {
class LLVMContext;
}; // namespace llvm

class Inserter {
  VLoop *VL;
  const ControlCondition *C;
  VLoop::ItemIterator InsertBefore;

  llvm::Type *getInt32Ty() const;
  llvm::Constant *getInt32(int32_t) const;
  llvm::Value *
  createMaskedIntrinsic(llvm::Module *, llvm::Intrinsic::ID Id,
                        llvm::ArrayRef<llvm::Value *> Ops,
                        llvm::ArrayRef<llvm::Type *> OverloadedTypes) const;

public:
  Inserter(VLoop *VL, const ControlCondition *C,
           VLoop::ItemIterator InsertBefore)
      : VL(VL), C(C), InsertBefore(InsertBefore) {}

  llvm::LLVMContext &getContext() const;

  llvm::Value *operator()(llvm::Value *) const;
  llvm::PHINode *
  createPhi(llvm::ArrayRef<llvm::Value *> Values,
            llvm::ArrayRef<const ControlCondition *> Conds) const;

  llvm::Value *createMaskedStore(llvm::Value *Val, llvm::Value *Ptr,
                                 llvm::Align, llvm::Value *Mask) const;

  // Wrapper around <InstType>::Create
  template <typename InstType, typename... ArgTypes>
  llvm::Value *create(ArgTypes &&...Args) const {
    return (*this)(InstType::Create(std::forward<ArgTypes>(Args)...));
  }

  // Wrapper around <InstType> constructor
  template <typename InstType, typename... ArgTypes>
  llvm::Value *make(ArgTypes &&...Args) const {
    return (*this)(new InstType(std::forward<ArgTypes>(Args)...));
  }
};

#endif // PSSA_INSERTER_H
