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

// Copied from llvm::IRBuilderBase::CreateMaskedLoad
Value *Inserter::createMaskedLoad(Type *Ty, Value *Ptr, Align Alignment,
                                  Value *Mask) const {
  auto *PtrTy = cast<PointerType>(Ptr->getType());
  assert(Ty->isVectorTy() && "Type should be vector");
  assert(PtrTy->isOpaqueOrPointeeTypeMatches(Ty) && "Wrong element type");
  assert(Mask && "Mask should not be all-ones (null)");
  Type *OverloadedTypes[] = {Ty, PtrTy};
  Value *Ops[] = {Ptr, getInt32(Alignment.value()), Mask, UndefValue::get(Ty)};
  Module *M = VL->getPSSA()->getFunction()->getParent();
  return createMaskedIntrinsic(M, Intrinsic::masked_load, Ops, OverloadedTypes);
}

Value *Inserter::CreateInsertElement(Value *Vec, Value *Elt, Value *Idx) const {
  if (auto *V = Folder.FoldInsertElement(Vec, Elt, Idx))
    return V;
  return create<InsertElementInst>(Vec, Elt, Idx);
}

static bool isOnes(Value *V) {
  auto *C = dyn_cast<Constant>(V);
  return C && C->isAllOnesValue();
}

static bool isZero(Value *V) {
  auto *C = dyn_cast<Constant>(V);
  return C && C->isZeroValue();
}

Value *Inserter::CreateBinOp(Instruction::BinaryOps Opc, Value *A,
                             Value *B) const {
  if (auto *V = Folder.FoldBinOp(Opc, A, B))
    return V;
  // Try harder to constant-fold away `AND X, true`
  if (Opc == Instruction::And) {
    if (isOnes(A))
      return B;
    if (isOnes(B))
      return A;
  }
  return create<BinaryOperator>(Opc, A, B);
}

Value *Inserter::CreateSelect(Value *Cond, Value *IfTrue,
                              Value *IfFalse) const {
  // select c, true, false -> c
  if (isOnes(IfTrue) && isZero(IfFalse))
    return Cond;
  return create<SelectInst>(Cond, IfTrue, IfFalse);
}

Value *Inserter::createVectorSplat(unsigned NumElems, Value *V) const {
  auto *Ty = V->getType();
  auto *VecTy = FixedVectorType::get(Ty, NumElems);
  auto *Init =
      create<InsertElementInst>(PoisonValue::get(VecTy), V, getInt32(0));
  SmallVector<int, 16> Zeros(NumElems, 0);
  return make<ShuffleVectorInst>(Init, Zeros);
}

static Value *getReductionIntrinsic(Intrinsic::ID ID, Value *Src, Module *M,
                                    const Inserter &Insert) {
  Value *Ops[] = {Src};
  Type *Tys[] = {Src->getType()};
  auto Decl = Intrinsic::getDeclaration(M, ID, Tys);
  return Insert.create<CallInst>(Decl, Ops);
}

Value *Inserter::createAddReduce(Value *Src) const {
  Module *M = VL->getPSSA()->getFunction()->getParent();
  return getReductionIntrinsic(Intrinsic::vector_reduce_add, Src, M, *this);
}

Value *Inserter::createMulReduce(Value *Src) const {
  Module *M = VL->getPSSA()->getFunction()->getParent();
  return getReductionIntrinsic(Intrinsic::vector_reduce_mul, Src, M, *this);
}

Value *Inserter::createAndReduce(Value *Src) const {
  Module *M = VL->getPSSA()->getFunction()->getParent();
  return getReductionIntrinsic(Intrinsic::vector_reduce_and, Src, M, *this);
}

Value *Inserter::createOrReduce(Value *Src) const {
  Module *M = VL->getPSSA()->getFunction()->getParent();
  return getReductionIntrinsic(Intrinsic::vector_reduce_or, Src, M, *this);
}

Value *Inserter::createXorReduce(Value *Src) const {
  Module *M = VL->getPSSA()->getFunction()->getParent();
  return getReductionIntrinsic(Intrinsic::vector_reduce_xor, Src, M, *this);
}

Value *Inserter::createFAddReduce(Value *Src) const {
  Module *M = VL->getPSSA()->getFunction()->getParent();
  auto *SrcVecEltTy = cast<VectorType>(Src->getType())->getElementType();
  Value *Ops[] = {ConstantFP::getNegativeZero(SrcVecEltTy), Src};
  auto Decl = Intrinsic::getDeclaration(M, Intrinsic::vector_reduce_fadd,
                                        {Src->getType()});
  return create<CallInst>(Decl, Ops);
}

Value *Inserter::createFMulReduce(Value *Src) const {
  Module *M = VL->getPSSA()->getFunction()->getParent();
  auto *SrcVecEltTy = cast<VectorType>(Src->getType())->getElementType();
  Value *Ops[] = {ConstantFP::get(SrcVecEltTy, 1.0), Src};
  auto Decl = Intrinsic::getDeclaration(M, Intrinsic::vector_reduce_fmul,
                                        {Src->getType()});
  return create<CallInst>(Decl, Ops);
}

Value *Inserter::createSMaxReduce(Value *Src) const {
  Module *M = VL->getPSSA()->getFunction()->getParent();
  return getReductionIntrinsic(Intrinsic::vector_reduce_smax, Src, M, *this);
}

Value *Inserter::createSMinReduce(Value *Src) const {
  Module *M = VL->getPSSA()->getFunction()->getParent();
  return getReductionIntrinsic(Intrinsic::vector_reduce_smin, Src, M, *this);
}

Value *Inserter::createUMaxReduce(Value *Src) const {
  Module *M = VL->getPSSA()->getFunction()->getParent();
  return getReductionIntrinsic(Intrinsic::vector_reduce_umax, Src, M, *this);
}

Value *Inserter::createUMinReduce(Value *Src) const {
  Module *M = VL->getPSSA()->getFunction()->getParent();
  return getReductionIntrinsic(Intrinsic::vector_reduce_umin, Src, M, *this);
}

Value *Inserter::createFMaxReduce(Value *Src) const {
  Module *M = VL->getPSSA()->getFunction()->getParent();
  return getReductionIntrinsic(Intrinsic::vector_reduce_fmax, Src, M, *this);
}

Value *Inserter::createFMinReduce(Value *Src) const {
  Module *M = VL->getPSSA()->getFunction()->getParent();
  return getReductionIntrinsic(Intrinsic::vector_reduce_fmin, Src, M, *this);
}

Value *Inserter::createIntrinsicCall(Intrinsic::ID ID, ArrayRef<Type *> Types,
                                     ArrayRef<Value *> Args) {
  Module *M = VL->getPSSA()->getFunction()->getParent();
  auto *F = Intrinsic::getDeclaration(M, ID, Types);
  return create<CallInst>(F, Args);
}
