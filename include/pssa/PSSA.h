#ifndef PSSA_H
#define PSSA_H

#include "pssa/ControlDependence.h"
#include "llvm/ADT/DenseMap.h"
#include "llvm/ADT/PointerUnion.h"
#include "llvm/ADT/SmallPtrSet.h"
#include "llvm/ADT/SmallVector.h"
#include "llvm/IR/Instructions.h"
#include <list>

namespace llvm {
class Loop;
class Instruction;
class Function;
class Value;
class LoopInfo;
class PHINode;
class DominatorTree;
class PostDominatorTree;
} // namespace llvm

class ControlCondition;
class ControlDependenceAnalysis;

// This represents a special kind of gated phi
struct OneHotPhi {
  const ControlCondition *C;
  llvm::Value *IfTrue;
  llvm::Value *IfFalse;
  OneHotPhi(const ControlCondition *C, llvm::Value *IfTrue,
            llvm::Value *IfFalse)
      : C(C), IfTrue(IfTrue), IfFalse(IfFalse) {}
};

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

  std::list<Item> Items;
  llvm::SmallVector<std::unique_ptr<VLoop>, 4> SubLoops;
  llvm::SmallPtrSet<llvm::PHINode *, 8> Mus;
  llvm::DenseMap<llvm::PHINode *, OneHotPhi> OneHotPhis;
  llvm::DenseMap<llvm::PHINode *,
                 llvm::SmallVector<const ControlCondition *, 4>>
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
      : PSSA(PSSA), IsTopLevel(true), Parent(nullptr), LoopCond(nullptr),
        BackEdgeCond(nullptr) {}
  VLoop(PredicatedSSA *PSSA, const ControlCondition *LoopCond,
        const ControlCondition *BackEdgeCond, VLoop *Parent = nullptr)
      : PSSA(PSSA), IsTopLevel(false), Parent(nullptr), LoopCond(LoopCond),
        BackEdgeCond(BackEdgeCond) {}

  using ItemIterator = decltype(Items)::iterator;

  ItemIterator insert(llvm::Instruction *, const ControlCondition *,
                      llvm::Optional<ItemIterator> InsertBefore = llvm::None);
  ItemIterator insert(llvm::PHINode *, const ControlCondition *,
                      ControlDependenceAnalysis &,
                      llvm::Optional<ItemIterator> InsertBefore = llvm::None);
  ItemIterator insert(VLoop *,
                      llvm::Optional<ItemIterator> InsertBefore = llvm::None);

  void erase(ItemIterator It) { Items.erase(It); }

  const decltype(Items) &items() const { return Items; }

  const ControlCondition *getInstCond(llvm::Instruction *I) const {
    assert(InstConds.count(I));
    return InstConds.lookup(I);
  }
  void setInstCond(llvm::Instruction *I, const ControlCondition *C) {
    assert(InstConds.count(I));
    InstConds[I] = C;
  }
  llvm::ArrayRef<std::unique_ptr<VLoop>> getSubLoops() const {
    return SubLoops;
  }
  const ControlCondition *getLoopCond() const { return LoopCond; }
  const ControlCondition *getBackEdgeCond() const { return BackEdgeCond; }
  void setBackEdgeCond(const ControlCondition *C) { BackEdgeCond = C; }
  void setLoopCond(const ControlCondition *C) { LoopCond = C; }
  bool isLoop() const { return !IsTopLevel; }
  bool isMu(llvm::PHINode *PN) const { return Mus.count(PN); }

  // Add a phi node as mu. Assume the first value is the init. val and second
  // rec.
  void addMu(llvm::PHINode *PN);

  llvm::iterator_range<decltype(Mus)::iterator> mus() {
    return llvm::make_range(Mus.begin(), Mus.end());
  }

  bool isGatedPhi(llvm::PHINode *PN) const { return PhiConds.count(PN); }

  // Get the incoming condition if the ith phi value
  const ControlCondition *getPhiCondition(llvm::PHINode *PN, unsigned i) {
    assert(PhiConds.count(PN));
    return PhiConds[PN][i];
  }

  VLoop *getParent() const { return Parent; }
  PredicatedSSA *getPSSA() const { return PSSA; }
};

class PredicatedSSA {
  llvm::LoopInfo &LI;
  ConditionTable CT;
  VLoop TopVL;
  llvm::DenseMap<llvm::Instruction *, VLoop *> InstToVLoopMap;
  llvm::DenseMap<Item, VLoop::ItemIterator, ItemHashInfo> ItemToIteratorMap;

public:
  // Convert from LLVM IR
  PredicatedSSA(llvm::Function *, llvm::LoopInfo &, llvm::DominatorTree &,
                llvm::PostDominatorTree &);

  struct InsertPoint {
    VLoop *VL;
    VLoop::ItemIterator It;
    void insert(llvm::Instruction *I, const ControlCondition *C);
  };

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

  void mapMuToLoop(llvm::PHINode *PN, VLoop *VL) {
    InstToVLoopMap[PN] = VL;
  }

  VLoop *getLoopForInst(llvm::Instruction *I) const {
    assert(InstToVLoopMap.count(I));
    return InstToVLoopMap.lookup(I);
  }

  bool contains(llvm::Instruction *I) const {
    return InstToVLoopMap.count(I);
  }

  VLoop &getTopLevel() { return TopVL; }
};

#endif // end PSSA_H
