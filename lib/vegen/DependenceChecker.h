#ifndef VEGEN_DEPENDENCECHECKER_H
#define VEGEN_DEPENDENCECHECKER_H

#include "pssa/PSSA.h"
#include "llvm/ADT/ArrayRef.h"
#include "llvm/ADT/SmallVector.h"
#include <map>

namespace llvm {
class DependenceInfo;
class Instruction;
class AAResults;
class ScalarEvolution;
class LoopInfo;
class SCEV;
} // namespace llvm

class PackSet;

bool mayReadOrWriteMemory(llvm::Instruction *I);
bool mayReadOrWriteMemory(const Item &It);

class DepNode {
  llvm::PointerUnion<llvm::Instruction *, VLoop *, const ControlCondition *>
      Storage;

public:
  DepNode() = default;
  DepNode(const ControlCondition *C) : Storage(C) {}
  DepNode(Item It) {
    if (auto *I = It.asInstruction())
      Storage = I;
    else
      Storage = It.asLoop();
  }
  DepNode(llvm::Instruction *I) : Storage(I) {}
  void *getPointer() const { return Storage.getOpaqueValue(); }
  bool operator==(const DepNode &Other) const {
    return getPointer() == Other.getPointer();
  }
  llvm::Instruction *asInstruction() const {
    return Storage.dyn_cast<llvm::Instruction *>();
  }
  VLoop *asLoop() const { return Storage.dyn_cast<VLoop *>(); }
  const ControlCondition *asCond() const {
    return Storage.dyn_cast<const ControlCondition *>();
  }
};

llvm::raw_ostream &operator<<(llvm::raw_ostream &OS, const DepNode &N);

template <> struct llvm::DenseMapInfo<DepNode> {
  static DepNode getEmptyKey() { return DepNode(); }
  static DepNode getTombstoneKey() {
    return DepNode(llvm::DenseMapInfo<Instruction *>::getTombstoneKey());
  }
  static unsigned getHashValue(DepNode N) {
    return llvm::hash_value(N.getPointer());
  }
  static bool isEqual(DepNode N1, DepNode N2) { return N1 == N2; }
};

// First depends on second
using DepEdge = std::pair<DepNode, DepNode>;

struct MemRange {
  const llvm::SCEV *Base;
  const llvm::SCEV *Size;
  VLoop *ParentLoop;

  static MemRange get(llvm::Instruction *I, llvm::ScalarEvolution &,
                      PredicatedSSA &PSSA);
  static MemRange get(const llvm::DataLayout &, llvm::Value *Ptr,
                      llvm::Type *Ty, VLoop *ParentLoop,
                      llvm::ScalarEvolution &);
  static llvm::Optional<MemRange> merge(const MemRange &, const MemRange &,
                                        llvm::ScalarEvolution &,
                                        PredicatedSSA &);
  // Get a range to that over-approximate the memory accessed over all the loop
  // iterations
  llvm::Optional<MemRange> promote(llvm::ScalarEvolution &, PredicatedSSA &);
  bool operator==(const MemRange &Other) const {
    return Base == Other.Base && Size == Other.Size;
  }
};
llvm::raw_ostream &operator<<(llvm::raw_ostream &, const MemRange &);

class DepCondition {
  llvm::Optional<std::pair<MemRange, MemRange>> Disjoint;
  const ControlCondition *C;
  DepCondition(const MemRange &R1, const MemRange &R2)
      : Disjoint(std::make_pair(R1, R2)), C(nullptr) {}
  DepCondition(const ControlCondition *C) : C(C) {}

public:
  static DepCondition ifDisjoint(const MemRange &R1, const MemRange &R2) {
    return DepCondition(R1, R2);
  }
  static DepCondition always() { return DepCondition(nullptr /*true*/); }
  // Try to create a condition that implies both Cond1 and Cond2
  static llvm::Optional<DepCondition> coalesce(const DepCondition &Cond1,
                                               const DepCondition &Cond2,
                                               llvm::ScalarEvolution &,
                                               PredicatedSSA &);
  bool operator==(const DepCondition &Other) const {
    return Disjoint == Other.Disjoint && C == Other.C;
  }
  bool isDisjoint() const { return Disjoint.hasValue(); }
  const ControlCondition *getCondition() const { return C; }
  std::pair<MemRange, MemRange> getRanges() const {
    assert(isDisjoint());
    return *Disjoint;
  }
  bool isUnconditional() const { return !isDisjoint() && !C; }
  bool isConditional() const { return !isUnconditional(); }
};

class DepKind {
  llvm::SmallVector<DepCondition> Conds;

public:
  DepKind() {}
  DepKind(const DepCondition &Cond) : Conds({Cond}) {}
  DepKind(llvm::ArrayRef<DepCondition> Conds)
      : Conds(Conds.begin(), Conds.end()) {}
  bool isUnconditional() const {
    return Conds.size() == 1 && Conds.front().isUnconditional();
  }
  bool isConditional() const { return !isUnconditional(); }

  operator bool() const { return !Conds.empty(); }
  llvm::ArrayRef<DepCondition> getConds() const { return Conds; }
};

class DependenceChecker {
  struct LoopSummary {
    llvm::SmallVector<llvm::Instruction *, 8> LiveIns, MemoryInsts;
  };

  PredicatedSSA &PSSA;
  llvm::DependenceInfo &DI;
  llvm::AAResults &AA;
  llvm::LoopInfo &LI;
  llvm::ScalarEvolution &SE;

  const llvm::DenseSet<llvm::Instruction *> *DeadInsts;

  bool isLive(llvm::Instruction *I) const {
    bool IsDead = DeadInsts && DeadInsts->count(I);
    return !IsDead;
  }

  // use std::map to avoid reacllocation
  std::map<VLoop *, LoopSummary> Summaries;

  void processLoop(VLoop *VL);
  llvm::ArrayRef<llvm::Instruction *> getMemoryInsts(VLoop *);

  llvm::Optional<DepCondition> getDepKind(llvm::Instruction *,
                                          llvm::Instruction *);

public:
  // DeadInsts is an optional set of instructions known to be dead
  DependenceChecker(PredicatedSSA &PSSA, llvm::DependenceInfo &DI,
                    llvm::AAResults &AA, llvm::LoopInfo &LI,
                    llvm::ScalarEvolution &SE,
                    llvm::DenseSet<llvm::Instruction *> *DeadInsts = nullptr)
      : PSSA(PSSA), DI(DI), AA(AA), LI(LI), SE(SE), DeadInsts(DeadInsts) {}

  void invalidate(VLoop *VL) { Summaries.erase(VL); }

  // Check if there's any *memory dependence* from It1 to It2 (assuming It1
  // comes before It2), assuming It1 and It2 have the same parent.
  bool depends(const Item &It1, const Item &It2,
               llvm::DenseMap<DepEdge, DepKind> *DepEdges = nullptr);

  llvm::ArrayRef<llvm::Instruction *> getLiveIns(VLoop *VL);
};

class DependencesFinder {
  llvm::SmallVectorImpl<Item> &Deps;
  llvm::DenseMap<DepEdge, DepKind> DepEdges;
  bool FoundCycle;
  Item Earliest;
  VLoop *VL;
  PredicatedSSA *PSSA;
  DependenceChecker &DepChecker;
  const PackSet *Packs;
  llvm::DenseSet<Item, ItemHashInfo> Visited, Processing;
  llvm::DenseSet<const ControlCondition *> VisitedConds;
  void visit(Item, bool AddDep, const DepNode &Src);
  void visitCond(const ControlCondition *, const DepNode &Src);
  void visitValue(llvm::Value *V, const DepNode &Src);

public:
  // Pass in a pack set `Packs` if you want
  // the deps of some instructions' to be checked together
  DependencesFinder(llvm::SmallVectorImpl<Item> &Deps, Item Earliest, VLoop *VL,
                    DependenceChecker &DepChecker,
                    const PackSet *Packs = nullptr)
      : Deps(Deps), FoundCycle(false), Earliest(Earliest), VL(VL),
        PSSA(VL->getPSSA()), DepChecker(DepChecker), Packs(Packs) {}

  // Find all dependencies of `It` that occurs *after* `Earliest`.
  // Return if there are dependence cycles
  bool findDep(Item It) {
    visit(It, false /*don't mark the item itself as a dep*/, It);
    return FoundCycle;
  }

  const llvm::DenseMap<DepEdge, DepKind> &getDepEdges() const {
    return DepEdges;
  }
};

// Find the dependences of Items but scan no further than the earliest Items
// Also report if there's any circular dep
bool findInBetweenDeps(llvm::SmallVectorImpl<Item> &Deps,
                       llvm::ArrayRef<Item> Items, VLoop *VL,
                       PredicatedSSA &PSSA, DependenceChecker &DepChecker,
                       const PackSet *Packs = nullptr);

// Find conditional dependences that, once removed, will make the instructions
// independent Return true if it's possible (and false if no such set of deps
// exists).
bool findNecessaryDeps(
    llvm::DenseMap<DepEdge, std::vector<DepCondition>> &DepEdges,
    llvm::ArrayRef<llvm::Instruction *> Insts, PredicatedSSA &PSSA,
    DependenceChecker &DepChecker);

#endif // VEGEN_DEPENDENCECHECKER_H
