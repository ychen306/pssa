#include "vegen/Pack.h"
#include "AddrUtil.h"
#include "InstructionDescriptor.h"
#include "LooseInstructionTable.h"
#include "Matcher.h"
#include "Reducer.h"
#include "TripCount.h"
#include "pssa/Inserter.h"
#include "pssa/PSSA.h"
#include "llvm/Analysis/Loads.h"
#include "llvm/Analysis/LoopInfo.h"
#include "llvm/Analysis/ScalarEvolution.h"
#include "llvm/Analysis/ScalarEvolutionExpressions.h"
#include "llvm/Analysis/VectorUtils.h"
#include "llvm/IR/Constants.h"
#include "llvm/IR/Instructions.h"
#include "llvm/IR/Intrinsics.h"
#include "llvm/IR/IntrinsicsX86.h"
#include "llvm/Support/raw_ostream.h"

using namespace llvm;

void Pack::dump() const { print(errs()); }

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

void Pack::getLooseInsts(SmallVectorImpl<Instruction *> &LooseInsts,
                         LooseInstructionTable &LIT) const {
  for (auto *I : Insts)
    if (I && LIT.isLoose(I))
      LooseInsts.push_back(I);
}

void Pack::getKilledInsts(SmallVectorImpl<Instruction *> &Killed) const {
  for (auto *I : Insts) {
    if (I)
      Killed.push_back(I);
  }
}

SIMDPack *SIMDPack::tryPack(ArrayRef<Instruction *> Insts) {
  if (Insts.empty())
    return nullptr;

  auto *I = Insts.front();
  if (!isa<BinaryOperator>(I) && !isa<CmpInst>(I) && !isa<SelectInst>(I) &&
      !isa<CastInst>(I) && !isa<FreezeInst>(I) && !isa<UnaryOperator>(I) &&
      !isa<Reducer>(I))
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
    if (!all_of(Rest, [R0](Instruction *I) {
          auto *R = dyn_cast<Reducer>(I);
          return R && R->getKind() == R0->getKind() && R->getNumOperands() == 2;
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
    return emitBinaryReduction(R->getKind(), Operands[0], Operands[1], Insert);
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
  case Intrinsic::fabs:
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
      OS << "dont_care";
    else if (auto *R = dyn_cast<Reducer>(I))
      R->dump(OS);
    else if (I->hasName())
      OS << I->getName();
    else if (!isa<PHINode>(I))
      OS << *I;
    else
      OS << "phi";
    OS << "; ";
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

// Copied from SCEV AA
static Value *getBaseValue(const SCEV *S) {
  if (const SCEVAddRecExpr *AR = dyn_cast<SCEVAddRecExpr>(S)) {
    // In an addrec, assume that the base will be in the start, rather
    // than the step.
    return getBaseValue(AR->getStart());
  } else if (const SCEVAddExpr *A = dyn_cast<SCEVAddExpr>(S)) {
    // If there's a pointer operand, it'll be sorted at the end of the list.
    const SCEV *Last = A->getOperand(A->getNumOperands() - 1);
    if (Last->getType()->isPointerTy())
      return getBaseValue(Last);
  } else if (const SCEVUnknown *U = dyn_cast<SCEVUnknown>(S)) {
    // This is a leaf node.
    return U->getValue();
  }
  // No Identified object found.
  return nullptr;
}

// Adapted from llvm::isDereferenceableAndAlignedInLoop
bool isDereferenceableInLoop(LoadInst *LI, Loop *L, ScalarEvolution &SE,
                             DominatorTree &DT) {
  auto &DL = LI->getModule()->getDataLayout();
  Value *Ptr = LI->getPointerOperand();

  APInt EltSize(DL.getIndexTypeSizeInBits(Ptr->getType()),
                DL.getTypeStoreSize(LI->getType()).getFixedSize());
  const Align Alignment = LI->getAlign();

  Instruction *HeaderFirstNonPHI = L->getHeader()->getFirstNonPHI();

  // If given a uniform (i.e. non-varying) address, see if we can prove the
  // access is safe within the loop w/o needing predication.
  if (L->isLoopInvariant(Ptr))
    return isDereferenceableAndAlignedPointer(Ptr, Alignment, EltSize, DL,
                                              HeaderFirstNonPHI, &DT);

  // Otherwise, check to see if we have a repeating access pattern where we can
  // prove that all accesses are well aligned and dereferenceable.
  auto *AddRec = dyn_cast<SCEVAddRecExpr>(SE.getSCEV(Ptr));
  if (!AddRec || AddRec->getLoop() != L || !AddRec->isAffine())
    return false;

  auto *Step = dyn_cast<SCEVConstant>(AddRec->getStepRecurrence(SE));
  if (!Step)
    return false;

  auto TC = SE.getSmallConstantMaxTripCount(L);
  if (!TC)
    return false;

  APInt AccessSize = TC * EltSize;

  auto *StartS = dyn_cast<SCEVUnknown>(AddRec->getStart());
  Value *Base;
  if (StartS) {
    assert(SE.isLoopInvariant(StartS, L) && "implied by addrec definition");
    Base = StartS->getValue();
  } else {
    Base = getBaseValue(AddRec);
    if (!Base)
      return false;
    auto *Offset = SE.getMinusSCEV(AddRec->getStart(), SE.getSCEV(Base));
    auto *OffsetC = dyn_cast<SCEVConstant>(Offset);
    if (!OffsetC)
      return false;
    AccessSize += OffsetC->getAPInt();
  }

  return isDereferenceableAndAlignedPointer(Base, Alignment, AccessSize, DL,
                                            HeaderFirstNonPHI, &DT);
}

static bool isDereferenceable(LoadInst *LI, Loop *L, ScalarEvolution &SE,
                              DominatorTree &DT, const DataLayout &DL) {
  if (L) {
    return isDereferenceableInLoop(LI, L, SE, DT);
  }
  return isDereferenceablePointer(LI->getPointerOperand(), LI->getType(), DL,
                                  LI, &DT);
}

LoadPack *LoadPack::tryPack(ArrayRef<Instruction *> Insts, const DataLayout &DL,
                            ScalarEvolution &SE, DominatorTree &DT,
                            LoopInfo &LI, PredicatedSSA &PSSA) {
  SmallVector<Value *, 8> Ptrs;
  bool IsDereferenceable = true;
  for (auto *I : Insts) {
    auto *LI = dyn_cast<LoadInst>(I);
    if (!LI)
      return nullptr;
    auto *L = PSSA.getOrigLoop(PSSA.getLoopForInst(LI));
    IsDereferenceable &= isDereferenceable(LI, L, SE, DT, DL);
    Ptrs.push_back(LI->getPointerOperand());
  }

  SmallVector<Instruction *, 8> SortedLoads;
  if (!sortByPointers(Insts, Ptrs, SortedLoads, DL, SE, LI, true/*allow gaps*/))
    return nullptr;
  // Bail if there are too many gaps
  // FIXME: check the threshold in a more principled way
  if (SortedLoads.size() > Insts.size() && SortedLoads.size() > 16)
    return nullptr;

  return new LoadPack(SortedLoads, PSSA, IsDereferenceable);
}

SmallVector<VectorMask, 2> LoadPack::masks() const {
  VectorMask Conds;
  for (auto *I : Insts) {
    if (I)
      Conds.push_back(PSSA.getInstCond(I));
  }
  auto *C = Conds.front();
  if (all_of(drop_begin(Conds),
             [&](auto *C2) { return PSSA.isEquivalent(C, C2); }))
    return {};
  return {Conds};
}

static Instruction *propagateMetadata(Value *V, ArrayRef<Instruction *> Insts) {
  SmallVector<Value *> Vals;
  for (auto *I : Insts) {
    if (I)
      Vals.push_back(I);
  }
  return propagateMetadata(cast<Instruction>(V), Vals);
}

Value *LoadPack::emit(ArrayRef<Value *> Operands, Inserter &Insert) const {
  bool Masking = Operands.size() == 1;
  assert(Masking || Operands.size() == 0);

  auto *Load = cast<LoadInst>(Insts.front());
  auto *VecTy = FixedVectorType::get(Load->getType(), Insts.size());
  auto *Ptr = Load->getPointerOperand();
  auto *PtrTy = Ptr->getType();
  if (!cast<PointerType>(PtrTy)->isOpaque()) {
    Ptr = Insert.make<BitCastInst>(
        Ptr, PointerType::get(VecTy, Load->getPointerAddressSpace()));
  }
  Value *VLoad;
  if (!Masking || IsDereferenceable) {
    VLoad = Insert.make<LoadInst>(VecTy, Ptr, Load->getName() + ".vec",
                                  false /*is volatile*/, Load->getAlign());
  } else {
    VLoad =
        Insert.createMaskedLoad(VecTy, Ptr, Load->getAlign(), Operands.front());
  }
  return propagateMetadata(VLoad, Insts);
}

SplatPack *SplatPack::tryPack(ArrayRef<Instruction *> Insts,
                              ScalarEvolution &SE, LoopInfo &LI,
                              const DataLayout &DL) {
  auto *Ty = Insts.front()->getType();
  SmallVector<Value *> Ptrs;
  SmallVector<Loop *> Loops;
  for (auto *I : Insts) {
    auto *Load = dyn_cast<LoadInst>(I);
    if (!Load || Load->getType() != Ty)
      return nullptr;
    Ptrs.push_back(Load->getPointerOperand());
    Loops.push_back(LI.getLoopFor(I->getParent()));
  }
  auto *Ptr0 = Ptrs.front();
  for (auto *Ptr : drop_begin(Ptrs)) {
    auto Diff =
        diffPointers(Ty, Ptr0, Ty, Ptr, DL, SE, LI, true /*strict check*/);
    if (!Diff || *Diff != 0)
      return nullptr;
  }
  // Make sure the loops are fusible (doens't make sense if we have to
  // coiterate)
  while (!is_splat(Loops)) {
    auto *L0 = Loops.front();
    for (auto *L : drop_begin(Loops)) {
      if (!haveIdenticalTripCounts(L0, L, SE))
        return nullptr;
    }
    for (auto &L : Loops)
      L = L->getParentLoop();
  }
  return new SplatPack(Insts);
}

Value *SplatPack::emit(ArrayRef<Value *>, Inserter &Insert) const {
  auto *Load = Insts.front()->clone();
  Insert(Load);
  unsigned N = Insts.size();
  Value *Poison = PoisonValue::get(FixedVectorType::get(Load->getType(), N));
  auto *Int64Ty = Type::getInt64Ty(Insert.getContext());
  Value *V = Insert.create<InsertElementInst>(Poison, Load,
                                              ConstantInt::get(Int64Ty, 0));
  SmallVector<int, 8> Zeros(N);
  return Insert.make<ShuffleVectorInst>(V, Zeros);
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
  if (!sortByPointers(Insts, Ptrs, SortedStores, DL, SE, LI, false/*allow gaps*/))
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
  Value *VStore;
  if (!Masking) {
    VStore = Insert.make<StoreInst>(Operands.front(), Ptr,
                                    false /*is volatile*/, Store->getAlign());
  } else {
    VStore = Insert.createMaskedStore(Operands.front(), Ptr, Store->getAlign(),
                                      Operands.back());
  }
  return propagateMetadata(VStore, Insts);
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

static bool isMu(PHINode *PN, PredicatedSSA &PSSA, LooseInstructionTable *LIT) {
  if (LIT && LIT->isLoose(PN))
    return LIT->isLooseMu(PN);
  return PSSA.isMu(PN);
}

PHIPack *PHIPack::tryPack(ArrayRef<Instruction *> Insts, PredicatedSSA &PSSA,
                          LooseInstructionTable *LIT) {
  SmallVector<PHINode *, 8> Phis;
  for (auto *I : Insts) {
    auto *PN = dyn_cast<PHINode>(I);
    if (!PN || isMu(PN, PSSA, LIT))
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

MuPack *MuPack::tryPack(ArrayRef<Instruction *> Insts, PredicatedSSA &PSSA,
                        LooseInstructionTable *LIT) {
  for (auto *I : Insts) {
    auto *PN = dyn_cast<PHINode>(I);
    if (!PN || !isMu(PN, PSSA, LIT))
      return nullptr;
  }
  return new MuPack(Insts);
}

BlendPack *BlendPack::tryPack(ArrayRef<Instruction *> Insts,
                              PredicatedSSA &PSSA, LooseInstructionTable *LIT) {
  SmallVector<PHINode *, 8> Phis;
  for (auto *I : Insts) {
    auto *PN = dyn_cast<PHINode>(I);
    if (!PN || isMu(PN, PSSA, LIT))
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

  return new BlendPack(Insts, IsOneHot, PSSA, LIT);
}

SmallVector<VectorMask, 2> BlendPack::masks() const {
  // Number of masks = number of incoming values (i.e., number of operands)
  unsigned N = Insts.front()->getNumOperands();
  SmallVector<VectorMask, 2> Masks(N);
  for (auto *I : Insts) {
    auto *PN = cast<PHINode>(I);
    if (!LIT || !LIT->isLooseOneHotPhi(PN)) {
      for (auto X : enumerate(PSSA.getPhiConditions(PN)))
        Masks[X.index()].push_back(X.value());
    } else {
      Masks[0].push_back(nullptr);
      Masks[1].push_back(LIT->getOneHotCond(PN));
    }
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

ReductionPack::ReductionPack(Reducer *Root, unsigned N, unsigned VecLen)
    : Pack({Root}, PK_Reduction), Root(Root), N(N), VecLen(VecLen) {}

SmallVector<OperandPack, 2> ReductionPack::getOperands() const {
  unsigned NumElts = Root->getNumOperands();
  assert(N <= NumElts);
  // Elements that we will reduce horizontally
  SmallVector<Value *> VecElts(Root->value_op_begin() + NumElts - N,
                               Root->value_op_end());
  assert(N % VecLen == 0);
  SmallVector<OperandPack, 2> Operands;
  // Split up the elements into chunks of vector length
  for (unsigned Begin = 0; Begin < N; Begin += VecLen)
    Operands.emplace_back(VecElts.begin() + Begin,
                          VecElts.begin() + Begin + VecLen);
  return Operands;
}

static Value *emitHorizontalReduction(RecurKind Kind, Value *Src,
                                      Inserter &Insert) {
  switch (Kind) {
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

static Value *emitReduction(RecurKind Kind, ArrayRef<Value *> Args,
                            Inserter &Insert) {
  Value *Acc = Args.front();
  for (auto *V : llvm::drop_begin(Args))
    Acc = emitBinaryReduction(Kind, Acc, V, Insert);
  return Acc;
}

Value *ReductionPack::emit(ArrayRef<Value *> Operands, Inserter &Insert) const {
  assert(Operands.size() == N / VecLen &&
         "Unexpected number of vector reduction operands");
  unsigned NumElts = Root->getNumOperands();
  // Collect the scalar elements
  SmallVector<Value *> Args(Root->value_op_begin(),
                            Root->value_op_begin() + NumElts - N);
  auto RdxKind = Root->getKind();
  // Add up all of the vector operands
  auto *Vec = emitReduction(RdxKind, Operands, Insert);
  // Horizontally reduce the vector before combine with the scalars
  Args.push_back(emitHorizontalReduction(Root->getKind(), Vec, Insert));
  return emitReduction(RdxKind, Args, Insert);
}

SmallVector<Use *, 2> ReductionPack::getScalarUses() const {
  SmallVector<Use *, 2> Uses;
  for (unsigned i = 0; i < Root->getNumOperands() - N; i++)
    Uses.push_back(Root->getOperandList() + i);
  return Uses;
}

void ReductionPack::print(raw_ostream &OS) const {
  OS << "reduce { ";
  for (Value *V : Root->operand_values()) {
    if (auto *Rdx = dyn_cast<Reduction>(V))
      OS << *Rdx << ", ";
    else
      OS << *V << ", ";
  }
  OS << "}";
}

Pack *ReductionPack::clone() const {
  assert(Insts.size() == 1 &&
         "reduction pack should produce exactly one value");
  return new ReductionPack(Root, N, VecLen);
}

GeneralPack *GeneralPack::tryPack(const InstructionDescriptor &InstDesc,
                                  ArrayRef<Instruction *> Insts,
                                  Matcher &TheMatcher) {
  SmallVector<Match *> Matches;
  SmallVector<Instruction *> Roots;
  for (auto [BoundOp, I] : llvm::zip(InstDesc.getOperations(), Insts)) {
    auto Result = TheMatcher.match(BoundOp.Op, I);
    auto *M = Result.dyn_cast<Match *>();
    if (!M)
      return nullptr;
    Matches.push_back(M);
    Roots.push_back(M->Root);
  }
  return new GeneralPack(InstDesc, Roots, Matches);
}

SmallVector<OperandPack, 2> GeneralPack::getOperands() const {
  SmallVector<OperandPack, 2> Operands;

  // Initialize size of the vector operands
  for (auto &VecSize : InstDesc.getInputSizes())
    Operands.emplace_back(VecSize.getNumElements(), nullptr);

  // Fill in the operands
  assert(InstDesc.getOperations().size() == Matches.size());
  using llvm::zip;
  for (auto [BoundOp, M] : zip(InstDesc.getOperations(), Matches)) {
    assert(BoundOp.Bindings.size() == M->LiveIns.size());
    for (auto [Binding, U] : zip(BoundOp.Bindings, M->LiveIns))
      Operands[Binding.OperandId][Binding.ElementId] = U->get();
  }
  return Operands;
}

Value *GeneralPack::emit(ArrayRef<Value *> Operands, Inserter &Insert) const {
  if (InstDesc.getName() == "pmaddwd128") {
    assert(Operands.size() == 2);
    return Insert.createIntrinsicCall(Intrinsic::x86_sse2_pmadd_wd,
                                      {} /*(overloaded) types*/, Operands);
  } else if (InstDesc.getName() == "vpdpwssd128") {
    assert(Operands.size() == 3);
    auto *Src = Operands[0];
    auto *A = Operands[1];
    auto *B = Operands[2];
    auto *Ty = Src->getType();
    // A and B are supposed to be 16-bit vectors, but the intrinsics' signature
    // uses 32-bit
    A = Insert.make<BitCastInst>(A, Ty);
    B = Insert.make<BitCastInst>(B, Ty);
    return Insert.createIntrinsicCall(Intrinsic::x86_avx512_vpdpwssd_128,
                                      {} /*(overloaded) types*/, {Src, A, B});
  } else if (InstDesc.getName() == "vpdpbusd128") {
    assert(Operands.size() == 3);
    auto *Src = Operands[0];
    auto *A = Operands[1];
    auto *B = Operands[2];
    auto *Ty = Src->getType();
    // A and B are supposed to be 16-bit vectors, but the intrinsics' signature
    // uses 32-bit
    A = Insert.make<BitCastInst>(A, Ty);
    B = Insert.make<BitCastInst>(B, Ty);
    return Insert.createIntrinsicCall(Intrinsic::x86_avx512_vpdpbusd_128,
                                      {} /*(overloaded) types*/, {Src, A, B});
  }
  llvm_unreachable("not implemented");
}

void GeneralPack::getLooseInsts(SmallVectorImpl<Instruction *> &LooseInsts,
                                LooseInstructionTable &LIT) const {
  for (auto *M : Matches) {
    for (auto *I : M->LooseInsts)
      if (LIT.isLoose(I))
        LooseInsts.push_back(I);
  }
}

void GeneralPack::getKilledInsts(SmallVectorImpl<Instruction *> &Killed) const {
  for (auto *M : Matches)
    Killed.append(M->LooseInsts.begin(), M->LooseInsts.end());
}

void GeneralPack::print(raw_ostream &OS) const {
  OS << InstDesc.getName() << " [";
  for (auto *I : values()) {
    if (!I)
      OS << "dont_care";
    else if (auto *R = dyn_cast<Reducer>(I))
      R->dump(OS);
    else if (I->hasName())
      OS << I->getName();
    else if (!isa<PHINode>(I))
      OS << *I;
    else
      OS << "phi";
    OS << "; ";
  }
  OS << ']';
}

raw_ostream &operator<<(raw_ostream &OS, const Pack &P) {
  P.print(OS);
  return OS;
}

raw_ostream &operator<<(raw_ostream &OS, const OperandPack &O) {
  OS << '[';
  for (auto *V : O) {
    if (auto *Rdx = dyn_cast<Reduction>(V))
      OS << *Rdx;
    else if (V->hasName())
      OS << V->getName();
    else if (!isa<PHINode>(V))
      OS << *V;
    else
      OS << "phi";
    OS << "; ";
  }
  OS << ']';
  return OS;
}
