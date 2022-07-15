#ifndef CONTROL_DEPENDENCE_H
#define CONTROL_DEPENDENCE_H

#include "llvm/ADT/DenseMap.h"
#include "llvm/ADT/EquivalenceClasses.h"
#include "llvm/ADT/SmallPtrSet.h"
#include "llvm/ADT/SmallVector.h"
#include "llvm/ADT/ArrayRef.h"

#include <map>

namespace llvm {
class Value;
class BasicBlock;
class PostDominatorTree;
class LoopInfo;
class DominatorTree;
class raw_ostream;
class BranchInst;
class Loop;
} // namespace llvm

class ControlCondition {
public:
  enum ConditionKind { Kind_ConditionAnd, Kind_ConditionOr };

private:
  const ConditionKind Kind;
  const unsigned Depth;

public:
  ControlCondition(ConditionKind K, unsigned Depth) : Kind(K), Depth(Depth) {}
  ConditionKind getKind() const { return Kind; }
  unsigned depth() const { return Depth; }
  static unsigned getDepth(const ControlCondition *C) {
    return C ? C->depth() : 0;
  }
};

struct ConditionAnd : public ControlCondition {
  const ControlCondition *Parent, *Complement;
  llvm::Value *Cond;
  bool IsTrue;

  static bool classof(const ControlCondition *C) {
    return C->getKind() == Kind_ConditionAnd;
  }

private:
  friend class ConditionTable;
  ConditionAnd(const ControlCondition *Parent, llvm::Value *Cond, bool IsTrue)
      : ControlCondition(Kind_ConditionAnd, getDepth(Parent) + 1),
        Parent(Parent), Cond(Cond), IsTrue(IsTrue) {}
};

struct ConditionOr : public ControlCondition {
  llvm::SmallVector<const ControlCondition *> Conds;
  const ControlCondition *GreatestCommonCond;

  static bool classof(const ControlCondition *C) {
    return C->getKind() == Kind_ConditionOr;
  }

private:
  friend class ConditionTable;
  ConditionOr(llvm::ArrayRef<const ControlCondition *> Conds);
};

struct BinaryInstruction {
  unsigned Opcode, Extra;
  llvm::Value *A, *B;
};

namespace llvm {
template <> struct DenseMapInfo<BinaryInstruction> {
  static inline BinaryInstruction getEmptyKey() {
    return {0, 0, nullptr, nullptr};
  }
  static inline BinaryInstruction getTombstoneKey() {
    return {1, 0, nullptr, nullptr};
  }
  static inline unsigned getHashValue(const BinaryInstruction &Inst) {
    using namespace llvm;
    return hash_combine(Inst.Opcode, hash_value(Inst.A), hash_value(Inst.B));
  }
  static bool isEqual(const BinaryInstruction &Inst1,
                      const BinaryInstruction &Inst2) {
    return std::tie(Inst1.Opcode, Inst1.Extra, Inst1.A, Inst1.B) ==
           std::tie(Inst2.Opcode, Inst2.Extra, Inst2.A, Inst2.B);
  }
};
} // namespace llvm


class ConditionTable {
  llvm::EquivalenceClasses<const ControlCondition *> EquivalentConds;
  llvm::DenseMap<std::pair<const ControlCondition *, const ControlCondition *>,
                 const ControlCondition *>
      ConcatCache;

  using OrKeyT = llvm::ArrayRef<const ControlCondition *>;
  llvm::DenseMap<OrKeyT, std::unique_ptr<ConditionOr>> UniqueOrs;
  using AndKeyT = std::pair<const ControlCondition *, llvm::Value *>;
  llvm::DenseMap<AndKeyT, std::unique_ptr<ConditionAnd>> UniqueAndOfTrue;
  llvm::DenseMap<AndKeyT, std::unique_ptr<ConditionAnd>> UniqueAndOfFalse;

  llvm::DenseMap<BinaryInstruction, llvm::Value *> CanonicalInsts;
  llvm::DenseMap<llvm::Value *, llvm::Value *> CanonicalValues;
  const ControlCondition *getCanonicalCondition(const ControlCondition *);
public:
  llvm::Value *getCanonicalValue(llvm::Value *);
  const ControlCondition *getAnd(const ControlCondition *, llvm::Value *, bool);
  const ControlCondition *getOr(llvm::ArrayRef<const ControlCondition *>);
  const ControlCondition *concat(const ControlCondition *,
                                 const ControlCondition *);
  bool isEquivalent(const ControlCondition *C1,
                    const ControlCondition *C2) const {
    return EquivalentConds.isEquivalent(C1, C2);
  }
};

// FIXME: refactor out the condition management stuff
class ControlDependenceAnalysis {
  llvm::LoopInfo &LI;
  llvm::DominatorTree &DT;
  llvm::PostDominatorTree &PDT;

  llvm::DenseMap<llvm::BasicBlock *, const ControlCondition *> BlockConditions;

  // use std::map to avoid reallocation/iterator stability
  std::map<llvm::BasicBlock *, llvm::SmallPtrSet<llvm::BasicBlock *, 4>>
      ControlDependentBlocks;

  const llvm::SmallPtrSetImpl<llvm::BasicBlock *> &
  getControlDependentBlocks(llvm::BasicBlock *);

  const ControlCondition *getConditionForBranch(llvm::BranchInst *, bool Taken,
                                                llvm::Loop *CtxL);

  ConditionTable &CT;

public:
  ControlDependenceAnalysis(llvm::LoopInfo &LI, llvm::DominatorTree &DT,
                            llvm::PostDominatorTree &PDT, ConditionTable &CT);
  const ControlCondition *getConditionForBlock(llvm::BasicBlock *);
  const ControlCondition *getConditionForEdge(llvm::BasicBlock *,
                                              llvm::BasicBlock *);
};

llvm::raw_ostream &operator<<(llvm::raw_ostream &, const ControlCondition &);
const ControlCondition *getGreatestCommonCondition(const ControlCondition *,
                                                   const ControlCondition *);
const ControlCondition *
    getGreatestCommonCondition(llvm::ArrayRef<const ControlCondition *>);

// Check if C1 is implied by C2
static inline bool isImplied(const ControlCondition *C1,
                             const ControlCondition *C2) {
  return C1 == C2 || getGreatestCommonCondition({C1, C2}) == C1;
}

// Give a lexicographic order to control conditions
bool compareConditions(const ControlCondition *, const ControlCondition *);

#endif // CONTROL_DEPENDENCE_H
