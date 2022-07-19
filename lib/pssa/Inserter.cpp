#include "pssa/Inserter.h"
#include "llvm/IR/Constants.h"
#include "llvm/IR/Instructions.h"
#include "llvm/IR/Intrinsics.h"

using namespace llvm;

LLVMContext &Inserter::getContext() const {
  return VL->getPSSA()->getContext();
}

Type *Inserter::getInt32Ty() const { return Type::getInt32Ty(getContext()); }

Constant *Inserter::getTrue() const {
  return ConstantInt::getTrue(getContext());
}

Constant *Inserter::getFalse() const {
  return ConstantInt::getFalse(getContext());
}

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

Value *Inserter::createOneHotPhi(const ControlCondition *GateC, Value *IfTrue,
                                 Value *IfFalse) const {
  // Constant-fold away the phi if the gating condition
  // is implied by the condition of the phi node,
  if (isImplied(GateC, C))
    return IfTrue;

  auto It = VL->insert(GateC, IfTrue, IfFalse, C, InsertBefore);
  return cast<PHINode>(It->asInstruction());
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

// Copied from llvm::IRBuilderBase::CreateMaskedGather
Value *Inserter::createMaskedGather(Type *Ty, Value *Ptrs, Align Alignment,
                                    Value *Mask) const {
  auto *VecTy = cast<VectorType>(Ty);
  ElementCount NumElts = VecTy->getElementCount();
  auto *PtrsTy = cast<VectorType>(Ptrs->getType());
  assert(cast<PointerType>(PtrsTy->getElementType())
             ->isOpaqueOrPointeeTypeMatches(
                 cast<VectorType>(Ty)->getElementType()) &&
         "Element type mismatch");
  assert(NumElts == PtrsTy->getElementCount() && "Element count mismatch");

  if (!Mask)
    Mask = Constant::getAllOnesValue(
        VectorType::get(Type::getInt1Ty(getContext()), NumElts));

  Type *OverloadedTypes[] = {Ty, PtrsTy};
  Value *Ops[] = {Ptrs, getInt32(Alignment.value()), Mask,
                  UndefValue::get(Ty) /*pass through*/};
  Module *M = VL->getPSSA()->getFunction()->getParent();
  return createMaskedIntrinsic(M, Intrinsic::masked_gather, Ops,
                               OverloadedTypes);
}

Value *Inserter::CreateInsertElement(Value *Vec, Value *Elt, Value *Idx) {
  if (auto *V = Folder.FoldInsertElement(Vec, Elt, Idx))
    return V;
  return create<InsertElementInst>(Vec, Elt, Idx);
}

static bool isOne(Value *V) {
  auto *C = dyn_cast<Constant>(V);
  return C && C->isOneValue();
}

Value *Inserter::CreateBinOp(Instruction::BinaryOps Opc, Value *A, Value *B) {
  if (auto *V = Folder.FoldBinOp(Opc, A, B))
    return V;
  // Try harder to constant-fold away `AND X, true`
  if (Opc == Instruction::And) {
    if (isOne(A))
      return B;
    if (isOne(B))
      return A;
  }
  return create<BinaryOperator>(Opc, A, B);
}
