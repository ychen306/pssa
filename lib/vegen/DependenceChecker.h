#ifndef VEGEN_DEPENDENCECHECKER_H
#define VEGEN_DEPENDENCECHECKER_H

#include "pssa/PSSA.h"
#include "llvm/ADT/ArrayRef.h"
#include "llvm/ADT/SmallVector.h"
#include <list>
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
class Versioner;

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
  // Get a total order for things like std::set
  bool operator<(const MemRange &Other) const {
    return std::tie(Base, Size, ParentLoop) <
           std::tie(Other.Base, Other.Size, Other.ParentLoop);
  }
};
llvm::raw_ostream &operator<<(llvm::raw_ostream &, const MemRange &);

// TODO: pull the dep condition stuff to a separate file
class DepCondition {
  bool IsUnconditional;
  llvm::Optional<std::pair<MemRange, MemRange>> Overlap;
  const ControlCondition *C;
  DepCondition() : IsUnconditional(true), C(nullptr) {}
  DepCondition(const MemRange &R1, const MemRange &R2)
      : IsUnconditional(false), Overlap(std::make_pair(R1, R2)), C(nullptr) {}
  DepCondition(const ControlCondition *C) : IsUnconditional(false), C(C) {}

public:
  static DepCondition ifOverlapping(const MemRange &R1, const MemRange &R2) {
    return DepCondition(R1, R2);
  }
  static DepCondition always() { return DepCondition(); }
  static DepCondition ifTrue(const ControlCondition *C) {
    return DepCondition(C);
  }
  // Try to create a condition that implies both Cond1 and Cond2
  static llvm::Optional<DepCondition> coalesce(const DepCondition &Cond1,
                                               const DepCondition &Cond2,
                                               llvm::ScalarEvolution &,
                                               PredicatedSSA &);
  bool operator==(const DepCondition &Other) const {
    return Overlap == Other.Overlap && C == Other.C;
  }
  bool operator<(const DepCondition &Other) const {
    // Order conflict checks before control conditions
    if (isOverlapping() && !Other.isOverlapping())
      return true;
    if (!isOverlapping() && Other.isOverlapping())
      return false;
    if (isOverlapping()) {
      assert(Other.isOverlapping());
      return getRanges() < Other.getRanges();
    }
    return getCondition() < Other.getCondition();
  }
  bool isOverlapping() const { return Overlap.hasValue(); }
  const ControlCondition *getCondition() const { return C; }
  std::pair<MemRange, MemRange> getRanges() const {
    assert(isOverlapping());
    return *Overlap;
  }
  bool isUnconditional() const { return IsUnconditional; }
  bool isConditional() const { return !IsUnconditional; }
};

template <> struct llvm::DenseMapInfo<DepCondition> {
  static DepCondition getEmptyKey() {
    return DepCondition::ifTrue(reinterpret_cast<const ControlCondition *>(-1));
  }
  static DepCondition getTombstoneKey() {
    return DepCondition::ifTrue(reinterpret_cast<const ControlCondition *>(-2));
  }
  static unsigned getHashValue(const DepCondition &DepCond) {
    if (DepCond.isOverlapping()) {
      auto [R1, R2] = DepCond.getRanges();
      return llvm::hash_combine(true, R1.Base, R1.Size, R1.ParentLoop, R2.Base,
                                R2.Size, R2.ParentLoop);
    }
    return llvm::hash_combine(false, DepCond.getCondition());
  }
  static bool isEqual(const DepCondition &DC1, const DepCondition &DC2) {
    return DC1 == DC2;
  }
};

class DepKind {
  llvm::SmallVector<DepCondition> Conds;

public:
  DepKind() {}
  DepKind(llvm::ArrayRef<DepCondition> Conds);
  bool isUnconditional() const {
    return Conds.size() == 1 && Conds.front().isUnconditional();
  }
  bool isConditional() const { return !isUnconditional(); }

  operator bool() const { return !Conds.empty(); }
  llvm::ArrayRef<DepCondition> getConds() const { return Conds; }
};

llvm::raw_ostream &operator<<(llvm::raw_ostream &, const DepCondition &);

struct ConditionSet {
  DepCondition DepCond; // union of all of the conditions

  ConditionSet(const DepCondition &DepCond) : DepCond(DepCond) {}
};

class ConditionSetTracker {
  llvm::ScalarEvolution &SE;
  PredicatedSSA &PSSA;
  std::list<ConditionSet> CondSets;
  llvm::DenseMap<DepCondition, ConditionSet *> CondToSetMap;
  ConditionSet *newSet(const DepCondition &DepCond) {
    return &*CondSets.emplace(CondSets.end(), DepCond);
  }

public:
  ConditionSetTracker(llvm::ScalarEvolution &SE, PredicatedSSA &PSSA)
      : SE(SE), PSSA(PSSA) {}
  void add(const DepCondition &);
  // If `DepCond` is coalesced with some other condition(s), return the
  // coalesced condition
  const DepCondition &getCoalescedCondition(const DepCondition &DepCond) const;
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
  const Versioner *TheVersioner;

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

  // If I is versioned return the original instruction, otherwise return I
  llvm::Instruction *getOriginal(llvm::Instruction *I) const;

public:
  // DeadInsts is an optional set of instructions known to be dead
  DependenceChecker(PredicatedSSA &PSSA, llvm::DependenceInfo &DI,
                    llvm::AAResults &AA, llvm::LoopInfo &LI,
                    llvm::ScalarEvolution &SE,
                    llvm::DenseSet<llvm::Instruction *> *DeadInsts = nullptr,
                    Versioner *TheVersioner = nullptr)
      : PSSA(PSSA), DI(DI), AA(AA), LI(LI), SE(SE), DeadInsts(DeadInsts),
        TheVersioner(TheVersioner) {}

  void invalidate(VLoop *VL) { Summaries.erase(VL); }

  // Check if there's any *memory dependence* from It1 to It2 (assuming It1
  // comes before It2), assuming It1 and It2 have the same parent.
  bool depends(const Item &It1, const Item &It2,
               llvm::DenseMap<DepEdge, DepKind> *DepEdges = nullptr,
               llvm::DenseMap<DepEdge, llvm::DenseSet<DepEdge>> *InterLoopDeps =
                   nullptr);

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
  llvm::DenseMap<DepEdge, llvm::DenseSet<DepEdge>> *InterLoopDeps;

  llvm::DenseSet<Item, ItemHashInfo> Visited, Processing;
  llvm::DenseSet<const ControlCondition *> VisitedConds;
  void visit(Item, bool AddDep, const DepNode &Src);
  void visitCond(const ControlCondition *, const DepNode &Src);
  void visitValue(llvm::Value *V, const DepNode &Src);

public:
  // Pass in a pack set `Packs` if you want
  // the deps of some instructions' to be checked together
  DependencesFinder(
      llvm::SmallVectorImpl<Item> &Deps, Item Earliest, VLoop *VL,
      DependenceChecker &DepChecker, const PackSet *Packs = nullptr,
      llvm::DenseMap<DepEdge, llvm::DenseSet<DepEdge>> *InterLoopDeps = nullptr)
      : Deps(Deps), FoundCycle(false), Earliest(Earliest), VL(VL),
        PSSA(VL->getPSSA()), DepChecker(DepChecker), Packs(Packs),
        InterLoopDeps(InterLoopDeps) {}

  // Find all dependencies of `It` that occurs *after* `Earliest`.
  // Return if there are dependence cycles.
  // Set AddDep to true is you want to add `It` as a dep.
  bool findDep(Item It, bool AddDep = false) {
    visit(It, AddDep, It);
    return FoundCycle;
  }

  bool findDep(const ControlCondition *C) {
    visitCond(C, C);
    return FoundCycle;
  }

  bool findDepForNode(DepNode Node) {
    if (auto *C = Node.asCond())
      return findDep(C);
    if (auto *VL = Node.asLoop())
      return findDep(VL);
    if (auto *I = Node.asInstruction())
      return findDep(I);
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

struct Versioning {
  // The nodes that we are duplicating
  std::vector<DepNode> Nodes;
  // Edges that we speculate to be non-existent
  llvm::DenseMap<DepEdge, std::vector<DepCondition>> CutEdges;
  std::unique_ptr<Versioning> Secondary;
  Versioning *Primary = nullptr;
};

// Keep track of all the versionings that we need to do
struct VersioningPlan {
  std::vector<std::unique_ptr<Versioning>> Versionings;
  llvm::DenseMap<DepEdge, llvm::DenseSet<DepEdge>> InterLoopDeps;
};

// Infer a versioning that will make `Nodes` independent from `Deps`.
std::unique_ptr<Versioning>
inferVersioning(llvm::ArrayRef<DepNode> Nodes, llvm::ArrayRef<Item> Deps,
                llvm::DenseMap<DepEdge, llvm::DenseSet<DepEdge>> &InterLoopDeps,
                VLoop *VL, DependenceChecker &DepChecker);

// Find conditional dependences that, once removed, will `Insts` independent
// from one another. (and false if no such set of deps exists).
bool findNecessaryDeps(VersioningPlan &VerPlan,
                       llvm::ArrayRef<llvm::Instruction *> Insts,
                       PredicatedSSA &PSSA, DependenceChecker &DepChecker);

#endif // VEGEN_DEPENDENCECHECKER_H
