#include "vegen/Pack.h"
#include "llvm/IR/Instructions.h"
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

void SIMDPack::print(raw_ostream &OS) const {
  OS << "[";
  for (auto *I : Insts) {
    if (I->hasName())
      OS << I->getName() << "; ";
    else
      OS << *I << "; ";
  }
  OS << ']';
}

raw_ostream &operator<<(raw_ostream &OS, Pack &P) {
  P.print(OS);
  return OS;
}
