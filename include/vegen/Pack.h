#ifndef VEGEN_PACK_H
#define VEGEN_PACK_H

#include "llvm/ADT/ArrayRef.h"
#include "llvm/ADT/SmallVector.h"
#include "llvm/Support/InstructionCost.h"

namespace llvm {
class Instruction;
class Value;
class raw_ostream;
class DataLayout;
class ScalarEvolution;
class DominatorTree;
class LoopInfo;
class Reducer;
class Use;
} // namespace llvm

class PredicatedSSA;
class Inserter;
class LooseInstructionTable;

using OperandPack = llvm::SmallVector<llvm::Value *, 8>;
class ControlCondition;
using VectorMask = llvm::SmallVector<const ControlCondition *, 8>;

// This models a vector operation that
// produces the values of multiple instructions in parallel
class Pack {
public:
  enum PackKind {
    PK_SIMD,
    PK_Intrinsic,
    PK_Load,
    PK_Store,
    PK_Gather,
    PK_PHI,
    PK_Mu,
    PK_Blend,
    PK_GEP,
    PK_Splat, // load a single element and then broadcast
    // *Horizontal* reduction
    PK_Reduction,
    // Arbitrary, potentially non-SIMD instructions
    PK_General,
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
  unsigned size() const { return Insts.size(); }

  // The default impl. zips the operands of the packed instructions together
  virtual llvm::SmallVector<OperandPack, 2> getOperands() const;
  virtual llvm::Value *emit(llvm::ArrayRef<llvm::Value *>, Inserter &) const;
  virtual void print(llvm::raw_ostream &) const;
  virtual ~Pack() {}
  // Override for masked load/store and blending, etc
  virtual llvm::SmallVector<VectorMask, 2> masks() const { return {}; }
  virtual llvm::InstructionCost getCost() const { return 1; }
  // Get the loose insts that need to be inserted if we want to make this pack
  virtual void getLooseInsts(llvm::SmallVectorImpl<llvm::Instruction *> &,
                             LooseInstructionTable &) const;
  virtual llvm::SmallVector<llvm::Use *, 2> getScalarUses() const { return {}; }
  // Return instructions immediately killed by using this pack
  virtual void
  getKilledInsts(llvm::SmallVectorImpl<llvm::Instruction *> &) const;
  virtual Pack *clone() const = 0;
  void dump() const;
};

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
  llvm::ArrayRef<const ControlCondition *> values() const { return Conds; }
  // Return necessary condition under which the masks evaluate to true.
  // For example, suppose we want to pack `c /\ x` and `c /\ y`.
  // Instead of evaluating `vand {c, c}, {x, y}`
  // we would probably want to only evaluate the vector {x, y}
  // while leaving `c` as the pre-condition.
  virtual const ControlCondition *preCondition() const;
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
  virtual ~ConditionPack() {}
};

class SIMDPack : public Pack {
  SIMDPack(llvm::ArrayRef<llvm::Instruction *> Insts) : Pack(Insts, PK_SIMD) {}

public:
  static SIMDPack *tryPack(llvm::ArrayRef<llvm::Instruction *> Insts);
  llvm::Value *emit(llvm::ArrayRef<llvm::Value *>, Inserter &) const override;
  static bool classof(const Pack *P) { return P->getKind() == PK_SIMD; }
  Pack *clone() const override { return new SIMDPack(Insts); }
};

// A pack of math intrinsic
class IntrinsicPack : public Pack {
  IntrinsicPack(llvm::ArrayRef<llvm::Instruction *> Insts)
      : Pack(Insts, PK_Intrinsic) {}

public:
  static IntrinsicPack *tryPack(llvm::ArrayRef<llvm::Instruction *> Insts);
  llvm::Value *emit(llvm::ArrayRef<llvm::Value *>, Inserter &) const override;
  static bool classof(const Pack *P) { return P->getKind() == PK_Intrinsic; }
  Pack *clone() const override { return new IntrinsicPack(Insts); }
  llvm::SmallVector<OperandPack, 2> getOperands() const override;
};

class LoadPack : public Pack {
  PredicatedSSA &PSSA;
  bool IsDereferenceable;
  LoadPack(llvm::ArrayRef<llvm::Instruction *> Insts, PredicatedSSA &PSSA,
           bool IsDereferenceable)
      : Pack(Insts, PK_Load), PSSA(PSSA), IsDereferenceable(IsDereferenceable) {
  }

public:
  static LoadPack *tryPack(llvm::ArrayRef<llvm::Instruction *> Insts,
                           const llvm::DataLayout &, llvm::ScalarEvolution &,
                           llvm::DominatorTree &, llvm::LoopInfo &,
                           PredicatedSSA &);
  llvm::SmallVector<OperandPack, 2> getOperands() const override { return {}; }
  llvm::SmallVector<VectorMask, 2> masks() const override;
  llvm::Value *emit(llvm::ArrayRef<llvm::Value *>, Inserter &) const override;
  static bool classof(const Pack *P) { return P->getKind() == PK_Load; }
  Pack *clone() const override {
    return new LoadPack(Insts, PSSA, IsDereferenceable);
  }
};

class SplatPack : public Pack {
  SplatPack(llvm::ArrayRef<llvm::Instruction *> Insts)
      : Pack(Insts, PK_Splat) {}

public:
  // Only create a splat pack if you can prove all the instructions in `Insts`
  // are load and return the same values.
  // Note: loads return the same values if they are independent
  static SplatPack *tryPack(llvm::ArrayRef<llvm::Instruction *> Insts,
                            llvm::ScalarEvolution &SE, llvm::LoopInfo &,
                            const llvm::DataLayout &);
  llvm::SmallVector<OperandPack, 2> getOperands() const override { return {}; }
  llvm::Value *emit(llvm::ArrayRef<llvm::Value *>, Inserter &) const override;
  static bool classof(const Pack *P) { return P->getKind() == PK_Splat; }
  Pack *clone() const override { return new SplatPack(Insts); }
};

class StorePack : public Pack {
  PredicatedSSA &PSSA;
  StorePack(llvm::ArrayRef<llvm::Instruction *> Insts, PredicatedSSA &PSSA)
      : Pack(Insts, PK_Store), PSSA(PSSA) {}

public:
  llvm::SmallVector<VectorMask, 2> masks() const override;
  static StorePack *tryPack(llvm::ArrayRef<llvm::Instruction *> Insts,
                            const llvm::DataLayout &, llvm::ScalarEvolution &,
                            llvm::LoopInfo &, PredicatedSSA &);
  llvm::SmallVector<OperandPack, 2> getOperands() const override;
  llvm::Value *emit(llvm::ArrayRef<llvm::Value *>, Inserter &) const override;
  static bool classof(const Pack *P) { return P->getKind() == PK_Store; }
  Pack *clone() const override { return new StorePack(Insts, PSSA); }
};

class GatherPack : public Pack {
  PredicatedSSA &PSSA;
  GatherPack(llvm::ArrayRef<llvm::Instruction *> Insts, PredicatedSSA &PSSA)
      : Pack(Insts, PK_Gather), PSSA(PSSA) {}

public:
  llvm::SmallVector<VectorMask, 2> masks() const override;
  static GatherPack *tryPack(llvm::ArrayRef<llvm::Instruction *> Insts,
                             PredicatedSSA &);
  llvm::Value *emit(llvm::ArrayRef<llvm::Value *>, Inserter &) const override;
  static bool classof(const Pack *P) { return P->getKind() == PK_Store; }
  Pack *clone() const override { return new GatherPack(Insts, PSSA); }
  // FIXME: query TTI
  llvm::InstructionCost getCost() const override { return 10; }
};

// A pack of *convergent* phi
class PHIPack : public Pack {
  PHIPack(llvm::ArrayRef<llvm::Instruction *> Insts) : Pack(Insts, PK_PHI) {}

public:
  static PHIPack *tryPack(llvm::ArrayRef<llvm::Instruction *> Insts,
                          PredicatedSSA &PSSA,
                          LooseInstructionTable *LIT = nullptr);
  // Only use this if you are sue that
  // the instructions are convergent gated-phis and packable
  static PHIPack *create(llvm::ArrayRef<llvm::Instruction *> Insts) {
    return new PHIPack(Insts);
  }
  llvm::SmallVector<OperandPack, 2> getOperands() const override;
  // No generic ::emit for PHIPack
  static bool classof(const Pack *P) { return P->getKind() == PK_PHI; }
  Pack *clone() const override { return new PHIPack(Insts); }
  llvm::InstructionCost getCost() const override { return 0; }
};

// A pack of *divergent * phi
class BlendPack : public Pack {
  bool IsOneHot;
  PredicatedSSA &PSSA;
  LooseInstructionTable *LIT;
  BlendPack(llvm::ArrayRef<llvm::Instruction *> Insts, bool IsOneHot,
            PredicatedSSA &PSSA, LooseInstructionTable *LIT)
      : Pack(Insts, PK_Blend), IsOneHot(IsOneHot), PSSA(PSSA), LIT(LIT) {}

public:
  static BlendPack *tryPack(llvm::ArrayRef<llvm::Instruction *> Insts,
                            PredicatedSSA &PSSA,
                            LooseInstructionTable *LIT = nullptr);
  // Only use this if you are sue that
  // the instructions are gated-phis and packable
  static BlendPack *create(llvm::ArrayRef<llvm::Instruction *> Insts,
                           bool IsOneHot, PredicatedSSA &PSSA,
                           LooseInstructionTable *LIT = nullptr) {
    return new BlendPack(Insts, IsOneHot, PSSA, LIT);
  }
  llvm::SmallVector<VectorMask, 2> masks() const override;
  llvm::Value *emit(llvm::ArrayRef<llvm::Value *>, Inserter &) const override;
  static bool classof(const Pack *P) { return P->getKind() == PK_Blend; }
  Pack *clone() const override {
    return new BlendPack(Insts, IsOneHot, PSSA, LIT);
  }
};

// A pack of mu (header phi)
class MuPack : public Pack {
  MuPack(llvm::ArrayRef<llvm::Instruction *> Insts) : Pack(Insts, PK_Mu) {}

public:
  // Only use this if you are sure the instructions are indeed mus
  static MuPack *create(llvm::ArrayRef<llvm::Instruction *> Mus) {
    return new MuPack(Mus);
  }
  static MuPack *tryPack(llvm::ArrayRef<llvm::Instruction *> Insts,
                         PredicatedSSA &PSSA,
                         LooseInstructionTable *LIT = nullptr);
  // No generic ::emit for MuPack
  static bool classof(const Pack *P) { return P->getKind() == PK_Mu; }
  Pack *clone() const override { return new MuPack(Insts); }
  llvm::InstructionCost getCost() const override { return 0; }
};

// A pack of GEPs
class GEPPack : public Pack {
  GEPPack(llvm::ArrayRef<llvm::Instruction *> Insts) : Pack(Insts, PK_GEP) {}

public:
  static GEPPack *tryPack(llvm::ArrayRef<llvm::Instruction *> Insts);
  llvm::Value *emit(llvm::ArrayRef<llvm::Value *>, Inserter &) const override;
  llvm::SmallVector<OperandPack, 2> getOperands() const override;
  static bool classof(const Pack *P) { return P->getKind() == PK_GEP; }
  Pack *clone() const override { return new GEPPack(Insts); }
};

class OrPack : public ConditionPack {
  OrPack(llvm::ArrayRef<const ControlCondition *> Conds)
      : ConditionPack(Conds, CPK_Or) {}

public:
  static OrPack *tryPack(llvm::ArrayRef<const ControlCondition *>);
  llvm::SmallVector<VectorMask, 2> getOperandMasks() const override;
  llvm::SmallVector<OperandPack, 2> getOperands() const override { return {}; }
  llvm::Value *emit(llvm::ArrayRef<llvm::Value *>,
                    llvm::ArrayRef<llvm::Value *>, Inserter &) const override;
};

class AndPack : public ConditionPack {
  AndPack(llvm::ArrayRef<const ControlCondition *> Conds)
      : ConditionPack(Conds, CPK_And) {}

public:
  static AndPack *tryPack(llvm::ArrayRef<const ControlCondition *>);
  llvm::SmallVector<VectorMask, 2> getOperandMasks() const override;
  llvm::SmallVector<OperandPack, 2> getOperands() const override;
  llvm::Value *emit(llvm::ArrayRef<llvm::Value *>,
                    llvm::ArrayRef<llvm::Value *>, Inserter &) const override;
};

class VLoop;
class ReductionPack : public Pack {
  // We will implement this reducer by horizontally adding up all of its
  // operands; With the last N done with vector reduction
  llvm::Reducer *Root;
  unsigned N;
  unsigned VecLen; // <= N and power of two
  // We don't need to know which loop we are reducing over for code generation,
  // recording the loop here for the purpose of
  // over-unrolling the loop to expose more ILP
  VLoop *VL;

public:
  ReductionPack(llvm::Reducer *Root, unsigned N, unsigned VecLen, VLoop *VL);
  llvm::SmallVector<OperandPack, 2> getOperands() const override;
  llvm::Value *emit(llvm::ArrayRef<llvm::Value *>, Inserter &) const override;
  void print(llvm::raw_ostream &OS) const override;
  static bool classof(const Pack *P) { return P->getKind() == PK_Reduction; }
  llvm::SmallVector<llvm::Use *, 2> getScalarUses() const override;
  Pack *clone() const override;
  VLoop *getLoop() const { return VL; }
};

struct Match;
class Matcher;
class InstructionDescriptor;
class GeneralPack : public Pack {
  const InstructionDescriptor &InstDesc;
  llvm::SmallVector<Match *, 4> Matches;
  GeneralPack(const InstructionDescriptor &InstDesc,
              llvm::ArrayRef<llvm::Instruction *> Insts,
              llvm::ArrayRef<Match *> Matches)
      : Pack(Insts, PK_General), InstDesc(InstDesc),
        Matches(Matches.begin(), Matches.end()) {}

public:
  // Try to pack `Insts` with a specific instruction
  static GeneralPack *tryPack(const InstructionDescriptor &InstDesc,
                              llvm::ArrayRef<llvm::Instruction *> Insts,
                              Matcher &TheMatcher);
  llvm::SmallVector<OperandPack, 2> getOperands() const override;
  llvm::Value *emit(llvm::ArrayRef<llvm::Value *>, Inserter &) const override;
  static bool classof(const Pack *P) { return P->getKind() == PK_General; }
  void getLooseInsts(llvm::SmallVectorImpl<llvm::Instruction *> &,
                     LooseInstructionTable &) const override;
  Pack *clone() const override {
    return new GeneralPack(InstDesc, values(), Matches);
  }
  void print(llvm::raw_ostream &) const override;
  void
  getKilledInsts(llvm::SmallVectorImpl<llvm::Instruction *> &) const override;
};

llvm::raw_ostream &operator<<(llvm::raw_ostream &OS, const Pack &);
llvm::raw_ostream &operator<<(llvm::raw_ostream &OS, const OperandPack &);

#endif
