#ifndef VEGEN_PACK_H
#define VEGEN_PACK_H

#include "llvm/ADT/ArrayRef.h"
#include "llvm/ADT/SmallVector.h"
#include "llvm/Support/Casting.h"

namespace llvm {
class Instruction;
class Value;
class raw_ostream;
class DataLayout;
class ScalarEvolution;
class LoopInfo;
} // namespace llvm

class PredicatedSSA;
class Inserter;

using OperandPack = llvm::SmallVector<llvm::Value *, 8>;

class Pack {
public:
  enum PackKind {
    PK_SIMD, PK_Load, PK_Store, PK_PHI
  };
private:
  const PackKind Kind;

protected:
  llvm::SmallVector<llvm::Instruction *, 8> Insts;
  Pack(llvm::ArrayRef<llvm::Instruction *> Insts, PackKind Kind) 
    : Kind(Kind), Insts(Insts.begin(), Insts.end()) {}
public:
  PackKind getKind() const { return Kind; }
  llvm::ArrayRef<llvm::Instruction *> values() const { return Insts; }

  virtual llvm::SmallVector<OperandPack, 2> getOperands() const = 0;
  virtual llvm::Value *emit(llvm::ArrayRef<llvm::Value *>, Inserter &) const;
  virtual void print(llvm::raw_ostream &) const;
  virtual ~Pack() {}
};

struct SIMDPack : public Pack {
  using Pack::Pack;
  static SIMDPack *tryPack(llvm::ArrayRef<llvm::Instruction *> Insts);
  llvm::SmallVector<OperandPack, 2> getOperands() const override;
  llvm::Value *emit(llvm::ArrayRef<llvm::Value *>, Inserter &) const override;
  static bool classof(const Pack *P) {
    return P->getKind() == PK_SIMD;
  }
};

struct LoadPack : public Pack {
  using Pack::Pack;
  static LoadPack *tryPack(llvm::ArrayRef<llvm::Instruction *> Insts,
                           const llvm::DataLayout &, llvm::ScalarEvolution &,
                           llvm::LoopInfo &);
  llvm::SmallVector<OperandPack, 2> getOperands() const override { return {}; }
  llvm::Value *emit(llvm::ArrayRef<llvm::Value *>, Inserter &) const override;
  static bool classof(const Pack *P) {
    return P->getKind() == PK_Load;
  }
};

struct StorePack : public Pack {
  using Pack::Pack;
  static StorePack *tryPack(llvm::ArrayRef<llvm::Instruction *> Insts,
                            const llvm::DataLayout &, llvm::ScalarEvolution &,
                            llvm::LoopInfo &);
  llvm::SmallVector<OperandPack, 2> getOperands() const override;
  llvm::Value *emit(llvm::ArrayRef<llvm::Value *>, Inserter &) const override;
  static bool classof(const Pack *P) {
    return P->getKind() == PK_Store;
  }
};

// A pack of *convergent* phi
struct PHIPack : public Pack {
  using Pack::Pack;
  static PHIPack *tryPack(llvm::ArrayRef<llvm::Instruction *> Insts, PredicatedSSA &PSSA);
  llvm::SmallVector<OperandPack, 2> getOperands() const override;
  // We don't provide PHIPack::emit (there's a special lowering path for PHIPack)
  static bool classof(const Pack *P) {
    return P->getKind() == PK_PHI;
  }
};

llvm::raw_ostream &operator<<(llvm::raw_ostream &OS, Pack &P);

#endif
