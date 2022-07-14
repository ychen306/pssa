#ifndef VEGEN_PACK_H
#define VEGEN_PACK_H

#include "llvm/ADT/ArrayRef.h"
#include "llvm/ADT/SmallVector.h"

namespace llvm {
class Instruction;
class Value;
class raw_ostream;
class DataLayout;
class ScalarEvolution;
class LoopInfo;
} // namespace llvm

using OperandPack = llvm::SmallVector<llvm::Value *, 8>;
using InserterTy = std::function<llvm::Value *(llvm::Value *)>;

struct Pack {
  virtual llvm::SmallVector<OperandPack, 2> getOperands() const = 0;
  virtual llvm::Value *emit(llvm::ArrayRef<llvm::Value *>, InserterTy) const;
  virtual void print(llvm::raw_ostream &) const;
  virtual llvm::ArrayRef<llvm::Instruction *> values() const = 0;
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
  llvm::ArrayRef<llvm::Instruction *> values() const override { return Insts; }
};

class LoadPack : public Pack {
  llvm::SmallVector<llvm::Instruction *, 8> Insts;
  LoadPack(llvm::ArrayRef<llvm::Instruction *> Insts)
      : Insts(Insts.begin(), Insts.end()) {}

public:
  static LoadPack *tryPack(llvm::ArrayRef<llvm::Instruction *> Insts,
                           const llvm::DataLayout &, llvm::ScalarEvolution &,
                           llvm::LoopInfo &);
  llvm::SmallVector<OperandPack, 2> getOperands() const override { return {}; }
  llvm::Value *emit(llvm::ArrayRef<llvm::Value *>, InserterTy) const override;
  llvm::ArrayRef<llvm::Instruction *> values() const override { return Insts; }
};

class StorePack : public Pack {
  llvm::SmallVector<llvm::Instruction *, 8> Insts;
  StorePack(llvm::ArrayRef<llvm::Instruction *> Insts)
      : Insts(Insts.begin(), Insts.end()) {}

public:
  static StorePack *tryPack(llvm::ArrayRef<llvm::Instruction *> Insts,
                            const llvm::DataLayout &, llvm::ScalarEvolution &,
                            llvm::LoopInfo &);
  llvm::SmallVector<OperandPack, 2> getOperands() const override;
  llvm::Value *emit(llvm::ArrayRef<llvm::Value *>, InserterTy) const override;
  llvm::ArrayRef<llvm::Instruction *> values() const override { return Insts; }
};

llvm::raw_ostream &operator<<(llvm::raw_ostream &OS, Pack &P);

#endif
