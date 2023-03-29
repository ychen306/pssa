#ifndef PSSA_H
#define PSSA_H

#include "pssa/ControlDependence.h"
#include "utils/OrderedList.h"
#include "llvm/ADT/DenseMap.h"
#include "llvm/ADT/PointerUnion.h"
#include "llvm/ADT/SmallPtrSet.h"
#include "llvm/IR/Instructions.h"

namespace llvm {
class Loop;
class LLVMContext;
class Value;
class DominatorTree;
class ScalarEvolution;
class PostDominatorTree;
} // namespace llvm

class VLoop;
class Item {
  friend struct ItemHashInfo;
  llvm::PointerUnion<llvm::Instruction *, VLoop *> Storage;

public:
  Item(VLoop *VL) : Storage(VL) {}
  Item(llvm::Instruction *I) : Storage(I) {}
  bool isLoop() const { return Storage.is<VLoop *>(); };
  VLoop *asLoop() const { return Storage.dyn_cast<VLoop *>(); }
  llvm::Instruction *asInstruction() const {
    return Storage.dyn_cast<llvm::Instruction *>();
  }
  bool operator==(const Item &Other) const { return Storage == Other.Storage; }
  bool operator!=(const Item &Other) const { return Storage != Other.Storage; }
};

struct ItemHashInfo {
  using InstInfo = llvm::DenseMapInfo<llvm::Instruction *>;
  using Info =
      llvm::DenseMapInfo<llvm::PointerUnion<llvm::Instruction *, VLoop *>>;
  static inline Item getEmptyKey() { return Item(InstInfo::getEmptyKey()); }
  static inline Item getTombstoneKey() {
    return Item(InstInfo::getTombstoneKey());
  }
  static unsigned getHashValue(const Item &It) {
    return Info::getHashValue(It.Storage);
  }
  static bool isEqual(const Item &It1, const Item &It2) {
    return It1.Storage == It2.Storage;
  }
};

class PredicatedSSA;
class VLoop {
  friend class PredicatedSSA;
  PredicatedSSA *PSSA;
  bool IsTopLevel; // True if this VLoop doesn't represent any actual loop but
                   // the whole function

  OrderedList<Item, ItemHashInfo> Items;
  llvm::SmallPtrSet<llvm::PHINode *, 8> Mus;
  // One-hot phis are a special class of phi nodes of the form:
  //    `phi (C : v, not C v')`
  // Where `not C` is represented implicitly.
  // We canonicalize the one-hot phis so that the first operand is `v'`.
  // We maintain the invariant, `C === getPhiCondition(PN, 1)`.
  llvm::DenseSet<llvm::PHINode *> OneHotPhis;
  llvm::DenseMap<llvm::PHINode *, std::vector<const ControlCondition *>>
      PhiConds;
  llvm::DenseMap<llvm::Instruction *, const ControlCondition *> InstConds;

  // Should we execute this loop at all
  const ControlCondition *LoopCond;
  // Is the backedge taken
  const ControlCondition *BackEdgeCond;

  VLoop *Parent;

public:
  // Create a top-level "loop"
  VLoop(PredicatedSSA *PSSA)
      : PSSA(PSSA), IsTopLevel(true), LoopCond(nullptr), BackEdgeCond(nullptr),
        Parent(nullptr) {}
  VLoop(PredicatedSSA *PSSA, const ControlCondition *LoopCond,
        const ControlCondition *BackEdgeCond, VLoop *Parent = nullptr)
      : PSSA(PSSA), IsTopLevel(false), LoopCond(LoopCond),
        BackEdgeCond(BackEdgeCond), Parent(Parent) {}

  using ItemIterator = decltype(Items)::iterator;
  using ConstItemIterator = decltype(Items)::const_iterator;

  // Insert a generic, non-phi instruction
  ItemIterator insert(llvm::Instruction *, const ControlCondition *,
                      llvm::Optional<ItemIterator> InsertBefore = llvm::None);
  // Insert a gated-phi instruction
  ItemIterator insert(llvm::PHINode *, llvm::ArrayRef<const ControlCondition *>,
                      const ControlCondition *,
                      llvm::Optional<ItemIterator> InsertBefore = llvm::None);
  // Insert a one-hot phi
  ItemIterator insert(const ControlCondition *GateC, llvm::Value *IfTrue,
                      llvm::Value *IfFalse, const ControlCondition *,
                      llvm::Optional<ItemIterator> InsertBefore = llvm::None);
  // Insert a loop
  ItemIterator insert(VLoop *,
                      llvm::Optional<ItemIterator> InsertBefore = llvm::None);

  void markOneHot(llvm::PHINode *PN) {
    assert(isGatedPhi(PN));
    OneHotPhis.insert(PN);
  }

  // Get the iteartor pointing to It.
  // If It is a Mu node, return Item.begin
  ItemIterator toIterator(const Item &It);

  void erase(ItemIterator It);
  void erase(const Item &It) { Items.erase(toIterator(It)); }

  bool comesBefore(const Item &A, const Item &B) const;

  bool contains(VLoop *) const;
  bool contains(llvm::Instruction *) const;
  bool contains(const Item &It) const {
    if (auto *I = It.asInstruction())
      return contains(I);
    return contains(It.asLoop());
  }

  llvm::iterator_range<ConstItemIterator> items() const {
    return llvm::make_range(Items.begin(), Items.end());
  }
  ItemIterator item_begin() { return Items.begin(); }
  ItemIterator item_end() { return Items.end(); }

  const ControlCondition *getInstCond(llvm::Instruction *I) const;
  void setInstCond(llvm::Instruction *I, const ControlCondition *C) {
    assert(InstConds.count(I));
    InstConds[I] = C;
  }
  const ControlCondition *getLoopCond() const { return LoopCond; }
  const ControlCondition *getBackEdgeCond() const { return BackEdgeCond; }
  void setBackEdgeCond(const ControlCondition *C) { BackEdgeCond = C; }
  void setLoopCond(const ControlCondition *C) { LoopCond = C; }
  bool isLoop() const { return !IsTopLevel; }
  bool isMu(llvm::PHINode *PN) const { return PN && Mus.count(PN); }
  bool isMu(llvm::Value *V) const {
    using namespace llvm;
    auto *PN = dyn_cast<PHINode>(V);
    return PN && isMu(PN);
  }

  // Add a phi node as mu.
  // Assume the first value is the init. val and second rec.
  void addMu(llvm::PHINode *);
  // Create an mu node with the recursive val. unspecified
  llvm::PHINode *createMu(llvm::Value *InitVal);
  void eraseMu(llvm::PHINode *);

  llvm::iterator_range<decltype(Mus)::iterator> mus() {
    return llvm::make_range(Mus.begin(), Mus.end());
  }

  bool isGatedPhi(llvm::PHINode *PN) const { return PhiConds.count(PN); }

  bool isOneHotPhi(llvm::PHINode *PN) const { return OneHotPhis.count(PN); }

  // Get the incoming condition if the ith phi value
  const ControlCondition *getPhiCondition(llvm::PHINode *PN, unsigned i) {
    assert(PhiConds.count(PN));
    return PhiConds[PN][i];
  }

  llvm::ArrayRef<const ControlCondition *> getPhiConditions(llvm::PHINode *PN) {
    assert(PhiConds.count(PN));
    return PhiConds[PN];
  }

  // Set the i'th gating condition
  void setPhiCondition(llvm::PHINode *PN, unsigned i,
                       const ControlCondition *C) {
    assert(PhiConds.count(PN));
    assert(i < PhiConds[PN].size());
    PhiConds[PN][i] = C;
  }

  VLoop *getParent() const { return Parent; }
  PredicatedSSA *getPSSA() const { return PSSA; }
};

class PredicatedSSA {
  llvm::Function *F;
  ConditionTable CT;
  VLoop TopVL;
  llvm::ScalarEvolution *SE;
  llvm::DenseMap<llvm::Instruction *, VLoop *> InstToVLoopMap;
  llvm::DenseMap<Item, VLoop::ItemIterator, ItemHashInfo> ItemToIteratorMap;

  // Mapping <PSSA Loop> -> <LLVM Loop>
  // Could be invalidated as PSSA is transformed.
  llvm::DenseMap<VLoop *, llvm::Loop *> VLoopToLoopMap;

public:
  // Convert from LLVM IR
  PredicatedSSA(llvm::Function *, llvm::LoopInfo &, llvm::DominatorTree &,
                llvm::PostDominatorTree &, llvm::ScalarEvolution *SE = nullptr);

  llvm::LLVMContext &getContext() { return F->getContext(); }
  llvm::Function *getFunction() { return F; }

  struct InsertPoint {
    VLoop *VL;
    VLoop::ItemIterator It;
    void insert(llvm::Instruction *I, const ControlCondition *C);
  };

  VLoop::ItemIterator toIterator(const Item &It) {
    assert(ItemToIteratorMap.count(It));
    return ItemToIteratorMap.lookup(It);
  }

  InsertPoint getInsertPoint(llvm::Instruction *I) {
    assert(ItemToIteratorMap.count(I));
    assert(InstToVLoopMap.count(I));
    return {InstToVLoopMap.lookup(I), ItemToIteratorMap.lookup(I)};
  }
  InsertPoint getInsertPoint(VLoop *VL) {
    assert(VL->getParent());
    assert(ItemToIteratorMap.count(VL));
    return {VL->getParent(), ItemToIteratorMap.lookup(VL)};
  }
  InsertPoint getEntry() { return {&TopVL, TopVL.Items.begin()}; }

  void mapItemToLoop(VLoop::ItemIterator It, VLoop *VL) {
    if (auto *I = It->asInstruction())
      InstToVLoopMap[I] = VL;
    ItemToIteratorMap[*It] = It;
  }

  void mapMuToLoop(llvm::PHINode *PN, VLoop *VL) { InstToVLoopMap[PN] = VL; }

  bool isMu(llvm::PHINode *PN) {
    auto *VL = getLoopForInst(PN);
    return VL->isMu(PN);
  }

  VLoop *getLoopForInst(llvm::Instruction *I) const {
    assert(InstToVLoopMap.count(I));
    return InstToVLoopMap.lookup(I);
  }

  VLoop *getLoopForItem(const Item &It) const {
    if (auto *VL = It.asLoop())
      return VL->getParent();
    return getLoopForInst(It.asInstruction());
  }

  bool contains(llvm::Instruction *I) const { return InstToVLoopMap.count(I); }

  const ControlCondition *getInstCond(llvm::Instruction *I) const {
    assert(contains(I));
    return InstToVLoopMap.lookup(I)->getInstCond(I);
  }

  const ControlCondition *getPhiCondition(llvm::PHINode *PN, unsigned i) const {
    assert(contains(PN));
    return InstToVLoopMap.lookup(PN)->getPhiCondition(PN, i);
  }

  bool isGatedPhi(llvm::PHINode *PN) const {
    assert(contains(PN));
    return InstToVLoopMap.lookup(PN)->isGatedPhi(PN);
  }

  bool isOneHotPhi(llvm::PHINode *PN) const {
    assert(contains(PN));
    return InstToVLoopMap.lookup(PN)->isOneHotPhi(PN);
  }

  llvm::ArrayRef<const ControlCondition *> getPhiConditions(llvm::PHINode *PN) {
    assert(contains(PN));
    return InstToVLoopMap.lookup(PN)->getPhiConditions(PN);
  }

  bool isEquivalent(const ControlCondition *C1, const ControlCondition *C2) {
    return CT.isEquivalent(C1, C2);
  }

  VLoop &getTopLevel() { return TopVL; }

  const ControlCondition *getAnd(const ControlCondition *ParentC,
                                 llvm::Value *V, bool IsTrue) {
    return CT.getAnd(ParentC, V, IsTrue);
  }

  const ControlCondition *concat(const ControlCondition *C1, const ControlCondition *C2) {
    return CT.concat(C1, C2);
  }

  const ControlCondition *
  getOr(llvm::ArrayRef<const ControlCondition *> Conds) {
    return CT.getOr(Conds);
  }

  llvm::Loop *getOrigLoop(VLoop *VL) { return VLoopToLoopMap.lookup(VL); }
  llvm::ScalarEvolution *getSE() { return SE; }

  unsigned getLoopDepth(VLoop *VL);
};

bool isConvertibleToPSSA(llvm::Function &, llvm::LoopInfo &, llvm::DominatorTree &);

#endif // end PSSA_H
