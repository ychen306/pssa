#include "pssa/Inserter.h"
#include "llvm/IR/Constants.h"
#include "llvm/IR/Instructions.h"
#include "llvm/IR/Intrinsics.h"

using namespace llvm;

LLVMContext &Inserter::getContext() const {
  return VL->getPSSA()->getContext();
}

Type *Inserter::getInt32Ty() const { return Type::getInt32Ty(getContext()); }

Constant *Inserter::getInt32(int32_t V) const {
  return ConstantInt::get(getInt32Ty(), V);
}

Value *Inserter::operator()(Value *V) const {
  assert(!isa<PHINode>(V) && "can't insert phi node directly");
  if (auto *I = dyn_cast<Instruction>(V))
    VL->insert(I, C, InsertBefore);
  return V;
}

PHINode *Inserter::createPhi(ArrayRef<Value *> Values,
                             ArrayRef<const ControlCondition *> Conds) const {
  assert(Values.size() == Conds.size());
  auto *PN = PHINode::Create(Values.front()->getType(), Values.size());
  PN->setNumHungOffUseOperands(Values.size());
  for (auto X : enumerate(Values))
    PN->setIncomingValue(X.index(), X.value());
  VL->insert(PN, Conds, C, InsertBefore);
  return PN;
}

// Copied from llvm::IRBuilderBase::CreateMaskedIntrinsic
Value *Inserter::createMaskedIntrinsic(Module *M, Intrinsic::ID Id,
                                       ArrayRef<Value *> Ops,
                                       ArrayRef<Type *> OverloadedTypes) const {
  Function *F = Intrinsic::getDeclaration(M, Id, OverloadedTypes);
  return create<CallInst>(F, Ops);
}

// Copied from llvm::IRBuilderBase::CreateMaskedStore
Value *Inserter::createMaskedStore(Value *Val, Value *Ptr, Align Alignment,
                                   Value *Mask) const {
  auto *PtrTy = cast<PointerType>(Ptr->getType());
  Type *DataTy = Val->getType();
  assert(DataTy->isVectorTy() && "Val should be a vector");
  assert(PtrTy->isOpaqueOrPointeeTypeMatches(DataTy) && "Wrong element type");
  assert(Mask && "Mask should not be all-ones (null)");
  Type *OverloadedTypes[] = {DataTy, PtrTy};
  Value *Ops[] = {Val, Ptr, getInt32(Alignment.value()), Mask};
  Module *M = VL->getPSSA()->getFunction()->getParent();
  return createMaskedIntrinsic(M, Intrinsic::masked_store, Ops,
                               OverloadedTypes);
}
