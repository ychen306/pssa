#ifndef VEGEN_LOOSEINSTRUCTIONTABLE_H
#define VEGEN_LOOSEINSTRUCTIONTABLE_H

#include "llvm/ADT/ArrayRef.h"
#include "llvm/ADT/DenseMap.h"
#include "llvm/ADT/FoldingSet.h"
#include "llvm/ADT/Optional.h"
#include "llvm/ADT/Twine.h"
#include "llvm/IR/Instruction.h"

namespace llvm {
class Reducer;
class PHINode;
} // namespace llvm

class VLoop;
class ControlCondition;
class PredicatedSSA;
class DependenceChecker;
class ReductionInfo;
struct Reduction;

// Utility to hash-cons Reducer
struct UniqueReducer : llvm::FoldingSetNode {
  Reduction *Rdx;
  llvm::SmallVector<llvm::Value *> Elts;
  VLoop *VL;
  const ControlCondition *C;

  // The unique reducer
  llvm::Reducer *R;

  UniqueReducer(Reduction *Rdx, llvm::ArrayRef<llvm::Value *> Elts, VLoop *VL,
                const ControlCondition *C)
      : Rdx(Rdx), Elts(Elts.begin(), Elts.end()), VL(VL), C(C), R(nullptr) {}
  void Profile(llvm::FoldingSetNodeID &ID) const;
};

// Utility to hash-cons One-hot PHI
struct UniqueOneHotPhi : llvm::FoldingSetNode {
  VLoop *VL;
  const ControlCondition *GateC;
  llvm::Value *IfTrue;
  llvm::Value *IfFalse;
  const ControlCondition *C;
  // The reduction that the one-hot phi computes
  Reduction *Rdx;

  // the unique phi node
  llvm::PHINode *PN;

  UniqueOneHotPhi(VLoop *VL, const ControlCondition *GateC, llvm::Value *IfTrue,
                  llvm::Value *IfFalse, const ControlCondition *C,
                  Reduction *Rdx)
      : VL(VL), GateC(GateC), IfTrue(IfTrue), IfFalse(IfFalse), C(C), Rdx(Rdx),
        PN(nullptr) {}

  void Profile(llvm::FoldingSetNodeID &ID) const;
};

// Utility to keep track of instructions
// created from scratch to change the order of reductions.
// These instructions are not present in the original program,
// and needs to be inserted later.
class LooseInstructionTable {
  // When/where this instruction should we available
  struct Location {
    VLoop *VL;
    const ControlCondition *C;
  };
  llvm::DenseMap<llvm::Instruction *, Location> LooseInsts;
  // Treate mu
  llvm::DenseMap<llvm::PHINode *, VLoop *> LooseMus;
  // Also need to keep track of the gating conditions of one-hot phi
  // (we only support one-hot phis for now)
  llvm::DenseMap<llvm::PHINode *, const ControlCondition *> OneHotConds;

  // Some instructions may implement reductions, record that mapping
  llvm::DenseMap<llvm::Instruction *, Reduction *> InstToReductionMap;

  llvm::BumpPtrAllocator UniqueReducerAllocator, UniqueOneHotPhiAllocator;
  llvm::FoldingSet<UniqueReducer> UniqueReducers;
  llvm::FoldingSet<UniqueOneHotPhi> UniqueOneHotPhis;

  // Track a loose instruction
  void addLoose(llvm::Reducer *);

  // Track a instruction with customized location (usually for recurrent
  // reduction)
  void addLoose(llvm::Reducer *, VLoop *, const ControlCondition *);

  llvm::Reducer *findOrCreateReducer(Reduction *,
                                     llvm::ArrayRef<llvm::Value *> Elts,
                                     VLoop *VL, const ControlCondition *C);

public:
  ~LooseInstructionTable();

  llvm::Reducer *getOrCreateReducer(Reduction *,
                                    llvm::ArrayRef<llvm::Value *> Elts,
                                    const llvm::Twine &Name = "");

  // Create (or reuse an existing) reducer with a customized context
  // (most likely for recurrent reduction)
  llvm::Reducer *getOrCreateReducer(Reduction *,
                                    llvm::ArrayRef<llvm::Value *> Elts,
                                    VLoop *VL, const ControlCondition *C,
                                    const llvm::Twine &Name = "");

  llvm::PHINode *createMu(VLoop *VL, llvm::Value *Init);
  // Create a one-hot phi that implements a given conditional reduction
  llvm::PHINode *createOneHotPhi(VLoop *VL, const ControlCondition *GateC,
                                 llvm::Value *IfTrue, llvm::Value *IfFalse,
                                 const ControlCondition *C, Reduction *Rdx);
  bool isLoose(llvm::Instruction *I) const {
    return LooseInsts.count(I) || isLooseMu(I);
  }
  bool isLoose(llvm::Value *V) const {
    using namespace llvm;
    auto *I = dyn_cast<Instruction>(V);
    return I && isLoose(I);
  }
  bool isLooseMu(llvm::Value *V) const {
    using namespace llvm;
    auto *PN = dyn_cast<PHINode>(V);
    return PN && LooseMus.count(PN);
  }
  bool isLooseOneHotPhi(llvm::Value *V) const {
    using namespace llvm;
    auto *PN = dyn_cast<PHINode>(V);
    return PN && OneHotConds.count(PN);
  }
  // Insert a subset of the loose instructions into the IR.
  // Note that Insts are only the "root" instructions that we want to insert;
  // these instructions may use other loose instructions, which we will also
  // insert.
  //
  // Return true if successful.
  // We fail if somehow we accidentally introduced
  // a dependence cycle while decomposing the reductions.
  bool insertInto(llvm::ArrayRef<llvm::Instruction *> Insts,
                  PredicatedSSA &PSSA, DependenceChecker &DepChecker,
                  ReductionInfo &RI);
};

#endif // END VEGEN_LOOSEINSTRUCTIONTABLE_H
