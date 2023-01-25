#ifndef PSSA_INSERTER_H
#define PSSA_INSERTER_H

#include "pssa/PSSA.h"
#include "llvm/IR/ConstantFolder.h"
#include "llvm/IR/Intrinsics.h"
#include "llvm/Support/Alignment.h"

namespace llvm {
class LLVMContext;
}; // namespace llvm

class Inserter {
  llvm::ConstantFolder Folder;
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

  const ControlCondition *getCondition() const { return C; }
  llvm::LLVMContext &getContext() const;
  llvm::Value *operator()(llvm::Value *) const;
  llvm::Constant *getTrue() const;
  llvm::Constant *getFalse() const;
  llvm::PHINode *
  createPhi(llvm::ArrayRef<llvm::Value *> Values,
            llvm::ArrayRef<const ControlCondition *> Conds) const;
  llvm::Value *createOneHotPhi(const ControlCondition *GateC,
                               llvm::Value *IfTrue, llvm::Value *IfFalse) const;
  llvm::Value *createMaskedStore(llvm::Value *Val, llvm::Value *Ptr,
                                 llvm::Align, llvm::Value *Mask) const;
  llvm::Value *createMaskedGather(llvm::Type *Ty, llvm::Value *Ptrs,
                                  llvm::Align, llvm::Value *Mask) const;
  llvm::Value *createVectorSplat(unsigned NumElems, llvm::Value *V) const;

  // Vector horizontal reduction
  llvm::Value *createAddReduce(llvm::Value *) const;
  llvm::Value *createMulReduce(llvm::Value *) const;
  llvm::Value *createAndReduce(llvm::Value *) const;
  llvm::Value *createOrReduce(llvm::Value *) const;
  llvm::Value *createXorReduce(llvm::Value *) const;
  llvm::Value *createFAddReduce(llvm::Value *) const;
  llvm::Value *createFMulReduce(llvm::Value *) const;
  llvm::Value *createSMaxReduce(llvm::Value *) const;
  llvm::Value *createSMinReduce(llvm::Value *) const;
  llvm::Value *createUMaxReduce(llvm::Value *) const;
  llvm::Value *createUMinReduce(llvm::Value *) const;
  llvm::Value *createFMaxReduce(llvm::Value *) const;
  llvm::Value *createFMinReduce(llvm::Value *) const;
  // end vector horizontal reduction

  llvm::Value *createIntrinsicCall(llvm::Intrinsic::ID,
                                   llvm::ArrayRef<llvm::Type *>,
                                   llvm::ArrayRef<llvm::Value *>);

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

  // Specialized builder with const folding
  llvm::Value *CreateInsertElement(llvm::Value *Vec, llvm::Value *Elt,
                                   llvm::Value *Idx) const;
  llvm::Value *CreateBinOp(llvm::Instruction::BinaryOps, llvm::Value *,
                           llvm::Value *) const;
  llvm::Value *CreateSelect(llvm::Value *Cond, llvm::Value *IfTrue,
                            llvm::Value *IfFalse) const;
};

#endif // PSSA_INSERTER_H
