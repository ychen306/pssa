#ifndef VEGEN_PACK_H
#define VEGEN_PACK_H

#include "llvm/ADT/ArrayRef.h"
#include "llvm/ADT/SmallVector.h"

namespace llvm {
class Instruction;
class Value;
}

using OperandPack = llvm::SmallVector<llvm::Value *, 8>;
using InserterTy = std::function<llvm::Value *(llvm::Value *)>;

struct Pack {
  virtual llvm::SmallVector<OperandPack, 2> getOperands() const = 0;
  virtual llvm::Value *emit(llvm::ArrayRef<llvm::Value *>, InserterTy) const;
};


class SIMDPack : public Pack {
  llvm::SmallVector<llvm::Instruction *, 8> Insts;
public:
  SIMDPack(llvm::ArrayRef<llvm::Instruction *> Insts)  
    : Insts(Insts.begin(), Insts.end()) {}
  llvm::SmallVector<OperandPack, 2> getOperands() const override;
  llvm::Value *emit(llvm::ArrayRef<llvm::Value *>, InserterTy) const override;
};

#endif
