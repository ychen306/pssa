#ifndef VEGEN_DEPENDENCECHECKER_H
#define VEGEN_DEPENDENCECHECKER_H

#include "pssa/PSSA.h"
#include "pssa/VectorHashInfo.h"
#include "llvm/ADT/ArrayRef.h"
#include "llvm/ADT/SmallVector.h"
#include "llvm/Analysis/AliasAnalysis.h"
#include "llvm/Analysis/ScalarEvolutionExpressions.h"
#include <list>
#include <map>

namespace llvm {
class DependenceInfo;
class Instruction;
class ScalarEvolution;
class LoopInfo;
class SCEV;
class Loop;
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
  static DepNode getEmptyKey() {
    uintptr_t Val = static_cast<uintptr_t>(-1);
    return DepNode(reinterpret_cast<Instruction *>(Val << 12));
  }
  static DepNode getTombstoneKey() {
    uintptr_t Val = static_cast<uintptr_t>(-2);
    return DepNode(reinterpret_cast<Instruction *>(Val << 12));
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
  llvm::Loop *OrigParentLoop;
  llvm::Instruction *Access; // an memory access within this range

  static MemRange get(llvm::Instruction *I, llvm::ScalarEvolution &,
                      PredicatedSSA &PSSA, llvm::LoopInfo &);
  static MemRange get(const llvm::DataLayout &, llvm::Instruction *I,
                      llvm::Type *Ty, VLoop *ParentLoop, llvm::Loop *L,
                      llvm::ScalarEvolution &);
  static llvm::Optional<MemRange> merge(const MemRange &, const MemRange &,
                                        llvm::ScalarEvolution &,
                                        PredicatedSSA &);
  // Get a range to that over-approximate the memory accessed over all the loop
  // iterations
  llvm::Optional<MemRange> promote(llvm::ScalarEvolution &, PredicatedSSA &);
  bool operator==(const MemRange &Other) const {
    return Base == Other.Base && Size == Other.Size &&
           ParentLoop == Other.ParentLoop;
  }
  bool operator!=(const MemRange &Other) const { return !((*this) == Other); }
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
  static DepCondition ifOverlapping(const MemRange &R1, const MemRange &R2,
                                    llvm::ScalarEvolution &, PredicatedSSA &);
  static DepCondition always() { return DepCondition(); }
  static DepCondition ifTrue(const ControlCondition *C) {
    return DepCondition(C);
  }
  // Try to create a condition that implies both Cond1 and Cond2
  // `Swapped` is set to true of Cond2's ranges are swapped to enable coalescing
  static llvm::Optional<DepCondition> coalesce(const DepCondition &Cond1,
                                               const DepCondition &Cond2,
                                               llvm::ScalarEvolution &,
                                               PredicatedSSA &, bool &Swapped);
  bool operator==(const DepCondition &Other) const {
    return Overlap == Other.Overlap && C == Other.C;
  }
  bool operator!=(const DepCondition &Other) const { return !(*this == Other); }
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
  bool isLoopInvariant(VLoop *) const;
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
public:
  using ValueSet = llvm::DenseSet<llvm::Value *>;

private:
  llvm::ScalarEvolution &SE;
  PredicatedSSA &PSSA;
  std::list<ConditionSet> CondSets;
  std::vector<DepCondition> Worklist;
  llvm::DenseMap<DepCondition, ConditionSet *> CondToSetMap;
  // Mapping a redundant check to a leader
  llvm::DenseMap<DepCondition, DepCondition> RedundantConds;
  // Mapping <a coalesced condition> -> sets of object the condition is
  // responsible for disambiguating
  llvm::DenseMap<DepCondition, std::pair<ValueSet, ValueSet>> MergedObjects;
  ConditionSet *newSet(const DepCondition &DepCond) {
    return &*CondSets.emplace(CondSets.end(), DepCond);
  }

  void addImpl(const DepCondition &);

  std::vector<DepCondition>
  dedupConditions(llvm::ArrayRef<DepCondition> DepConds);
  // Assuming we've coalesced two overlapping checks,
  // merge their corresponding objects
  void mergeObjectsFromConditions(const DepCondition &LeaderCond,
                                  const DepCondition &MergedCond, bool Swapped);

public:
  ConditionSetTracker(llvm::ScalarEvolution &SE, PredicatedSSA &PSSA)
      : SE(SE), PSSA(PSSA) {}
  void add(const DepCondition &DepCond) { Worklist.push_back(DepCond); }
  // If `DepCond` is coalesced with some other condition(s), return the
  // coalesced condition
  const DepCondition &getCoalescedCondition(const DepCondition &DepCond);
  // Pointers A and B are involved in a condition that's coalesced with some
  // other condition(s), return the set of objects now merged with A and those
  // merged with B.
  std::pair<ValueSet *, ValueSet *> getMergedObjects(llvm::Value *A,
                                                     llvm::Value *B);
};

class CachingAA {
  llvm::AAResults &AA;
  using AAQuery = std::pair<llvm::MemoryLocation, llvm::MemoryLocation>;
  llvm::DenseMap<AAQuery, llvm::AliasResult> Cache;

public:
  CachingAA(llvm::AAResults &AA) : AA(AA) {}
  llvm::AliasResult alias(const llvm::MemoryLocation &LocA,
                          const llvm::MemoryLocation &LocB) {
    auto [It, Inserted] =
        Cache.try_emplace({LocA.getWithoutAATags(), LocB.getWithoutAATags()},
                          llvm::AliasResult::NoAlias);
    if (!Inserted)
      return It->second;
    return It->second = AA.alias(LocA, LocB);
  }
};

class DependenceChecker {
  struct LoopSummary {
    llvm::SmallVector<llvm::Instruction *, 8> LiveIns, MemoryInsts;
  };

  PredicatedSSA &PSSA;
  llvm::DependenceInfo &DI;
  CachingAA &AA;
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

  llvm::DenseMap<std::pair<llvm::Instruction *, llvm::Instruction *>,
                 llvm::Optional<DepCondition>>
      DepKinds;

  llvm::Optional<DepCondition> getDepKindImpl(llvm::Instruction *,
                                              llvm::Instruction *);
  llvm::Optional<DepCondition> getDepKind(llvm::Instruction *,
                                          llvm::Instruction *);

  // If I is versioned return the original instruction, otherwise return I
  llvm::Instruction *getOriginal(llvm::Instruction *I) const;

public:
  // DeadInsts is an optional set of instructions known to be dead
  DependenceChecker(PredicatedSSA &PSSA, llvm::DependenceInfo &DI,
                    CachingAA &AA, llvm::LoopInfo &LI,
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
  llvm::ScalarEvolution &getSE() { return SE; }
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
  const llvm::DenseSet<DepEdge> *DepsToIgnore;

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
      llvm::DenseMap<DepEdge, llvm::DenseSet<DepEdge>> *InterLoopDeps = nullptr,
      const llvm::DenseSet<DepEdge> *DepsToIgnore = nullptr)
      : Deps(Deps), FoundCycle(false), Earliest(Earliest), VL(VL),
        PSSA(VL->getPSSA()), DepChecker(DepChecker), Packs(Packs),
        InterLoopDeps(InterLoopDeps), DepsToIgnore(DepsToIgnore) {
    auto *PN = llvm::dyn_cast_or_null<llvm::PHINode>(Earliest.asInstruction());
    if (PN && VL->isMu(PN))
      this->Earliest = *VL->item_begin();
  }

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

// Utility to find the dependencies of a scev
struct SCEVDepFinder : llvm::SCEVRewriteVisitor<SCEVDepFinder> {
  PredicatedSSA &PSSA;
  VLoop *VL;
  llvm::SmallVectorImpl<DepNode> &Deps;

  SCEVDepFinder(llvm::ScalarEvolution &SE, VLoop *VL,
                llvm::SmallVectorImpl<DepNode> &Deps)
      : SCEVRewriteVisitor<SCEVDepFinder>(SE), PSSA(*VL->getPSSA()), VL(VL),
        Deps(Deps) {}

  const llvm::SCEV *visitAddRecExpr(const llvm::SCEVAddRecExpr *S) {
    auto *VL2 = PSSA.getVLoop(const_cast<llvm::Loop *>(S->getLoop()));
    if (VL2 != VL) {
      assert(VL->contains(VL2) || VL2->contains(VL));
      if (VL->contains(VL2))
        Deps.push_back(Item(VL2));
    }
    return S;
  }

  const llvm::SCEV *visitUnknown(const llvm::SCEVUnknown *S) {
    using namespace llvm;
    auto *I = dyn_cast<Instruction>(S->getValue());
    if (I && VL->contains(I))
      Deps.push_back(I);
    return S;
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
  // Edges that are implied to be cut (so we don't have to speculate)
  llvm::DenseSet<DepEdge> ImpliedCutEdges;
  VLoop *ParentLoop;
  std::unique_ptr<Versioning> Secondary;
  Versioning *Primary = nullptr;

  Versioning(const Versioning &);
  Versioning() = default;
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
                VLoop *VL, DependenceChecker &DepChecker, const PackSet *Packs);

struct ItemVectorHashInfo {
  static std::vector<Item> getEmptyKey() {
    return {ItemHashInfo::getEmptyKey()};
  }
  static std::vector<Item> getTombstoneKey() {
    return {ItemHashInfo::getTombstoneKey()};
  }
  static unsigned getHashValue(llvm::ArrayRef<Item> V) {
    auto H = ItemHashInfo::getHashValue(V.front());
    for (auto &X : V)
      H = llvm::hash_combine(H, ItemHashInfo::getHashValue(X));
    return H;
  }
  static bool isEqual(llvm::ArrayRef<Item> LHS, llvm::ArrayRef<Item> RHS) {
    return LHS.equals(RHS);
  }
};

// utility to keep track of list of items that we've ensured are independent
class IndependentItemsTracker {
  using ItemVector = std::vector<Item>;
  llvm::DenseSet<ItemVector, ItemVectorHashInfo> Checked;

public:
  void add(llvm::ArrayRef<Item> Items);
  bool contains(llvm::ArrayRef<Item> Items);
};

// Find conditional dependences that, once removed, will `Insts` independent
// from one another. (and false if no such set of deps exists).
bool findNecessaryDeps(VersioningPlan &VerPlan,
                       llvm::ArrayRef<llvm::Instruction *> Insts,
                       PredicatedSSA &PSSA, DependenceChecker &DepChecker,
                       const PackSet *Packs = nullptr,
                       IndependentItemsTracker *IndependentItems = nullptr);

#endif // VEGEN_DEPENDENCECHECKER_H
