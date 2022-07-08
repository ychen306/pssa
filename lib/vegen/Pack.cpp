#include "vegen/Pack.h"
#include "llvm/IR/Instructions.h"

using namespace llvm;

Value *Pack::emit(ArrayRef<Value *>, InserterTy) const {
  llvm_unreachable("Pack::emit is not supported for arbitrary packs");
  return nullptr;
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
    return Insert(CmpInst::Create(Cmp->getOpcode(), Pred, Operands[0], Operands[1]));
  }

  if (isa<SelectInst>(I)) {
    assert(Operands.size() == 3);
    return Insert(SelectInst::Create(Operands[0], Operands[1], Operands[2]));
  }

  llvm_unreachable("unsupported opcode");
}
