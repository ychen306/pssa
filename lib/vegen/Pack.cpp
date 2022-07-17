#include "vegen/Pack.h"
#include "AddrUtil.h"
#include "pssa/Inserter.h"
#include "pssa/PSSA.h"
#include "llvm/IR/Instructions.h"
#include "llvm/Support/raw_ostream.h"

using namespace llvm;

Value *Pack::emit(ArrayRef<Value *>, Inserter &) const {
  llvm_unreachable("Pack::emit is not supported for arbitrary packs");
  return nullptr;
}

SIMDPack *SIMDPack::tryPack(ArrayRef<Instruction *> Insts) {
  if (Insts.empty())
    return nullptr;

  auto *I = Insts.front();
  if (I->mayReadOrWriteMemory())
    return nullptr;

  if (isa<PHINode>(I))
    return nullptr;

  auto Rest = drop_begin(Insts);
  unsigned Opcode = I->getOpcode();
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

  return new SIMDPack(Insts);
}

SmallVector<OperandPack, 2> SIMDPack::getOperands() const {
  SmallVector<OperandPack, 2> Operands;

  unsigned N = Insts.front()->getNumOperands();
  for (unsigned i = 0; i < N; i++) {
    auto &OP = Operands.emplace_back();
    for (auto *I : Insts)
      OP.push_back(I->getOperand(i));
  }

  return Operands;
}

Value *SIMDPack::emit(ArrayRef<Value *> Operands, Inserter &Insert) const {
  auto *I = Insts.front();

  if (auto *BO = dyn_cast<BinaryOperator>(I)) {
    assert(Operands.size() == 2);
    return Insert.create<BinaryOperator>(BO->getOpcode(), Operands[0],
                                         Operands[1]);
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
    return Insert.create<SelectInst>(Operands[0], Operands[1], Operands[2]);
  }

  llvm_unreachable("unsupported opcode");
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

  auto *Ty = Insts.front()->getType();
  SmallVector<unsigned, 8> SortedIdxs;
  if (!sortPointers(Ptrs, Ty, DL, SE, LI, SortedIdxs))
    return nullptr;

  auto GetSortedIdx = [&SortedIdxs](unsigned i) {
    if (SortedIdxs.empty())
      return i;
    return SortedIdxs[i];
  };

  SmallVector<Instruction *, 8> SortedStores = {Insts[GetSortedIdx(0)]};
  auto *FirstPtr = Ptrs[GetSortedIdx(0)];
  for (unsigned i = 1, N = Insts.size(); i < N; i++) {
    unsigned SortedIdx = GetSortedIdx(i);
    auto *Ptr = Ptrs[SortedIdx];
    auto Diff = diffPointers(Ty, FirstPtr, Ty, Ptr, DL, SE, LI);
    assert(Diff);
    unsigned Gaps = *Diff - i;
    for (unsigned j = 0; j < Gaps; j++)
      SortedStores.push_back(nullptr);
    SortedStores.push_back(Insts[SortedIdx]);
  }
  while (SortedStores.size() < PowerOf2Ceil(SortedStores.size()))
    SortedStores.push_back(nullptr);
  return new LoadPack(SortedStores);
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

  auto *Ty = cast<StoreInst>(Insts.front())->getValueOperand()->getType();
  SmallVector<unsigned, 8> SortedIdxs;
  if (!sortPointers(Ptrs, Ty, DL, SE, LI, SortedIdxs))
    return nullptr;

  auto GetSortedIdx = [&SortedIdxs](unsigned i) {
    if (SortedIdxs.empty())
      return i;
    return SortedIdxs[i];
  };

  SmallVector<Instruction *, 8> SortedStores = {Insts[GetSortedIdx(0)]};
  auto *FirstPtr = Ptrs[GetSortedIdx(0)];
  for (unsigned i = 1, N = Insts.size(); i < N; i++) {
    unsigned SortedIdx = GetSortedIdx(i);
    auto *Ptr = Ptrs[SortedIdx];
    auto Diff = diffPointers(Ty, FirstPtr, Ty, Ptr, DL, SE, LI);
    assert(Diff);
    if (*Diff - i != 0)
      return nullptr;
    SortedStores.push_back(Insts[SortedIdx]);
  }

  SmallVector<const ControlCondition *> Conds(
      map_range(Insts, [&PSSA](auto *I) { return PSSA.getInstCond(I); }));
  auto *C = Conds.front();
  if (all_of(drop_begin(Conds),
             [&](auto *C2) { return PSSA.isEquivalent(C, C2); }))
    return new StorePack(SortedStores);
  return new StorePack(SortedStores, Conds);
}

SmallVector<OperandPack, 2> StorePack::getOperands() const {
  OperandPack OP;
  for (auto *I : Insts)
    OP.push_back(cast<StoreInst>(I)->getValueOperand());
  return {OP};
}

Value *StorePack::emit(ArrayRef<Value *> Operands, Inserter &Insert) const {
  assert(!Mask.empty() || Operands.size() == 1);
  assert(Mask.empty() || Operands.size() == 2);

  auto *Store = cast<StoreInst>(Insts.front());
  auto *Ptr = Store->getPointerOperand();
  auto *PtrTy = Ptr->getType();
  if (!cast<PointerType>(PtrTy)->isOpaque()) {
    Ptr = Insert.make<BitCastInst>(
        Ptr, PointerType::get(Operands.front()->getType(),
                              Store->getPointerAddressSpace()));
  }
  if (Mask.empty())
    return Insert.make<StoreInst>(Operands.front(), Ptr, false /*is volatile*/,
                                  Store->getAlign());
  return Insert.createMaskedStore(Operands.front(), Ptr, Store->getAlign(),
                                  Operands.back());
}

PHIPack *PHIPack::tryPack(ArrayRef<Instruction *> Insts, PredicatedSSA &PSSA) {
  SmallVector<PHINode *, 8> Phis;
  for (auto *I : Insts) {
    auto *PN = dyn_cast<PHINode>(I);
    // Don't deal with one-hot phi for now
    if (!PN || PSSA.isOneHotPhi(PN))
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
    Result = Insert.create<BinaryOperator>(BinaryOperator::Or, Result, Mask);
  return Result;
}

AndPack *AndPack::tryPack(ArrayRef<const ControlCondition *> Conds) {
  if (all_of(Conds, [](auto *C) { return isa_and_nonnull<ConditionAnd>(C); }))
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
  return Insert.create<BinaryOperator>(BinaryOperator::And,
                                       ReifiedMasks.front(), Operands.front());
}

raw_ostream &operator<<(raw_ostream &OS, Pack &P) {
  P.print(OS);
  return OS;
}
