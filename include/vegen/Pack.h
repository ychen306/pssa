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

// This models a vector operation that
// produces the values of multiple instructions in parallel
class Pack {
public:
  enum PackKind { PK_SIMD, PK_Load, PK_Store, PK_PHI };

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

class ControlCondition;
using VectorMask = llvm::SmallVector<const ControlCondition *, 8>;

// This models a vector operation that *reifies*
// multiple ControlConditions into a vector mask value
class ConditionPack {
protected:
  VectorMask Conds;
  enum PackKind {
    CPK_And,
    CPK_Or,
    // we will add more kinds in the future (e.g., computing a mask using lookup
    // table)
  };
  PackKind Kind;
  PackKind getKind() const { return Kind; }
  ConditionPack(llvm::ArrayRef<const ControlCondition *> Conds, PackKind Kind)
      : Conds(Conds.begin(), Conds.end()), Kind(Kind) {}

public:
  llvm::ArrayRef<const ControlCondition *> values() { return Conds; }
  // Return the vector mask required by this operation.
  // For example, for a pack of ORs,
  // this returns the pack conditions that it's OR'ing together
  virtual llvm::SmallVector<VectorMask, 2> getOperandMasks() const = 0;
  // Return the vector operands required by this operation.
  // For example, for a pack [(c /\ x), (c2 /\ x2)],
  // return the {[x, x2]}
  virtual llvm::SmallVector<OperandPack, 2> getOperands() const = 0;
  virtual llvm::Value *emit(llvm::ArrayRef<llvm::Value *> ReifiedMasks,
                            llvm::ArrayRef<llvm::Value *> Operands,
                            Inserter &) const = 0;
};

struct SIMDPack : public Pack {
  SIMDPack(llvm::ArrayRef<llvm::Instruction *> Insts) : Pack(Insts, PK_SIMD) {}
  static SIMDPack *tryPack(llvm::ArrayRef<llvm::Instruction *> Insts);
  llvm::SmallVector<OperandPack, 2> getOperands() const override;
  llvm::Value *emit(llvm::ArrayRef<llvm::Value *>, Inserter &) const override;
  static bool classof(const Pack *P) { return P->getKind() == PK_SIMD; }
};

struct LoadPack : public Pack {
  LoadPack(llvm::ArrayRef<llvm::Instruction *> Insts) : Pack(Insts, PK_Load) {}
  static LoadPack *tryPack(llvm::ArrayRef<llvm::Instruction *> Insts,
                           const llvm::DataLayout &, llvm::ScalarEvolution &,
                           llvm::LoopInfo &, PredicatedSSA &);
  llvm::SmallVector<OperandPack, 2> getOperands() const override { return {}; }
  llvm::Value *emit(llvm::ArrayRef<llvm::Value *>, Inserter &) const override;
  static bool classof(const Pack *P) { return P->getKind() == PK_Load; }
};

struct StorePack : public Pack {
  StorePack(llvm::ArrayRef<llvm::Instruction *> Insts)
      : Pack(Insts, PK_Store) {}
  static StorePack *tryPack(llvm::ArrayRef<llvm::Instruction *> Insts,
                            const llvm::DataLayout &, llvm::ScalarEvolution &,
                            llvm::LoopInfo &, PredicatedSSA &);
  llvm::SmallVector<OperandPack, 2> getOperands() const override;
  llvm::Value *emit(llvm::ArrayRef<llvm::Value *>, Inserter &) const override;
  static bool classof(const Pack *P) { return P->getKind() == PK_Store; }
};

// A pack of *convergent* phi
struct PHIPack : public Pack {
  PHIPack(llvm::ArrayRef<llvm::Instruction *> Insts) : Pack(Insts, PK_PHI) {}
  static PHIPack *tryPack(llvm::ArrayRef<llvm::Instruction *> Insts,
                          PredicatedSSA &PSSA);
  llvm::SmallVector<OperandPack, 2> getOperands() const override;
  // We don't provide PHIPack::emit (there's a special lowering path for
  // PHIPack)
  static bool classof(const Pack *P) { return P->getKind() == PK_PHI; }
};

class OrPack : public ConditionPack {
  OrPack(llvm::ArrayRef<const ControlCondition *> Conds)
      : ConditionPack(Conds, CPK_Or) {}

public:
  OrPack *tryPack(llvm::ArrayRef<const ControlCondition *>);
  llvm::SmallVector<VectorMask, 2> getOperandMasks() const override;
  llvm::SmallVector<OperandPack, 2> getOperands() const override { return {}; }
  llvm::Value *emit(llvm::ArrayRef<llvm::Value *>,
                    llvm::ArrayRef<llvm::Value *>, Inserter &) const override;
};

class AndPack : public ConditionPack {
  AndPack(llvm::ArrayRef<const ControlCondition *> Conds)
      : ConditionPack(Conds, CPK_And) {}

public:
  AndPack *tryPack(llvm::ArrayRef<const ControlCondition *>);
  llvm::SmallVector<VectorMask, 2> getOperandMasks() const override;
  llvm::SmallVector<OperandPack, 2> getOperands() const override;
  llvm::Value *emit(llvm::ArrayRef<llvm::Value *>,
                    llvm::ArrayRef<llvm::Value *>, Inserter &) const override;
};

llvm::raw_ostream &operator<<(llvm::raw_ostream &OS, Pack &P);

#endif
