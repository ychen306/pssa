#ifndef VLOOP_H
#define VLOOP_H

#include "llvm/ADT/DenseMap.h"
#include "llvm/ADT/DenseSet.h"
#include "llvm/ADT/SmallVector.h"
#include "llvm/ADT/PointerUnion.h"

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
  llvm::DenseMap<llvm::Loop *, VLoop *> LoopToVLoopMap;
  llvm::DenseMap<llvm::Instruction *, VLoop *> InstToVLoopMap;

public:
  void mapInstToLoop(llvm::Instruction *I, VLoop *VL) {
    InstToVLoopMap[I] = VL;
  }
  VLoop *getVLoop(llvm::Loop *) const;
  void setVLoop(llvm::Loop *, VLoop *);

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

class VLoop {
  VLoopInfo &VLI;
  friend class VLoopInfo;
  bool IsTopLevel; // True if this VLoop doesn't represent any actual loop but
                   // the whole function

  using ItemType = llvm::PointerUnion<llvm::Instruction *, VLoop *>;

  llvm::SmallVector<ItemType> Items;
  llvm::SmallVector<std::unique_ptr<VLoop>, 4> SubLoops;
  llvm::SmallDenseMap<llvm::PHINode *, MuNode, 8> Mus;
  llvm::DenseMap<llvm::PHINode *, OneHotPhi> OneHotPhis;
  llvm::DenseMap<llvm::PHINode *, llvm::SmallVector<const ControlCondition *, 4>> GatedPhis;
  llvm::DenseMap<llvm::Instruction *, const ControlCondition *> InstConds;

  // Should we execute this loop at all
  const ControlCondition *LoopCond;
  // Is the backedge taken
  const ControlCondition *BackEdgeCond;

  VLoop *Parent;
  llvm::Loop *L; // the original loop

  VLoop(llvm::LoopInfo &, llvm::Loop *, ControlDependenceAnalysis &, VLoopInfo &);

public:
  // Construct a top-level "loop" that represents a whole function
  VLoop(llvm::Function *, llvm::LoopInfo &, llvm::DominatorTree &, 
             ControlDependenceAnalysis &,
      VLoopInfo &);

  llvm::ArrayRef<ItemType> getItems() const { return Items; }

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
  bool isLoop() const { return L; }
  llvm::Optional<MuNode> getMu(llvm::PHINode *) const;

  bool isGatedPhi(llvm::PHINode *PN) const {
    return GatedPhis.count(PN);
  }

  // Get the incoming condition if the ith phi value
  const ControlCondition *getIncomingPhiCondition(llvm::PHINode *PN, unsigned i) {
    assert(GatedPhis.count(PN));
    return GatedPhis[PN][i];
  }

  VLoop *getParent() const { return Parent; }
};

#endif
