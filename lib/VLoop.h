#ifndef VLOOP_H
#define VLOOP_H

#include "llvm/ADT/DenseMap.h"
#include "llvm/ADT/DenseSet.h"
#include "llvm/ADT/PointerUnion.h"
#include "llvm/ADT/SmallVector.h"
#include <list>

namespace llvm {
class Loop;
class Instruction;
class Function;
class Value;
class LoopInfo;
class PHINode;
class DominatorTree;
} // namespace llvm

class ControlCondition;
class ControlDependenceAnalysis;

class VLoop;
class VLoopInfo {
  llvm::DenseMap<llvm::Instruction *, VLoop *> InstToVLoopMap;

public:
  void mapInstToLoop(llvm::Instruction *I, VLoop *VL) {
    InstToVLoopMap[I] = VL;
  }

  VLoop *getLoopForInst(llvm::Instruction *I) const {
    assert(InstToVLoopMap.count(I));
    return InstToVLoopMap.lookup(I);
  }
};

// This represents the mu nodes in Gated SSA
struct MuNode {
  llvm::Value *Init;
  llvm::Value *Iter;
  MuNode(llvm::Value *Init, llvm::Value *Iter) : Init(Init), Iter(Iter) {}
};

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

class VLoop {
  bool IsTopLevel; // True if this VLoop doesn't represent any actual loop but
                   // the whole function

  std::list<Item> Items;
  llvm::SmallVector<std::unique_ptr<VLoop>, 4> SubLoops;
  // FIXME: make this a small ptr set
  llvm::SmallDenseMap<llvm::PHINode *, MuNode, 8> Mus;
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
  VLoop()
      : IsTopLevel(true), Parent(nullptr), LoopCond(nullptr),
        BackEdgeCond(nullptr) {}
  VLoop(const ControlCondition *LoopCond, const ControlCondition *BackEdgeCond,
        VLoop *Parent = nullptr)
      : IsTopLevel(false), Parent(nullptr), LoopCond(LoopCond),
        BackEdgeCond(BackEdgeCond) {}

  using ItemIterator = decltype(Items)::iterator;

  ItemIterator insert(llvm::Instruction *, const ControlCondition *,
                      llvm::Optional<ItemIterator> InsertBefore = llvm::None);
  ItemIterator insert(llvm::PHINode *, const ControlCondition *,
                      ControlDependenceAnalysis &,
                      llvm::Optional<ItemIterator> InsertBefore = llvm::None);
  ItemIterator insert(VLoop *,
                      llvm::Optional<ItemIterator> InsertBefore = llvm::None);

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
  llvm::Optional<MuNode> getMu(llvm::PHINode *) const;
  // Add a phi node as mu. Assume the first value is the init. val and second
  // rec.
  void addMu(llvm::PHINode *);

  bool isGatedPhi(llvm::PHINode *PN) const { return PhiConds.count(PN); }

  // Get the incoming condition if the ith phi value
  const ControlCondition *getPhiCondition(llvm::PHINode *PN, unsigned i) {
    assert(PhiConds.count(PN));
    return PhiConds[PN][i];
  }

  VLoop *getParent() const { return Parent; }
};

std::unique_ptr<VLoop> buildTopLevelVLoop(llvm::Function *, llvm::LoopInfo &,
                                          llvm::DominatorTree &,
                                          ControlDependenceAnalysis &,
                                          VLoopInfo &);

#endif
