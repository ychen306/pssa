#include "vegen/Pack.h"
#include "Reducer.h"
#include "AddrUtil.h"
#include "pssa/Inserter.h"
#include "pssa/PSSA.h"
#include "llvm/IR/Constants.h"
#include "llvm/IR/Instructions.h"
#include "llvm/IR/Intrinsics.h"
#include "llvm/Support/raw_ostream.h"

using namespace llvm;

Value *Pack::emit(ArrayRef<Value *>, Inserter &) const {
  llvm_unreachable("Pack::emit is not supported for arbitrary packs");
  return nullptr;
}

// Zip the instructions operands into vectors
SmallVector<OperandPack, 2> Pack::getOperands() const {
  SmallVector<OperandPack, 2> Operands;

  unsigned N = Insts.front()->getNumOperands();
  for (unsigned i = 0; i < N; i++) {
    auto &OP = Operands.emplace_back();
    for (auto *I : Insts)
      OP.push_back(I->getOperand(i));
  }

  return Operands;
}

SIMDPack *SIMDPack::tryPack(ArrayRef<Instruction *> Insts) {
  if (Insts.empty())
    return nullptr;

  auto *I = Insts.front();
  if (!isa<BinaryOperator>(I) && !isa<CmpInst>(I) && !isa<SelectInst>(I) &&
      !isa<CastInst>(I) && !isa<FreezeInst>(I) && !isa<UnaryOperator>(I))
    return nullptr;

  auto Rest = drop_begin(Insts);
  unsigned Opcode = I->getOpcode();
  // Don't bother vectorizing integer division
  if (Opcode == Instruction::UDiv || Opcode == Instruction::SDiv ||
      Opcode == Instruction::URem || Opcode == Instruction::SRem)
    return nullptr;

  auto *Ty = I->getType();
  if (any_of(Rest, [Opcode, Ty](auto *I) {
        return I->getOpcode() != Opcode || I->getType() != Ty;
      }))
    return nullptr;

  if (auto *Cmp = dyn_cast<CmpInst>(I)) {
    auto Pred = Cmp->getPredicate();
    if (any_of(Rest, [Pred](auto *I) {
          return cast<CmpInst>(I)->getPredicate() != Pred;
        }))
      return nullptr;
  }

  if (auto *Cast = dyn_cast<CastInst>(I)) {
    auto Op = Cast->getOpcode();
    auto *SrcTy = Cast->getOperand(0)->getType();
    if (any_of(Rest, [&](auto *I) {
          return cast<CastInst>(I)->getOpcode() != Op ||
                 I->getOperand(0)->getType() != SrcTy;
        }))
      return nullptr;
  }

  if (auto *UO = dyn_cast<UnaryOperator>(I)) {
    if (UO->getOpcode() != Instruction::FNeg)
      return nullptr;
  }

  // Packing a list of `Reducers`
  if (auto *R0 = dyn_cast<Reducer>(Insts.front())) {
    if (R0->getNumOperands() != 2)
      return nullptr;
    if (any_of(Rest, [R0](Instruction *I) {
          auto *R = dyn_cast<Reducer>(I);
          return !R || R->getKind() != R0->getKind() ||
                 R->getNumOperands() != 2;
        }))
      return nullptr;
  }

  return new SIMDPack(Insts);
}

Value *SIMDPack::emit(ArrayRef<Value *> Operands, Inserter &Insert) const {
  auto *I = Insts.front();

  if (auto *R = dyn_cast<Reducer>(Insts.front())) {
    assert(R->getNumOperands() == 2);
    assert(Operands.size() == 2);
    auto *VecTy = FixedVectorType::get(R->getType(), Insts.size());
    switch (R->getKind()) {
    case RecurKind::Add:
      return Insert.CreateBinOp(Instruction::BinaryOps::Add, Operands[0],
                                Operands[1]);
    case RecurKind::Mul:
      return Insert.CreateBinOp(Instruction::BinaryOps::Mul, Operands[0],
                                Operands[1]);
    case RecurKind::And:
      return Insert.CreateBinOp(Instruction::BinaryOps::And, Operands[0],
                                Operands[1]);
    case RecurKind::Or:
      return Insert.CreateBinOp(Instruction::BinaryOps::Or, Operands[0],
                                Operands[1]);
    case RecurKind::Xor:
      return Insert.CreateBinOp(Instruction::BinaryOps::Xor, Operands[0],
                                Operands[1]);
    case RecurKind::FAdd:
      return Insert.CreateBinOp(Instruction::BinaryOps::FAdd, Operands[0],
                                Operands[1]);
    case RecurKind::FMul:
      return Insert.CreateBinOp(Instruction::BinaryOps::FMul, Operands[0],
                                Operands[1]);
    case RecurKind::SMax:
      return Insert.createIntrinsicCall(Intrinsic::smax, {VecTy}, Operands);
    case RecurKind::SMin:
      return Insert.createIntrinsicCall(Intrinsic::smin, {VecTy}, Operands);
    case RecurKind::UMax:
      return Insert.createIntrinsicCall(Intrinsic::umax, {VecTy}, Operands);
    case RecurKind::UMin:
      return Insert.createIntrinsicCall(Intrinsic::umin, {VecTy}, Operands);
    case RecurKind::FMax:
      return Insert.createIntrinsicCall(Intrinsic::maxnum, {VecTy}, Operands);
    case RecurKind::FMin:
      return Insert.createIntrinsicCall(Intrinsic::minnum, {VecTy}, Operands);
    default:
      llvm_unreachable("unexpected reduction kind");
    }
  }

  if (auto *BO = dyn_cast<BinaryOperator>(I)) {
    assert(Operands.size() == 2);
    return Insert.CreateBinOp(BO->getOpcode(), Operands[0], Operands[1]);
  }

  if (auto *Cmp = dyn_cast<CmpInst>(I)) {
    assert(Operands.size() == 2);
    auto Pred = Cmp->getPredicate();
    assert(all_of(Insts, [Pred](auto *I) {
      return cast<CmpInst>(I)->getPredicate() == Pred;
    }));
    return Insert.create<CmpInst>(Cmp->getOpcode(), Pred, Operands[0],
                                  Operands[1]);
  }

  if (isa<SelectInst>(I)) {
    assert(Operands.size() == 3);
    return Insert.CreateSelect(Operands[0], Operands[1], Operands[2]);
  }

  if (auto *Cast = dyn_cast<CastInst>(I)) {
    auto *VecTy = FixedVectorType::get(Cast->getType(), Insts.size());
    return Insert.create<CastInst>(Cast->getOpcode(), Operands.front(), VecTy);
  }

  if (isa<FreezeInst>(I))
    return Insert.make<FreezeInst>(Operands.front());

  if (auto *UO = dyn_cast<UnaryOperator>(I))
    return Insert.create<UnaryOperator>(UO->getOpcode(), Operands.front());

  llvm_unreachable("unsupported opcode");
}

static Intrinsic::ID getIntrinsicID(Instruction *I) {
  auto *Call = dyn_cast<CallInst>(I);
  if (!Call)
    return Intrinsic::not_intrinsic;
  auto *F = Call->getCalledFunction();
  if (!F)
    return Intrinsic::not_intrinsic;
  return F->getIntrinsicID();
}

// TODO: support more intrinsic
static bool isVectorizableIntrinsic(Intrinsic::ID ID) {
  switch (ID) {
  case Intrinsic::pow:
  case Intrinsic::sqrt:
  case Intrinsic::exp:
  case Intrinsic::smin:
  case Intrinsic::smax:
  case Intrinsic::umin:
  case Intrinsic::umax:
    return true;
  default:
    return false;
  }
}

IntrinsicPack *IntrinsicPack::tryPack(ArrayRef<Instruction *> Insts) {
  auto ID = getIntrinsicID(Insts.front());
  if (!isVectorizableIntrinsic(ID))
    return nullptr;

  for (auto *I : drop_begin(Insts)) {
    if (getIntrinsicID(I) != ID)
      return nullptr;
  }

  return new IntrinsicPack(Insts);
}

SmallVector<OperandPack, 2> IntrinsicPack::getOperands() const {
  SmallVector<OperandPack, 2> Operands;

  unsigned N = cast<CallInst>(Insts.front())->arg_size();
  for (unsigned i = 0; i < N; i++) {
    auto &OP = Operands.emplace_back();
    for (auto *I : Insts)
      OP.push_back(cast<CallInst>(I)->getArgOperand(i));
  }

  return Operands;
}

Value *IntrinsicPack::emit(ArrayRef<Value *> Operands, Inserter &Insert) const {
  auto *I = Insts.front();
  auto ID = getIntrinsicID(I);
  assert(isVectorizableIntrinsic(ID));
  auto *VecTy = FixedVectorType::get(I->getType(), Insts.size());
  return Insert.createIntrinsicCall(ID, {VecTy}, Operands);
}

void Pack::print(raw_ostream &OS) const {
  OS << "[";
  for (auto *I : values()) {
    if (!I)
      OS << "dont_care; ";
    else if (I->hasName())
      OS << I->getName() << "; ";
    else
      OS << *I << "; ";
  }
  OS << ']';
}

static bool isControlFlowEquivalent(ArrayRef<Instruction *> Insts,
                                    PredicatedSSA &PSSA) {
  if (Insts.empty())
    return true;

  // FIXME: use a stronger definition of control flow equivalence that takes
  // loop nesting into account
  auto *C = PSSA.getInstCond(Insts.front());
  return all_of(drop_begin(Insts), [&PSSA, C](auto *I) {
    return PSSA.isEquivalent(C, PSSA.getInstCond(I));
  });
}

LoadPack *LoadPack::tryPack(ArrayRef<Instruction *> Insts, const DataLayout &DL,
                            ScalarEvolution &SE, LoopInfo &LI,
                            PredicatedSSA &PSSA) {
  SmallVector<Value *, 8> Ptrs;
  for (auto *I : Insts) {
    if (auto *LI = dyn_cast<LoadInst>(I))
      Ptrs.push_back(LI->getPointerOperand());
    else
      return nullptr;
  }

  if (!isControlFlowEquivalent(Insts, PSSA))
    return nullptr;

  SmallVector<Instruction *, 8> SortedLoads;
  if (!sortByPointers(Insts, Ptrs, SortedLoads, DL, SE, LI))
    return nullptr;

  return new LoadPack(SortedLoads);
}

Value *LoadPack::emit(ArrayRef<Value *> Operands, Inserter &Insert) const {
  assert(Operands.size() == 0);

  auto *Load = cast<LoadInst>(Insts.front());
  auto *VecTy = FixedVectorType::get(Load->getType(), Insts.size());
  auto *Ptr = Load->getPointerOperand();
  auto *PtrTy = Ptr->getType();
  if (!cast<PointerType>(PtrTy)->isOpaque()) {
    Ptr = Insert.make<BitCastInst>(
        Ptr, PointerType::get(VecTy, Load->getPointerAddressSpace()));
  }
  return Insert.make<LoadInst>(VecTy, Ptr, Load->getName() + ".vec",
                               false /*is volatile*/, Load->getAlign());
}

StorePack *StorePack::tryPack(ArrayRef<Instruction *> Insts,
                              const DataLayout &DL, ScalarEvolution &SE,
                              LoopInfo &LI, PredicatedSSA &PSSA) {
  SmallVector<Value *, 8> Ptrs;
  for (auto *I : Insts) {
    if (auto *SI = dyn_cast<StoreInst>(I))
      Ptrs.push_back(SI->getPointerOperand());
    else
      return nullptr;
  }

  SmallVector<Instruction *, 8> SortedStores;
  if (!sortByPointers(Insts, Ptrs, SortedStores, DL, SE, LI))
    return nullptr;

  return new StorePack(SortedStores, PSSA);
}

SmallVector<VectorMask, 2> StorePack::masks() const {
  VectorMask Conds(
      map_range(Insts, [this](auto *I) { return PSSA.getInstCond(I); }));
  auto *C = Conds.front();
  if (all_of(drop_begin(Conds),
             [&](auto *C2) { return PSSA.isEquivalent(C, C2); }))
    return {};
  return {Conds};
}

SmallVector<OperandPack, 2> StorePack::getOperands() const {
  OperandPack OP;
  for (auto *I : Insts)
    OP.push_back(cast<StoreInst>(I)->getValueOperand());
  return {OP};
}

Value *StorePack::emit(ArrayRef<Value *> Operands, Inserter &Insert) const {
  bool Masking = Operands.size() == 2;
  assert(Masking || Operands.size() == 1);

  auto *Store = cast<StoreInst>(Insts.front());
  auto *Ptr = Store->getPointerOperand();
  auto *PtrTy = Ptr->getType();
  if (!cast<PointerType>(PtrTy)->isOpaque()) {
    Ptr = Insert.make<BitCastInst>(
        Ptr, PointerType::get(Operands.front()->getType(),
                              Store->getPointerAddressSpace()));
  }
  if (!Masking)
    return Insert.make<StoreInst>(Operands.front(), Ptr, false /*is volatile*/,
                                  Store->getAlign());
  return Insert.createMaskedStore(Operands.front(), Ptr, Store->getAlign(),
                                  Operands.back());
}

GatherPack *GatherPack::tryPack(ArrayRef<Instruction *> Insts,
                                PredicatedSSA &PSSA) {
  auto *Ty = Insts.front()->getType();

  if (any_of(Insts,
             [Ty](auto *I) { return !isa<LoadInst>(I) || I->getType() != Ty; }))
    return nullptr;

  return new GatherPack(Insts, PSSA);
}

SmallVector<VectorMask, 2> GatherPack::masks() const {
  VectorMask Conds(
      map_range(Insts, [this](auto *I) { return PSSA.getInstCond(I); }));
  auto *C = Conds.front();
  if (all_of(drop_begin(Conds),
             [&](auto *C2) { return PSSA.isEquivalent(C, C2); }))
    return {};
  return {Conds};
}

Value *GatherPack::emit(ArrayRef<Value *> Operands, Inserter &Insert) const {
  // Figure out the common alignment
  Align Alignment = getLoadStoreAlignment(Insts.front());
  for (auto *I : drop_begin(Insts))
    Alignment = std::min(Alignment, getLoadStoreAlignment(I));

  Value *Ptrs = Operands.front();
  Value *Mask = Operands.size() == 2 ? Operands.back() : nullptr;
  auto *ScalarTy = Insts.front()->getType();
  auto *VecTy = FixedVectorType::get(ScalarTy, Insts.size());
  return Insert.createMaskedGather(VecTy, Ptrs, Alignment, Mask);
}

PHIPack *PHIPack::tryPack(ArrayRef<Instruction *> Insts, PredicatedSSA &PSSA) {
  SmallVector<PHINode *, 8> Phis;
  for (auto *I : Insts) {
    auto *PN = dyn_cast<PHINode>(I);
    if (!PN || PSSA.isMu(PN))
      return nullptr;
    Phis.push_back(PN);
  }

  if (!isControlFlowEquivalent(Insts, PSSA))
    return nullptr;

  auto *PN = Phis.front();
  unsigned N = PN->getNumOperands();
  auto Conds = PSSA.getPhiConditions(PN);

  for (auto *PN2 : drop_begin(Phis)) {
    // Check that the incoming phi conditions are equivalent
    auto Conds2 = PSSA.getPhiConditions(PN2);
    if (Conds2.size() != N)
      return nullptr;
    for (unsigned i = 0; i < N; i++)
      if (!PSSA.isEquivalent(Conds[i], Conds2[i]))
        return nullptr;
  }

  return new PHIPack(Insts);
}

SmallVector<OperandPack, 2> PHIPack::getOperands() const {
  unsigned N = Insts.front()->getNumOperands();
  SmallVector<OperandPack, 2> Operands;
  for (unsigned i = 0; i < N; i++)
    Operands.emplace_back(
        map_range(Insts, [i](auto *I) { return I->getOperand(i); }));
  return Operands;
}

MuPack *MuPack::tryPack(ArrayRef<Instruction *> Insts, PredicatedSSA &PSSA) {
  for (auto *I : Insts) {
    auto *PN = dyn_cast<PHINode>(I);
    if (!PN || !PSSA.isMu(PN))
      return nullptr;
  }
  return new MuPack(Insts);
}

BlendPack *BlendPack::tryPack(llvm::ArrayRef<llvm::Instruction *> Insts,
                              PredicatedSSA &PSSA) {
  SmallVector<PHINode *, 8> Phis;
  for (auto *I : Insts) {
    auto *PN = dyn_cast<PHINode>(I);
    if (!PN || !PSSA.isGatedPhi(PN))
      return nullptr;
    Phis.push_back(PN);
  }

  bool IsOneHot = PSSA.isOneHotPhi(Phis.front());
  unsigned N = Phis.front()->getNumOperands();
  for (auto *PN : drop_begin(Phis)) {
    if (PN->getNumOperands() != N)
      return nullptr;
    // Either all of the packs are one hot or all not.
    if (PSSA.isOneHotPhi(PN) != IsOneHot)
      return nullptr;
  }

  return new BlendPack(Insts, IsOneHot, PSSA);
}

SmallVector<VectorMask, 2> BlendPack::masks() const {
  // Number of masks = number of incoming values (i.e., number of operands)
  unsigned N = Insts.front()->getNumOperands();
  SmallVector<VectorMask, 2> Masks(N);
  for (auto *I : Insts) {
    auto *PN = cast<PHINode>(I);
    for (auto X : enumerate(PSSA.getPhiConditions(PN)))
      Masks[X.index()].push_back(X.value());
  }

  return Masks;
}

Value *BlendPack::emit(ArrayRef<Value *> Operands, Inserter &Insert) const {
  unsigned N = Insts.front()->getNumOperands();
  assert(Operands.size() == N * 2);

  auto Values = Operands.drop_back(N);
  auto MaskVals = Operands.drop_front(N);
  if (IsOneHot) {
    assert(N == 2);
    // The convention is the gating condition is set last for a one-hot phi
    return Insert.CreateSelect(MaskVals.back(), Values.back(), Values.front());
  }

  // Emit a chain of select
  auto *Select = Values.back();
  for (auto [M, V] : drop_begin(reverse(zip(MaskVals, Values))))
    Select = Insert.CreateSelect(M, V, Select);
  return Select;
}

GEPPack *GEPPack::tryPack(ArrayRef<Instruction *> Insts) {
  if (any_of(Insts, [](auto *I) { return !isa<GetElementPtrInst>(I); }))
    return nullptr;

  auto *GEP = cast<GetElementPtrInst>(Insts.front());
  unsigned NumOperands = GEP->getNumOperands();
  Type *Ty = GEP->getSourceElementType();

  SmallVector<ConstantInt *> StructOffsets;
  auto *CurTy = Ty;
  for (Value *Idx : drop_begin(GEP->indices())) {
    if (isa<StructType>(CurTy))
      StructOffsets.push_back(cast<ConstantInt>(Idx));
    else
      StructOffsets.push_back(nullptr);
    CurTy = GetElementPtrInst::getTypeAtIndex(CurTy, Idx);
    if (!CurTy)
      return nullptr;
  }

  for (auto *I : drop_begin(Insts)) {
    auto *GEP2 = cast<GetElementPtrInst>(I);
    if (GEP2->getNumOperands() != NumOperands ||
        GEP2->getSourceElementType() != Ty)
      return nullptr;
    auto *CurTy = Ty;
    for (auto Item : enumerate(drop_begin(GEP2->indices()))) {
      unsigned i = Item.index();
      Value *Idx = Item.value();
      if (isa<StructType>(CurTy) && StructOffsets[i] != cast<ConstantInt>(Idx))
        return nullptr;
      CurTy = GetElementPtrInst::getTypeAtIndex(CurTy, Idx);
      if (!CurTy)
        return nullptr;
    }
  }

  return new GEPPack(Insts);
}

SmallVector<OperandPack, 2> GEPPack::getOperands() const {
  auto Operands = Pack::getOperands();
  return SmallVector<OperandPack, 2>(make_filter_range(
      Operands, [](auto &Values) { return !is_splat(Values); }));
}

Value *GEPPack::emit(ArrayRef<Value *> Operands, Inserter &Insert) const {
  auto OrigOperands = Pack::getOperands();
  auto GetOperand = [&OrigOperands, &Operands](unsigned i) -> Value * {
    if (is_splat(OrigOperands[i]))
      return OrigOperands[i].front();
    auto *V = Operands.front();
    Operands = Operands.drop_front();
    return V;
  };

  Value *Ptr = GetOperand(0);
  SmallVector<Value *, 4> Idxs;
  for (unsigned i = 1, N = Insts.front()->getNumOperands(); i != N; i++)
    Idxs.push_back(GetOperand(i));

  auto *Ty = cast<GetElementPtrInst>(Insts.front())->getSourceElementType();
  auto *GEP = Insert.create<GetElementPtrInst>(Ty, Ptr, Idxs);
  if (GEP->getType()->isVectorTy())
    return GEP;
  // Sometimes we end up not needing to vectorize,
  // in which case, we just broadcast the GEP to fix the type
  return Insert.createVectorSplat(Insts.size(), GEP);
}

const ControlCondition *ConditionPack::preCondition() const {
  return getGreatestCommonCondition(Conds);
}

OrPack *OrPack::tryPack(ArrayRef<const ControlCondition *> Conds) {
  auto *Or = dyn_cast_or_null<ConditionOr>(Conds.front());
  if (!Or)
    return nullptr;
  unsigned N = Or->Conds.size();
  if (all_of(drop_begin(Conds), [N](auto *C) {
        auto *Or = dyn_cast_or_null<ConditionOr>(C);
        return Or && Or->Conds.size() == N;
      }))
    return new OrPack(Conds);
  return nullptr;
}

SmallVector<VectorMask, 2> OrPack::getOperandMasks() const {
  unsigned N = cast<ConditionOr>(Conds.front())->Conds.size();
  SmallVector<VectorMask, 2> Masks;
  for (unsigned i = 0; i < N; i++) {
    Masks.emplace_back(map_range(
        Conds, [i](auto *C) { return cast<ConditionOr>(C)->Conds[i]; }));
  }
  return Masks;
}

Value *OrPack::emit(ArrayRef<Value *> ReifiedMasks, ArrayRef<Value *>,
                    Inserter &Insert) const {
  unsigned N = cast<ConditionOr>(Conds.front())->Conds.size();
  assert(ReifiedMasks.size() == N);

  auto *Result = ReifiedMasks.front();
  for (auto *Mask : drop_begin(ReifiedMasks))
    Result = Insert.CreateBinOp(BinaryOperator::Or, Result, Mask);
  return Result;
}

static bool isTrue(const ControlCondition *C) {
  auto *And = dyn_cast_or_null<ConditionAnd>(C);
  return And && And->IsTrue;
}

AndPack *AndPack::tryPack(ArrayRef<const ControlCondition *> Conds) {
  bool IsTrue = isTrue(Conds.front());
  if (all_of(Conds, [IsTrue](auto *C) {
        auto *And = dyn_cast_or_null<ConditionAnd>(C);
        return And && And->IsTrue == IsTrue;
      }))
    return new AndPack(Conds);
  return nullptr;
}

SmallVector<VectorMask, 2> AndPack::getOperandMasks() const {
  auto ParentConds = map_range(Conds, [](const ControlCondition *C) {
    return cast<ConditionAnd>(C)->Parent;
  });
  return {VectorMask(ParentConds)};
}

SmallVector<OperandPack, 2> AndPack::getOperands() const {
  auto Operands = map_range(Conds, [](const ControlCondition *C) {
    return cast<ConditionAnd>(C)->Cond;
  });
  return {OperandPack(Operands)};
}

Value *AndPack::emit(ArrayRef<Value *> ReifiedMasks, ArrayRef<Value *> Operands,
                     Inserter &Insert) const {
  assert(ReifiedMasks.size() == 1);
  assert(Operands.size() == 1);
  auto *Operand = Operands.front();
  if (!isTrue(Conds.front())) {
    auto *VecTy = cast<FixedVectorType>(Operand->getType());
    auto AllTrue =
        ConstantVector::getSplat(VecTy->getElementCount(), Insert.getTrue());
    Operand = Insert.CreateBinOp(BinaryOperator::Xor, Operand, AllTrue);
  }
  return Insert.CreateBinOp(BinaryOperator::And, ReifiedMasks.front(), Operand);
}

SmallVector<OperandPack, 2> ReductionPack::getOperands() const {
  return {OperandPack(Elts.begin(), Elts.end())};
}

Value *ReductionPack::emit(ArrayRef<Value *> Operands, Inserter &Insert) const {
  assert(Operands.size() == 1 &&
         "reduction pack expects exactly one vector argument");
  Value *Src = Operands.front();
  switch (RdxKind) {
  case RecurKind::Add:
    return Insert.createAddReduce(Src);
  case RecurKind::Mul:
    return Insert.createMulReduce(Src);
  case RecurKind::And:
    return Insert.createAndReduce(Src);
  case RecurKind::Or:
    return Insert.createOrReduce(Src);
  case RecurKind::Xor:
    return Insert.createXorReduce(Src);
  case RecurKind::FAdd:
    return Insert.createFAddReduce(Src);
  case RecurKind::FMul:
    return Insert.createFMulReduce(Src);
  case RecurKind::SMax:
    return Insert.createSMaxReduce(Src);
  case RecurKind::SMin:
    return Insert.createSMinReduce(Src);
  case RecurKind::UMax:
    return Insert.createUMaxReduce(Src);
  case RecurKind::UMin:
    return Insert.createUMinReduce(Src);
  case RecurKind::FMax:
    return Insert.createFMaxReduce(Src);
  case RecurKind::FMin:
    return Insert.createFMinReduce(Src);
  default:
    llvm_unreachable("unexpected reduction kind");
  }
}

void ReductionPack::print(raw_ostream &OS) const {
  OS << "reduce { ";
  for (Value *Elt : Elts)
    OS << *Elt << ", ";
  OS << "}";
}

Pack *ReductionPack::clone() const {
  assert(Insts.size() == 1 &&
         "reduction pack should produce exactly one value");
  return new ReductionPack(RdxKind, Insts.front(), Elts);
}

raw_ostream &operator<<(raw_ostream &OS, Pack &P) {
  P.print(OS);
  return OS;
}

raw_ostream &operator<<(raw_ostream &OS, OperandPack &O) {
  OS << '[';
  for (auto &V : O) {
    if (V->hasName())
      OS << V->getName();
    else
      OS << *V;
    OS << "; ";
  }
  OS << ']';
  return OS;
}
