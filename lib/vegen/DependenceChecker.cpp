#include "DependenceChecker.h"
#include "PackSet.h"
#include "Reduction.h"
#include "pssa/PSSA.h"
#include "vegen/Pack.h"
#include "llvm/Analysis/AliasAnalysis.h"
#include "llvm/Analysis/DependenceAnalysis.h"
#include "llvm/Analysis/ScalarEvolution.h"
#include "llvm/Analysis/ScalarEvolutionExpressions.h"
#include "llvm/Analysis/LoopInfo.h"

using namespace llvm;

bool mayReadOrWriteMemory(Instruction *I) {
  return isa<ReturnInst>(I) || I->mayReadOrWriteMemory();
}

bool mayReadOrWriteMemory(const Item &It) {
  if (auto *I = It.asInstruction())
    return mayReadOrWriteMemory(I);
  return true;
}

// Copied from SCEV AA
static Value *getBaseValue(const SCEV *S) {
  if (const SCEVAddRecExpr *AR = dyn_cast<SCEVAddRecExpr>(S)) {
    // In an addrec, assume that the base will be in the start, rather
    // than the step.
    return getBaseValue(AR->getStart());
  } else if (const SCEVAddExpr *A = dyn_cast<SCEVAddExpr>(S)) {
    // If there's a pointer operand, it'll be sorted at the end of the list.
    const SCEV *Last = A->getOperand(A->getNumOperands() - 1);
    if (Last->getType()->isPointerTy())
      return getBaseValue(Last);
  } else if (const SCEVUnknown *U = dyn_cast<SCEVUnknown>(S)) {
    // This is a leaf node.
    return U->getValue();
  }
  // No Identified object found.
  return nullptr;
}

static bool isLessThan(ScalarEvolution &SE, const SCEV *A, const SCEV *B) {
  return SE.isKnownNegative(SE.getMinusSCEV(A, B));
}

/// True if the instruction is not a volatile or atomic load/store.
static bool isSimple(Instruction *I) {
  if (LoadInst *LI = dyn_cast<LoadInst>(I))
    return LI->isSimple();
  if (StoreInst *SI = dyn_cast<StoreInst>(I))
    return SI->isSimple();
  if (MemIntrinsic *MI = dyn_cast<MemIntrinsic>(I))
    return !MI->isVolatile();
  return true;
}

static MemoryLocation getLocation(Instruction *I) {
  if (StoreInst *SI = dyn_cast<StoreInst>(I))
    return MemoryLocation::get(SI);
  if (LoadInst *LI = dyn_cast<LoadInst>(I))
    return MemoryLocation::get(LI);
  return MemoryLocation();
}

static bool isAliased(Instruction *I1, Instruction *I2, AliasAnalysis &AA,
                      ScalarEvolution &SE) {
  auto Loc1 = getLocation(I1);
  auto Loc2 = getLocation(I2);
  Function *F = I1->getParent()->getParent();
  if (Loc1.Ptr && Loc2.Ptr && isSimple(I1) && isSimple(I2)) {
    // Do the alias check.
    auto Result = AA.alias(Loc1, Loc2);
    if (Result != AliasResult::MayAlias)
      return Result;
  }

  auto *Ptr1 = getLoadStorePointerOperand(I1);
  auto *Ptr2 = getLoadStorePointerOperand(I2);
  if (!Ptr1 || !Ptr2)
    return true;
  assert(Loc1.Size.hasValue());
  assert(Loc2.Size.hasValue());

  auto *Ptr1SCEV = SE.getSCEV(Ptr1);
  auto *Ptr2SCEV = SE.getSCEV(Ptr2);

  auto *Base1 = getBaseValue(Ptr1SCEV);
  auto *Base2 = getBaseValue(Ptr2SCEV);
  if (Base1 && Base2 && Base1 != Base2)
    return AA.alias(MemoryLocation::getBeforeOrAfter(Base1),
                    MemoryLocation::getBeforeOrAfter(Base2));

  bool Lt = isLessThan(SE, Ptr1SCEV, Ptr2SCEV);
  bool Gt = isLessThan(SE, Ptr2SCEV, Ptr1SCEV);
  if (!Lt && !Gt)
    return true;
  // Assume WLOG that Ptr1 < Ptr2
  if (Gt) {
    std::swap(Ptr1SCEV, Ptr2SCEV);
    std::swap(Ptr1, Ptr2);
  }

  auto *Ty = cast<PointerType>(Ptr1->getType());
  auto AS = Ty->getAddressSpace();
  auto &DL = F->getParent()->getDataLayout();
  unsigned IndexWidth = DL.getIndexSizeInBits(AS);
  APInt Size(IndexWidth, Loc1.Size.getValue());
  return SE.isKnownPositive(
      SE.getMinusSCEV(SE.getAddExpr(Ptr1SCEV, SE.getConstant(Size)), Ptr2SCEV));

  return true;
}

void DependenceChecker::processLoop(VLoop *VL) {
  if (Summaries.count(VL))
    return;

  auto &Summary = Summaries[VL];
  for (auto &It : VL->items()) {
    if (auto *SubVL = It.asLoop()) {
      processLoop(SubVL);
      auto &SubSummary = Summaries[SubVL];
      Summary.MemoryInsts.append(SubSummary.MemoryInsts);
      // FIXME: also consider control deps
      for (auto *I : SubSummary.LiveIns)
        if (!VL->contains(I))
          Summary.LiveIns.push_back(I);
    } else {
      assert(It.asInstruction());
      auto *I = It.asInstruction();
      if (!isLive(I))
        continue;
      if (I->mayReadOrWriteMemory())
        Summary.MemoryInsts.push_back(I);
      for (Value *O : I->operand_values()) {
        auto *OI = dyn_cast<Instruction>(O);
        if (OI && !VL->contains(OI))
          Summary.LiveIns.push_back(OI);
      }
    }

    for (auto *Mu : VL->mus()) {
      if (!isLive(Mu))
        continue;
      if (auto *I = dyn_cast<Instruction>(Mu->getIncomingValue(0)))
        Summary.LiveIns.push_back(I);
    }
  }
}

ArrayRef<Instruction *> DependenceChecker::getMemoryInsts(VLoop *VL) {
  processLoop(VL);
  assert(Summaries.count(VL));
  return Summaries[VL].MemoryInsts;
}

// FIXME: make this more general
static bool isExclusive(const ControlCondition *C1,
                        const ControlCondition *C2) {
  // If any one is true then it's definitely not exclusive
  if (!C1 || !C2)
    return false;

  auto *And1 = dyn_cast<ConditionAnd>(C1);
  if (And1 && And1->Complement == C2)
    return true;

  auto *And2 = dyn_cast<ConditionAnd>(C2);
  if (And1 && And2)
    return isExclusive(And1->Parent, And2->Parent);

  return false;
}

bool DependenceChecker::hasDependency(Instruction *I1, Instruction *I2) {
  if (I1 == I2)
    return false;

  assert(mayReadOrWriteMemory(I1) && mayReadOrWriteMemory(I2));

  if (!I1->mayWriteToMemory() && !I2->mayWriteToMemory())
    return false;

  auto *C1 = PSSA.getInstCond(I1);
  auto *C2 = PSSA.getInstCond(I2);
  // is C1 and C2 cannot be true simultaneously then there's no dep.
  if (isExclusive(C1, C2))
    return false;

  auto *L1 = LI.getLoopFor(I1->getParent());
  auto *L2 = LI.getLoopFor(I2->getParent());
  // In case AA reports MayAlias, check DependenceInfo again
  if (L1 == L2 && !isAliased(I1, I2, AA, SE))
    return false;

  auto Dep = DI.depends(I1, I2, true);
  return Dep && Dep->isOrdered();
}

bool DependenceChecker::depends(const Item &It1, const Item &It2) {
  auto *I1 = It1.asInstruction();
  auto *I2 = It2.asInstruction();
  auto *VL1 = It1.asLoop();
  auto *VL2 = It2.asLoop();
  if (I1 && I2) {
    // TODO: directly query AA for better precision,
    // if I1 and I2 are in the same loop?
    return hasDependency(I1, I2);
  } else if (VL1 && VL2) {
    processLoop(VL1);
    processLoop(VL2);

    for (auto *I1 : Summaries[VL1].MemoryInsts) {
      for (auto *I2 : Summaries[VL2].MemoryInsts)
        if (hasDependency(I1, I2))
          return true;
    }
    return false;
  }

  assert((I1 && VL2) || (VL1 && I2));

  // Collapse the two cases.
  // We just want to find out if there's any ordered (non-input)
  // dependences between the instruction and loop.
  if (VL1 && I2) {
    I1 = I2;
    VL2 = VL1;
  }
  assert(I1 && VL2);

  // Don't bother if I1 doesn't touch memory
  if (!mayReadOrWriteMemory(I1))
    return false;

  // Figure out the memory instructions in VL2
  processLoop(VL2);

  return any_of(Summaries[VL2].MemoryInsts,
                [&](Instruction *I) { return hasDependency(I1, I); });
}

ArrayRef<Instruction *> DependenceChecker::getLiveIns(VLoop *VL) {
  processLoop(VL);
  assert(Summaries.count(VL));
  return Summaries[VL].LiveIns;
}

namespace {
template <typename SetTy, typename ElemTy> class EraseOnReturnGuard {
  SetTy &Set;
  ElemTy Elem;

public:
  EraseOnReturnGuard(SetTy &Set, ElemTy Elem) : Set(Set), Elem(Elem) {}
  ~EraseOnReturnGuard() {
    assert(Set.count(Elem));
    Set.erase(Elem);
  }
};
} // namespace

void DependencesFinder::visitValue(Value *V) {
  // Special case for checking dependences of reductions
  // (which are also always loose and therefore not inserted in the IR)
  if (auto *Rdx = dyn_cast<Reduction>(V)) {
    for (auto &Elt : Rdx->Elements) {
      visitValue(Elt.Val);
      visitCond(Elt.C);
    }
    visitCond(Rdx->ParentCond);
    return;
  }

  if (auto *I = dyn_cast<Instruction>(V))
    visit(I, true);
}

void DependencesFinder::visitCond(const ControlCondition *C) {
  if (!C)
    return;
  if (!VisitedConds.insert(C).second)
    return;

  if (auto *And = dyn_cast<ConditionAnd>(C)) {
    visitCond(And->Parent);
    visitValue(And->Cond);
    return;
  }

  auto *Or = cast<ConditionOr>(C);
  for (auto *C2 : Or->Conds)
    visitCond(C2);
}

void DependencesFinder::visit(Item It, bool AddDep) {
  if (!Processing.insert(It).second) {
    FoundCycle = true;
    return;
  }

  EraseOnReturnGuard EraseOnReturn(Processing, It);

  auto *ParentVL = PSSA->getLoopForItem(It);
  if (!VL->contains(It))
    return;

  // Find out the outermost loop of `It` that's contained by `VL`.
  while (ParentVL != VL) {
    It = ParentVL;
    ParentVL = ParentVL->getParent();
  }

  // Don't consider things that comes before earliest
  if (It != Earliest && (!VL->contains(It) || !VL->comesBefore(Earliest, It)))
    return;

  if (Visited.count(It))
    return;

  SmallVector<Item, 8> Coupled;
  // Process (register) data and control dependences
  if (auto *I = It.asInstruction()) {
    assert(!isa<PHINode>(I) || !VL->isMu(cast<PHINode>(I)));
    Pack *P = Packs ? Packs->getPackForValue(I) : nullptr;
    // If I is packed with other instructions,
    // we also need to check their dependences
    ArrayRef<Instruction *> Insts = P ? P->values() : I;
    for (auto *I : Insts) {
      for (auto *V : I->operand_values())
        visitValue(V);
      visitCond(VL->getInstCond(I));
      if (auto *PN = dyn_cast<PHINode>(I); PN && VL->isGatedPhi(PN)) {
        for (auto *C : VL->getPhiConditions(PN))
          visitCond(C);
      }
      Coupled.emplace_back(I);
    }
  } else {
    Coupled = {It};
    auto *SubVL = It.asLoop();
    for (auto *V : DepChecker.getLiveIns(SubVL))
      visitValue(V);
    visitCond(SubVL->getLoopCond());
  }

  // Scan the memory dependences between Earliest and It
  if (mayReadOrWriteMemory(It)) {
    for (auto I = VL->toIterator(Earliest), E = VL->toIterator(It); I != E;
         ++I) {
      if (!mayReadOrWriteMemory(*I))
        continue;
      for (auto &It2 : Coupled)
        if (VL->comesBefore(*I, It2) && DepChecker.depends(*I, It2)) {
          visit(*I, true);
        }
    }
  }

  if (AddDep) {
    Visited.insert(It);
    Deps.push_back(It);
  }
}

bool findInBetweenDeps(SmallVectorImpl<Item> &Deps, ArrayRef<Item> Items,
                       VLoop *VL, PredicatedSSA &PSSA,
                       DependenceChecker &DepChecker, const PackSet *Packs) {
  assert(all_of(Items,
                [&](const Item &It) { return PSSA.getLoopForItem(It) == VL; }));
  auto ComesBefore = [VL](const Item &It1, const Item &It2) {
    return VL->comesBefore(It1, It2);
  };
  Item Earliest = *std::min_element(Items.begin(), Items.end(), ComesBefore);

  DependencesFinder DepFinder(Deps, Earliest, VL, DepChecker, Packs);
  bool FoundCycle = false;
  for (auto It : Items)
    FoundCycle |= DepFinder.findDep(It);
  return FoundCycle;
}
