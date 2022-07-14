#include "vegen/Pack.h"
#include "AddrUtil.h"
#include "llvm/Analysis/LoopAccessAnalysis.h"
#include "llvm/Analysis/LoopInfo.h"
#include "llvm/IR/Instructions.h"
#include "llvm/IR/Module.h"
#include "llvm/Support/raw_ostream.h"

using namespace llvm;

Value *Pack::emit(ArrayRef<Value *>, InserterTy) const {
  llvm_unreachable("Pack::emit is not supported for arbitrary packs");
  return nullptr;
}

SIMDPack *SIMDPack::tryPack(ArrayRef<Instruction *> Insts) {
  if (Insts.empty())
    return nullptr;

  auto *I = Insts.front();
  if (I->mayReadOrWriteMemory())
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

Value *SIMDPack::emit(ArrayRef<Value *> Operands, InserterTy Insert) const {
  auto *I = Insts.front();

  if (auto *BO = dyn_cast<BinaryOperator>(I)) {
    assert(Operands.size() == 2);
    return Insert(
        BinaryOperator::Create(BO->getOpcode(), Operands[0], Operands[1]));
  }

  if (auto *Cmp = dyn_cast<CmpInst>(I)) {
    assert(Operands.size() == 2);
    auto Pred = Cmp->getPredicate();
    assert(all_of(Insts, [Pred](auto *I) {
      return cast<CmpInst>(I)->getPredicate() == Pred;
    }));
    return Insert(
        CmpInst::Create(Cmp->getOpcode(), Pred, Operands[0], Operands[1]));
  }

  if (isa<SelectInst>(I)) {
    assert(Operands.size() == 3);
    return Insert(SelectInst::Create(Operands[0], Operands[1], Operands[2]));
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

LoadPack *LoadPack::tryPack(ArrayRef<Instruction *> Insts, const DataLayout &DL,
                            ScalarEvolution &SE, LoopInfo &LI) {
  SmallVector<Value *, 8> Ptrs;
  for (auto *I : Insts) {
    if (auto *LI = dyn_cast<LoadInst>(I))
      Ptrs.push_back(LI->getPointerOperand());
    else
      return nullptr;
  }

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

Value *LoadPack::emit(ArrayRef<Value *> Operands, InserterTy Insert) const {
  assert(Operands.size() == 0);

  auto *Load = cast<LoadInst>(Insts.front());
  auto *VecTy = FixedVectorType::get(Load->getType(), Insts.size());
  auto *Ptr = Load->getPointerOperand();
  auto *PtrTy = Ptr->getType();
  if (!cast<PointerType>(PtrTy)->isOpaque()) {
    Ptr = Insert(new BitCastInst(
        Ptr, PointerType::get(VecTy, Load->getPointerAddressSpace())));
  }
  return Insert(new LoadInst(VecTy, Ptr, Load->getName() + ".vec",
                             false /*is volatile*/, Load->getAlign()));
}

StorePack *StorePack::tryPack(ArrayRef<Instruction *> Insts,
                              const DataLayout &DL, ScalarEvolution &SE,
                              LoopInfo &LI) {
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
  return new StorePack(SortedStores);
}

SmallVector<OperandPack, 2> StorePack::getOperands() const {
  OperandPack OP;
  for (auto *I : Insts)
    OP.push_back(cast<StoreInst>(I)->getValueOperand());
  return {OP};
}

Value *StorePack::emit(ArrayRef<Value *> Operands, InserterTy Insert) const {
  assert(Operands.size() == 1);

  auto *Store = cast<StoreInst>(Insts.front());
  auto *Ptr = Store->getPointerOperand();
  auto *PtrTy = Ptr->getType();
  if (!cast<PointerType>(PtrTy)->isOpaque()) {
    Ptr = Insert(new BitCastInst(
        Ptr, PointerType::get(Operands.front()->getType(),
                              Store->getPointerAddressSpace())));
  }
  return Insert(new StoreInst(Operands.front(), Ptr, false /*is volatile*/,
                              Store->getAlign()));
}

raw_ostream &operator<<(raw_ostream &OS, Pack &P) {
  P.print(OS);
  return OS;
}
