#ifndef VEGEN_PACK_H
#define VEGEN_PACK_H

#include "llvm/ADT/ArrayRef.h"
#include "llvm/ADT/SmallVector.h"

namespace llvm {
class Instruction;
class Value;
class raw_ostream;
} // namespace llvm

using OperandPack = llvm::SmallVector<llvm::Value *, 8>;
using InserterTy = std::function<llvm::Value *(llvm::Value *)>;

struct Pack {
  virtual llvm::SmallVector<OperandPack, 2> getOperands() const = 0;
  virtual llvm::Value *emit(llvm::ArrayRef<llvm::Value *>, InserterTy) const;
  virtual void print(llvm::raw_ostream &) const = 0;
  virtual ~Pack() {}
};

class SIMDPack : public Pack {
  llvm::SmallVector<llvm::Instruction *, 8> Insts;
  SIMDPack(llvm::ArrayRef<llvm::Instruction *> Insts)
      : Insts(Insts.begin(), Insts.end()) {}

public:
  static SIMDPack *tryPack(llvm::ArrayRef<llvm::Instruction *> Insts);
  llvm::SmallVector<OperandPack, 2> getOperands() const override;
  llvm::Value *emit(llvm::ArrayRef<llvm::Value *>, InserterTy) const override;
  void print(llvm::raw_ostream &) const override;

};

llvm::raw_ostream &operator<<(llvm::raw_ostream &OS, Pack &P);

#endif
