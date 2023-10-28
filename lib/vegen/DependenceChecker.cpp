#include "DependenceChecker.h"
#include "PackSet.h"
#include "Reduction.h"
#include "Versioning.h"
#include "ortools/graph/max_flow.h"
#include "pssa/PSSA.h"
#include "vegen/Pack.h"
#include "llvm/Analysis/DependenceAnalysis.h"
#include "llvm/Analysis/LoopInfo.h"
#include "llvm/Analysis/ScalarEvolution.h"
#include "llvm/Analysis/ValueTracking.h"

using namespace llvm;

cl::opt<bool> DisablePhiSpeculation("disable-phi-speculation",
                                    cl::desc("Don't speculate phi conditions"),
                                    cl::init(false));

bool mayReadOrWriteMemory(Instruction *I) {
  if (auto *Call = dyn_cast<CallInst>(I);
      Call && Call->getCalledFunction() &&
      Call->getCalledFunction()->getName() == "llvm.assume")
    return false;
  return isa<ReturnInst>(I) || I->mayReadOrWriteMemory();
}

bool mayReadOrWriteMemory(const Item &It) {
  if (auto *I = It.asInstruction())
    return mayReadOrWriteMemory(I);
  return true;
}

MemRange MemRange::get(llvm::Instruction *I, ScalarEvolution &SE,
                       PredicatedSSA &PSSA, LoopInfo &LI) {
  auto &DL = I->getModule()->getDataLayout();
  auto *VL = PSSA.getLoopForInst(I);
  assert(I->getParent());
  auto *L = LI.getLoopFor(I->getParent());
  assert(!VL->isLoop() || L);
  if (isa<LoadInst>(I))
    return MemRange::get(DL, I, I->getType(), VL, L, SE);
  if (auto *Store = dyn_cast<StoreInst>(I))
    return MemRange::get(DL, Store, Store->getValueOperand()->getType(), VL, L,
                         SE);
  llvm_unreachable("MemRange::get only supports loads and stores");
}

MemRange MemRange::get(const DataLayout &DL, Instruction *I, Type *Ty,
                       VLoop *VL, Loop *L, ScalarEvolution &SE) {
  auto *Ptr = getLoadStorePointerOperand(I);
  auto *PtrTy = cast<PointerType>(Ptr->getType());
  unsigned IndexWidth = DL.getIndexSizeInBits(PtrTy->getAddressSpace());
  APInt Size(IndexWidth, DL.getTypeStoreSize(Ty));
  return MemRange{SE.getSCEV(Ptr), SE.getConstant(Size), VL, L, I};
}

static bool isLessThan(ScalarEvolution &SE, const SCEV *A, const SCEV *B) {
  auto *Minus = SE.getMinusSCEV(A, B);
  if (isa<SCEVCouldNotCompute>(Minus))
    return false;
  return SE.isKnownNegative(Minus);
}

// Promote R until its ParentLoop is VL
static Optional<MemRange> promoteTo(const MemRange &R, Loop *L,
                                    ScalarEvolution &SE, PredicatedSSA &PSSA) {
  if (R.OrigParentLoop == L)
    return R;

  assert(!L || L->contains(R.OrigParentLoop));
  Optional<MemRange> MaybeR = R;
  while (MaybeR && MaybeR->OrigParentLoop != L)
    MaybeR = MaybeR->promote(SE, PSSA);
  assert(!MaybeR || MaybeR->OrigParentLoop == L);
  return MaybeR;
}

static Loop *nearestCommonParent(Loop *L1, Loop *L2) {
  auto Contains = [](auto *L1, auto *L2) {
    return L1 == L2 || L1->contains(L2);
  };

  while (L1 && !Contains(L1, L2))
    L1 = L1->getParentLoop();
  return L1;
}

Optional<MemRange> MemRange::merge(const MemRange &OrigR1,
                                   const MemRange &OrigR2, ScalarEvolution &SE,
                                   PredicatedSSA &PSSA) {
  auto *L = nearestCommonParent(OrigR1.OrigParentLoop, OrigR2.OrigParentLoop);
  auto MaybeR1 = promoteTo(OrigR1, L, SE, PSSA);
  if (!MaybeR1)
    return None;
  auto MaybeR2 = promoteTo(OrigR2, L, SE, PSSA);
  if (!MaybeR2)
    return None;
  auto &R1 = *MaybeR1;
  auto &R2 = *MaybeR2;

  auto *Base1 = R1.Base;
  auto *Base2 = R2.Base;
  // Base2 - Base1
  auto *Diff = SE.getMinusSCEV(Base2, Base1);
  if (!isa<SCEVConstant>(Diff))
    return None;

  auto *End1 = SE.getAddExpr(Base1, R1.Size);
  auto *End2 = SE.getAddExpr(Base2, R2.Size);
  const SCEV *Base = nullptr;
  const SCEV *Size = nullptr;
  if (SE.isKnownNonNegative(Diff)) {
    // Base2 >= Base1
    Base = R1.Base;
    if (isLessThan(SE, End1, End2))
      Size = SE.getAddExpr(Diff, R2.Size);
    else if (End1 == End2 || isLessThan(SE, End2, End1))
      Size = R1.Size;
    else
      return None;
  } else {
    Base = R2.Base;
    if (isLessThan(SE, End2, End1))
      Size = SE.getAddExpr(SE.getMulExpr(Diff, SE.getMinusOne(Diff->getType())),
                           R1.Size);
    else if (End1 == End2 || isLessThan(SE, End1, End2))
      Size = R2.Size;
    else
      return None;
  }
  return MemRange{Base, Size, R1.ParentLoop, R1.OrigParentLoop, R1.Access};
}

static const SCEV *getAdd(const SCEV *A, const SCEV *B, ScalarEvolution &SE) {
  if (A->getType() == B->getType())
    return SE.getAddExpr(A, B);
  auto *ATy = SE.getEffectiveSCEVType(A->getType());
  auto *BTy = SE.getEffectiveSCEVType(B->getType());
  if (ATy->getIntegerBitWidth() < BTy->getIntegerBitWidth())
    ATy = B->getType();
  return SE.getAddExpr(SE.getNoopOrZeroExtend(A, ATy),
                       SE.getNoopOrZeroExtend(B, ATy));
}

static const SCEV *getMul(const SCEV *A, const SCEV *B, ScalarEvolution &SE) {
  if (A->getType() == B->getType())
    return SE.getMulExpr(A, B);
  auto *Ty = A->getType();
  if (Ty->getIntegerBitWidth() < B->getType()->getIntegerBitWidth())
    Ty = B->getType();
  return SE.getMulExpr(SE.getNoopOrZeroExtend(A, Ty),
                       SE.getNoopOrZeroExtend(B, Ty));
}

Optional<MemRange> MemRange::promote(ScalarEvolution &SE, PredicatedSSA &PSSA) {
  if (!ParentLoop->isLoop())
    return None;
  auto *L = OrigParentLoop;
  // Don't bother promoting if the access size is not loop-invariant
  if (!SE.isLoopInvariant(Size, L))
    return None;

  // Best case: the access pattern is loop-invariant
  if (SE.isLoopInvariant(Base, L))
    return MemRange{Base, Size, ParentLoop->getParent(), L->getParentLoop(),
                    Access};

  // Otherwise we insist the base pointer is an AddRec expr (and therefore
  // predictable)
  auto *BaseAR = dyn_cast<SCEVAddRecExpr>(Base);
  if (!BaseAR)
    return None;

  auto *BackedgeTakenCount = SE.getBackedgeTakenCount(L);
  if (isa<SCEVCouldNotCompute>(BackedgeTakenCount))
    return None;

  auto *Step = BaseAR->getStepRecurrence(SE);
  auto *Start = BaseAR->getStart();
  auto *Diff = getAdd(getMul(BackedgeTakenCount, Step, SE), Size, SE);
  // TODO: deal with negative step
  if (SE.isKnownNonNegative(Step)) {
    return MemRange{Start, getAdd(Diff, Size, SE), ParentLoop->getParent(),
                    L->getParentLoop(), Access};
  }

  // Bail if the step size is not a constant
  if (!SE.isKnownNegative(Step))
    return None;
  return MemRange{getAdd(Start, Diff, SE),
                  getAdd(SE.getNegativeSCEV(Diff), Size, SE),
                  ParentLoop->getParent(), L->getParentLoop(), Access};
}

DepCondition DepCondition::ifOverlapping(const MemRange &R1, const MemRange &R2,
                                         ScalarEvolution &SE,
                                         PredicatedSSA &PSSA) {
  // Special case for simplifying affine ranges:
  //   (base1+i*step, base1+i*step+size1) overlaps with (base2+i*step,
  //   base2+i*step+size2)
  // iff
  //   (base1, base1+size1) overlaps with (base2, base2+size2)
  assert(R1.Base != R2.Base);
  auto *Base1 = dyn_cast<SCEVAddRecExpr>(R1.Base);
  auto *Size1 = R1.Size;
  auto *Base2 = dyn_cast<SCEVAddRecExpr>(R2.Base);
  auto *Size2 = R2.Size;
  assert(R1.ParentLoop == R2.ParentLoop);
  auto *VL = R1.ParentLoop;
  auto *L = PSSA.getOrigLoop(VL);
  if (Base1 && Base2 && Base1->isAffine() && Base2->isAffine() &&
      Base1->getStepRecurrence(SE) == Base2->getStepRecurrence(SE) &&
      SE.isLoopInvariant(Size1, L) && SE.isLoopInvariant(Size2, L)) {
    MemRange NewR1 = R1, NewR2 = R2;
    NewR1.Base = Base1->getStart();
    NewR2.Base = Base2->getStart();
    NewR1.ParentLoop = R1.ParentLoop->getParent();
    NewR2.ParentLoop = R2.ParentLoop->getParent();
    NewR1.OrigParentLoop = R1.OrigParentLoop->getParentLoop();
    NewR2.OrigParentLoop = R2.OrigParentLoop->getParentLoop();
    return DepCondition(NewR1, NewR2);
  }
  return DepCondition(R1, R2);
}

bool DepCondition::isLoopInvariant(VLoop *VL) const {
  if (!isOverlapping())
    return false;
  auto R = getRanges().first;
  return R.ParentLoop->contains(VL) && R.ParentLoop != VL;
}

Optional<DepCondition> DepCondition::coalesce(const DepCondition &Cond1,
                                              const DepCondition &Cond2,
                                              ScalarEvolution &SE,
                                              PredicatedSSA &PSSA,
                                              bool &Swapped) {
  if (Cond1 == Cond2)
    return Cond1;

  // Only support disjoint checks now
  if (!Cond1.isOverlapping() || !Cond2.isOverlapping())
    return None;

  auto Chk1 = Cond1.getRanges();
  auto Chk2 = Cond2.getRanges();

  // Only coalesce checks from the same loops
  if (Chk1.first.ParentLoop != Chk2.first.ParentLoop)
    return None;

  Optional<MemRange> R1, R2;
  R1 = MemRange::merge(Chk1.first, Chk2.first, SE, PSSA);
  if (!R1) {
    // Try permute Chk2 and coalesce
    R1 = MemRange::merge(Chk1.first, Chk2.second, SE, PSSA);
    if (!R1)
      return None;
    R2 = MemRange::merge(Chk1.second, Chk2.first, SE, PSSA);
    if (!R2)
      return None;
    Swapped = true;
  } else {
    R2 = MemRange::merge(Chk1.second, Chk2.second, SE, PSSA);
    if (!R2)
      return None;
    Swapped = false;
  }
  return DepCondition::ifOverlapping(*R1, *R2, SE, PSSA);
}

raw_ostream &operator<<(raw_ostream &OS, const MemRange &R) {
  OS << '(' << *R.Base << ")[:" << *R.Size << ']';
  return OS;
}

raw_ostream &operator<<(raw_ostream &OS, const DepNode &N) {
  if (auto *I = N.asInstruction(); I && I->hasName())
    OS << I->getName();
  else if (isa_and_nonnull<PHINode>(N.asInstruction()))
    OS << "phi";
  else if (auto *I = N.asInstruction())
    OS << *I;
  else if (auto *VL = N.asLoop())
    OS << "loop<" << VL->getName() << ">";
  else
    OS << *N.asCond();
  return OS;
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

static AliasResult::Kind isAliased(Instruction *I1, Instruction *I2,
                                   CachingAA &AA, ScalarEvolution &SE,
                                   bool FromSameLoop) {
  auto Loc1 = getLocation(I1);
  auto Loc2 = getLocation(I2);
  Function *F = I1->getParent()->getParent();
  if (Loc1.Ptr && Loc2.Ptr && isSimple(I1) && isSimple(I2)) {
    // Do the alias check.
    auto Result = AA.alias(Loc1, Loc2);
    // Stop here if it's must alias OR we are checking aliasing between
    // instructions from different loops (because the SCEV check below assumes
    // instructions come from the same loop).
    if (Result != AliasResult::MayAlias || !FromSameLoop)
      return Result;
  }

  auto *Ptr1 = getLoadStorePointerOperand(I1);
  auto *Ptr2 = getLoadStorePointerOperand(I2);
  if (!Ptr1 || !Ptr2)
    return AliasResult::MustAlias;

  assert(Loc1.Size.hasValue());
  assert(Loc2.Size.hasValue());
  auto *Ptr1SCEV = SE.getSCEV(Ptr1);
  auto *Ptr2SCEV = SE.getSCEV(Ptr2);

#if 0
  // If two accesses have the same alignment and size
  // and we can prove that the pointers are not equal, then they don't alias
  // (We make two calls to SE.isKnownPredicate because it's not commutative...)
  if (Loc1.Size.getValue() == Loc2.Size.getValue() &&
      getLoadStoreAlignment(I1).value() == Loc1.Size.getValue() &&
      (SE.isKnownPredicate(CmpInst::ICMP_NE, Ptr1SCEV, Ptr2SCEV) ||
       SE.isKnownPredicate(CmpInst::ICMP_NE, Ptr2SCEV, Ptr1SCEV)))
    return AliasResult::NoAlias;
#endif

  auto *Base1 = getBaseValue(Ptr1SCEV);
  auto *Base2 = getBaseValue(Ptr2SCEV);
  if (Base1 && Base2 && Base1 != Base2)
    return AA.alias(MemoryLocation::getBeforeOrAfter(Base1),
                    MemoryLocation::getBeforeOrAfter(Base2));

  bool Lt = isLessThan(SE, Ptr1SCEV, Ptr2SCEV);
  bool Gt = isLessThan(SE, Ptr2SCEV, Ptr1SCEV);
  if (!Lt && !Gt)
    return AliasResult::MayAlias;
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
  if (SE.isKnownPositive(SE.getMinusSCEV(
          SE.getAddExpr(Ptr1SCEV, SE.getConstant(Size)), Ptr2SCEV))) {
    return AliasResult::MustAlias;
  }
  return AliasResult::NoAlias;
}

Instruction *DependenceChecker::getOriginal(Instruction *I) const {
  if (!TheVersioner)
    return I;
  if (auto *Orig = TheVersioner->getOriginalIfCloned(I))
    return Orig;
  return I;
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
      if (mayReadOrWriteMemory(I))
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

DepKind::DepKind(llvm::ArrayRef<DepCondition> TheConds) {
  for (auto &DepCond : TheConds)
    if (!DepCond.isUnconditional())
      Conds.push_back(DepCond);
  if (Conds.empty())
    Conds = {DepCondition::always()};
}

static bool mayOverlap(ScalarEvolution &SE, MemRange R1, MemRange R2) {
  if (R1.ParentLoop != R2.ParentLoop)
    return true;
  auto *End1 = SE.getAddExpr(R1.Base, R1.Size);
  auto *End2 = SE.getAddExpr(R2.Base, R2.Size);
  if (End1 == R2.Base || End2 == R1.Base || isLessThan(SE, End1, R2.Base) ||
      isLessThan(SE, End2, R1.Base))
    return false;
  return true;
}

Optional<DepCondition> DependenceChecker::getDepKind(Instruction *I1,
                                                     Instruction *I2) {
  auto [It, Inserted] = DepKinds.try_emplace({I1, I2});
  if (!Inserted)
    return It->second;
  if (TheVersioner)
    TheVersioner->undo();
  auto Kind = getDepKindImpl(I1, I2);
  if (TheVersioner)
    TheVersioner->redo();
  It->second = Kind;
  return Kind;
}

Optional<DepCondition> DependenceChecker::getDepKindImpl(Instruction *I1,
                                                         Instruction *I2) {
  if (I1 == I2)
    return None;

  assert(mayReadOrWriteMemory(I1) && mayReadOrWriteMemory(I2));

  if (!I1->mayWriteToMemory() && !I2->mayWriteToMemory())
    return None;

  // If the instructions are versioned, get their original copy so that AA and
  // DI can understand
  I1 = getOriginal(I1);
  I2 = getOriginal(I2);

  auto *L1 = LI.getLoopFor(I1->getParent());
  auto *L2 = LI.getLoopFor(I2->getParent());
  // In case AA reports MayAlias, check DependenceInfo again
  auto AliasKind = isAliased(I1, I2, AA, SE, L1 == L2 /*FromSameLoop*/);
  if (L1 == L2) {
    switch (AliasKind) {
    default:
      break;
    case AliasResult::NoAlias:
      return None;
    case AliasResult::MustAlias:
    case AliasResult::PartialAlias:
      return DepCondition::always();
    }
  }

  auto *Ptr1 = getLoadStorePointerOperand(I1);
  auto *Ptr2 = getLoadStorePointerOperand(I2);
  if (!Ptr1 || !Ptr2)
    return DepCondition::always();

  auto HasDep = [&](auto *I1, auto *I2) {
    auto Dep = DI.depends(I1, I2, true);
    return Dep && Dep->isOrdered();
  };
  if (HasDep(I1, I2) && HasDep(I2, I1)) {
    auto R1 = MemRange::get(I1, SE, PSSA, LI);
    auto R2 = MemRange::get(I2, SE, PSSA, LI);
    auto *L = nearestCommonParent(R1.OrigParentLoop, R2.OrigParentLoop);
    auto PromotedR1 = promoteTo(R1, L, SE, PSSA);
    auto PromotedR2 = promoteTo(R2, L, SE, PSSA);
    if (PromotedR1 && PromotedR2) {
      if (!mayOverlap(SE, *PromotedR1, *PromotedR2))
        return None;
      if (PromotedR1->Base == PromotedR2->Base)
        return DepCondition::always();
      return DepCondition::ifOverlapping(*PromotedR1, *PromotedR2, SE, PSSA);
    }
    return DepCondition::always();
  }
  return None;
}

bool DependenceChecker::depends(
    const Item &It1, const Item &It2, DenseMap<DepEdge, DepKind> *DepEdges,
    DenseMap<DepEdge, DenseSet<DepEdge>> *InterLoopDeps) {
  if (TheVersioner && TheVersioner->isIndependent(It2, It1))
    return false;

  auto *I1 = It1.asInstruction();
  auto *I2 = It2.asInstruction();
  auto *VL1 = It1.asLoop();
  auto *VL2 = It2.asLoop();
  if (I1 && I2) {
    auto *C1 = PSSA.getInstCond(I1);
    auto *C2 = PSSA.getInstCond(I2);
    if (isExclusive(C1, C2))
      return false;

    auto Kind = getDepKind(I1, I2);
    if (DepEdges && Kind) {
      if (isImplied(C1, C2) || !Kind->isUnconditional())
        DepEdges->try_emplace({I2, I1}, *Kind);
      else
        DepEdges->try_emplace({I2, I1}, DepCondition::ifTrue(C1));
    }
    return Kind.hasValue();
  } else if (VL1 && VL2) {
    processLoop(VL1);
    processLoop(VL2);
    if (isExclusive(VL1->getLoopCond(), VL2->getLoopCond()))
      return false;

    bool FoundDep = false;
    SmallVector<DepCondition> DepConds;
    for (auto *I1 : Summaries[VL1].MemoryInsts) {
      for (auto *I2 : Summaries[VL2].MemoryInsts) {
        if (TheVersioner && TheVersioner->isIndependent(I2, I1))
          continue;
        auto Kind = getDepKind(I1, I2);
        if (Kind) {
          if (DepEdges) {
            // If the dep kind is unconditionally just return early and don't
            // bother looking for conditional deps (because removing those deps
            // will still keep the loops dependent
            if (Kind->isUnconditional()) {
              DepEdges->try_emplace({It2, It1}, DepCondition::always());
              return true;
            }

            // If any of the dep edges are unconditional, VL1 and VL2 are
            // unconditionally dependent
            if (Kind->isUnconditional()) {
              DepConds = {*Kind};
              break;
            }

            DepConds.push_back(*Kind);
            if (InterLoopDeps) {
              auto &EdgeSet = (*InterLoopDeps)[{It2, It1}];
              EdgeSet.insert({I2, I1});
              EdgeSet.insert({I1, I2});
            }
            FoundDep = true;
            continue;
          } else {
            return true;
          }
        }
      }
    }
    if (DepEdges && !DepConds.empty()) {
      DepEdges->try_emplace({It2, It1}, DepConds);
    }
    return FoundDep;
  }

  assert((I1 && VL2) || (VL1 && I2));

  // Collapse the two cases.
  // We just want to find out if there's any ordered (non-input)
  // dependences between the instruction and loop.
  bool Swapped = false;
  if (VL1 && I2) {
    I1 = I2;
    VL2 = VL1;
    Swapped = true;
  }
  assert(I1 && VL2);
  if (isExclusive(PSSA.getInstCond(I1), VL2->getLoopCond()))
    return false;

  // Don't bother if I1 doesn't touch memory
  if (!mayReadOrWriteMemory(I1))
    return false;

  // Figure out the memory instructions in VL2
  processLoop(VL2);

  bool FoundDep = false;
  SmallVector<DepCondition> DepConds;
  for (auto *I : Summaries[VL2].MemoryInsts) {
    if (TheVersioner && TheVersioner->isIndependent(I1, I))
      continue;
    auto Kind = getDepKind(I1, I);
    if (!Kind)
      continue;
    FoundDep = true;
    if (Kind->isUnconditional()) {
      DepConds = {*Kind};
      break;
    }
    if (Kind) {
      if (!DepEdges)
        return true;
      if (InterLoopDeps) {
        DepEdge Edge;
        if (!Swapped)
          Edge = {Item(VL2), Item(I1)};
        else
          Edge = {Item(I1), Item(VL2)};
        auto &EdgeSet = (*InterLoopDeps)[Edge];
        EdgeSet.insert({I1, I});
        EdgeSet.insert({I, I1});
      }
      DepConds.push_back(*Kind);
    }
  }
  if (DepEdges && !DepConds.empty()) {
    if (!Swapped)
      DepEdges->try_emplace({Item(VL2), Item(I1)}, DepConds);
    else
      DepEdges->try_emplace({Item(I1), Item(VL2)}, DepConds);
  }
  return FoundDep;
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

void DependencesFinder::visitValue(Value *V, const DepNode &Src) {
  // Special case for checking dependences of reductions
  // (which are also always loose and therefore not inserted in the IR)
  if (auto *Rdx = dyn_cast<Reduction>(V)) {
    for (auto &Elt : Rdx->Elements) {
      visitValue(Elt.Val, Rdx);
      visitCond(Elt.C, Rdx);
    }
    visitCond(Rdx->ParentCond, Rdx);
    return;
  }

  if (auto *I = dyn_cast<Instruction>(V))
    visit(I, true, Src);
}

void DependencesFinder::visitCond(const ControlCondition *C,
                                  const DepNode &Src) {
  if (!C)
    return;

  DepEdges.try_emplace({Src, C /*dst*/}, DepCondition::always());

  if (!VisitedConds.insert(C).second)
    return;

  if (auto *And = dyn_cast<ConditionAnd>(C)) {
    visitCond(And->Parent, And);
    visitValue(And->Cond, And);
    return;
  }

  auto *Or = cast<ConditionOr>(C);
  for (auto *C2 : Or->Conds)
    visitCond(C2, C);
}

void DependencesFinder::visit(Item It, bool AddDep, const DepNode &Src) {
  auto *ParentVL = PSSA->getLoopForItem(It);
  if (!VL->contains(It))
    return;

  // Find out the outermost loop of `It` that's contained by `VL`.
  while (ParentVL != VL) {
    It = ParentVL;
    ParentVL = ParentVL->getParent();
  }

  if (DepsToIgnore && DepsToIgnore->count({Src, It}))
    return;

  DepEdges.try_emplace({Src, It /*dst*/}, DepCondition::always());

  if (!Processing.insert(It).second) {
    // errs() << "!!! found cycle: " << Src << " -> " << It << '\n';
    FoundCycle = true;
    return;
  }

  EraseOnReturnGuard EraseOnReturn(Processing, It);

  // errs() << "visiting " << Src << " -> " << It << '\n';

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
      if (!I)
        continue;
      if (PSSA->getLoopForInst(I) != VL)
        continue;
      visitCond(VL->getInstCond(I), I);
      if (auto *PN = dyn_cast<PHINode>(I); PN && VL->isGatedPhi(PN)) {
        for (auto [C, V] :
             llvm::zip(VL->getPhiConditions(PN), I->operand_values())) {
          if (auto *OperandI = dyn_cast<Instruction>(V);
              OperandI && !DisablePhiSpeculation && PN->getNumOperands() > 1)
            DepEdges.try_emplace({I, OperandI}, DepCondition::ifTrue(C));

          visitCond(C, I);
          visitValue(V, I);
        }
      } else if (auto *Select = dyn_cast<SelectInst>(I)) {
        auto *IfTrue = dyn_cast<Instruction>(Select->getTrueValue());
        auto *IfFalse = dyn_cast<Instruction>(Select->getFalseValue());
        auto *C = VL->getInstCond(I);
        auto *Cond = Select->getCondition();
        if (IfTrue && !DisablePhiSpeculation) {
          DepEdges.try_emplace(
              {I, IfTrue}, DepCondition::ifTrue(PSSA->getAnd(C, Cond, true)));
        }
        if (IfFalse && !DisablePhiSpeculation) {
          DepEdges.try_emplace(
              {I, IfFalse}, DepCondition::ifTrue(PSSA->getAnd(C, Cond, false)));
        }
        for (auto *V : I->operand_values())
          visitValue(V, I);
      } else {
        for (auto *V : I->operand_values())
          visitValue(V, I);
      }
      Coupled.emplace_back(I);
    }
  } else {
    Coupled = {It};
    auto *SubVL = It.asLoop();
    for (auto *V : DepChecker.getLiveIns(SubVL))
      visitValue(V, It);
    visitCond(SubVL->getLoopCond(), It);
  }

  // Scan the memory dependences between Earliest and It
  if (mayReadOrWriteMemory(It)) {
    for (auto I = VL->toIterator(Earliest), E = VL->toIterator(It); I != E;
         ++I) {
      if (!mayReadOrWriteMemory(*I))
        continue;
      for (auto &It2 : Coupled) {
        if (VL->comesBefore(*I, It2) &&
            DepChecker.depends(*I, It2, &DepEdges, InterLoopDeps))
          visit(*I, true, It2);
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

std::unique_ptr<Versioning>
inferVersioning(ArrayRef<DepNode> Nodes, ArrayRef<Item> Deps,
                DenseMap<DepEdge, DenseSet<DepEdge>> &InterLoopDeps, VLoop *VL,
                DependenceChecker &DepChecker, const PackSet *Packs, unsigned Depth) {
  auto ComesBefore = [VL](const Item &It1, const Item &It2) {
    return VL->comesBefore(It1, It2);
  };
  Item Earliest = *std::min_element(Deps.begin(), Deps.end(), ComesBefore);

  // We don't really care about the deps found by DepFinder. We only want the
  // dep edges
  SmallVector<Item> DummyDeps;
  DependencesFinder DepFinder(DummyDeps, Earliest, VL, DepChecker, Packs,
                              &InterLoopDeps);
  bool FoundCycle = false;
  for (auto Node : Nodes)
    FoundCycle |= DepFinder.findDepForNode(Node);

  // Mapping DepNode -> int
  DenseMap<DepNode, int> SrcNodeToIds;
  DenseMap<DepNode, int> DstNodeToIds;
  SmallVector<DepNode> IdsToNodes;
  int NodeCounter = 0;
  auto TrackNode = [&](const DepNode Node) {
    auto [It, Inserted] = SrcNodeToIds.try_emplace(Node, 0);
    if (Inserted) {
      It->second = NodeCounter++;
      DstNodeToIds[Node] = NodeCounter++;
      IdsToNodes.push_back(Node);
      IdsToNodes.push_back(Node);
    }
    assert(IdsToNodes[SrcNodeToIds.lookup(Node)] == Node);
    assert(IdsToNodes[DstNodeToIds.lookup(Node)] == Node);
  };

  llvm::for_each(Nodes, TrackNode);
  llvm::for_each(Deps, TrackNode);

  // Assign ids to the nodes and edges
  int NumConditionalDeps = 0;
  for (auto [Edge, Kind] : DepFinder.getDepEdges()) {
    if (Kind.isConditional())
      NumConditionalDeps++;
    auto [Src, Dst] = Edge;
    assert(Kind);
    TrackNode(Src);
    TrackNode(Dst);
  }
  int S = ++NodeCounter;
  int T = ++NodeCounter;

  // Build the flow graph
  using namespace operations_research;
  SimpleMaxFlow MaxFlow;
  const int ConditionalWeight = 100;
  const int UnconditionalWeight = (NumConditionalDeps + 1) * 100;
  DenseMap<DepEdge, ArcIndex> EdgeToArcMap;
  // Add the dep edges
  for (auto [Edge, Kind] : DepFinder.getDepEdges()) {
    int Weight = Kind.isConditional() ? ConditionalWeight : UnconditionalWeight;
    if (Kind.getConds().size() == 1 && Kind.getConds().front().isOverlapping())
      Weight = 1;
    auto [Src, Dst] = Edge;
    if (Src == Dst)
      continue;
    int SrcId = SrcNodeToIds.lookup(Src);
    int DstId = DstNodeToIds.lookup(Dst);
    auto Arc = MaxFlow.AddArcWithCapacity(SrcId, DstId, Weight);
    EdgeToArcMap[Edge] = Arc;
  }
  // Point the deps to the sink
  for (auto N : Deps)
    MaxFlow.AddArcWithCapacity(DstNodeToIds.lookup(N), T, UnconditionalWeight);

  // Forward the dest nodes to the src nodes
  for (auto N : make_first_range(SrcNodeToIds))
    MaxFlow.AddArcWithCapacity(DstNodeToIds.lookup(N), SrcNodeToIds.lookup(N),
                               UnconditionalWeight);

  // Forward the packed instructions
  if (Packs) {
    for (auto *P : *Packs) {
      unsigned PackId = ++NodeCounter;
      for (auto *I : P->values()) {
        if (!SrcNodeToIds.count(I))
          continue;
        MaxFlow.AddArcWithCapacity(DstNodeToIds.lookup(I), PackId,
                                   UnconditionalWeight);
        MaxFlow.AddArcWithCapacity(PackId, SrcNodeToIds.lookup(I),
                                   UnconditionalWeight);
      }
    }
  }

  // Add the out-going edges from the source
  for (auto Node : Nodes)
    MaxFlow.AddArcWithCapacity(S, SrcNodeToIds.lookup(Node),
                               UnconditionalWeight);
  MaxFlow.Solve(S, T);
  std::vector<NodeIndex> SCut;
  std::vector<NodeIndex> TCut;
  MaxFlow.GetSourceSideMinCut(&SCut);
  MaxFlow.GetSinkSideMinCut(&TCut);
  DenseSet<int> SCutSet(SCut.begin(), SCut.end());
  DenseSet<int> TCutSet(TCut.begin(), TCut.end());
  errs() << "!! max-flow/min-cut: " << MaxFlow.OptimalFlow()
         << ", num conditional deps: " << NumConditionalDeps << '\n';

  /////////
#if 0
  DenseSet<std::pair<int, int>> ActiveArcs;
  for (int Arc = 0; Arc < MaxFlow.NumArcs(); Arc++) {
    if (MaxFlow.Flow(Arc) != 0) {
      ActiveArcs.insert({MaxFlow.Tail(Arc), MaxFlow.Head(Arc)});
    }
  }
  errs() << "digraph mygraph {\n";
  DenseSet<int> DrawnNodes;
  DenseSet<std::pair<int, int>> DrawnEdges;
  for (auto [N, i] : SrcNodeToIds) {
    if (SCutSet.count(i))
      errs() << "n" << i << " [label=\"" << N << "\" color=\"red\"]\n";
    else if (TCutSet.count(i))
      errs() << "n" << i << " [label=\"" << N << "\" color=\"green\"]\n";
    else
      errs() << "n" << i << " [label=\"" << N << "\" color=\"blue\"]\n";

    assert(DstNodeToIds.count(N));
    if (SCutSet.count(DstNodeToIds.lookup(N)))
      errs() << "n" << DstNodeToIds.lookup(N) << " [label=\"" << N
        << "\" color=\"red\"]\n";
    else if (TCutSet.count(DstNodeToIds.count(N)))
      errs() << "n" << DstNodeToIds.lookup(N) << " [label=\"" << N
        << "\" color=\"green\"]\n";
    else
      errs() << "n" << DstNodeToIds.lookup(N) << " [label=\"" << N
        << "\" color=\"blue\"]\n";

    DrawnNodes.insert(i);
    DrawnNodes.insert(DstNodeToIds.lookup(N));
  }

  errs() << "n" << S << "[label =\"SOURCE\"]\n";
  errs() << "n" << T << "[label =\"SINK\"]\n";
  DrawnNodes.insert(S);
  DrawnNodes.insert(T);

  for (int i = 0; i < MaxFlow.NumArcs(); i++) {
    if (!DrawnNodes.count(i))
      errs() << "n" << i << "[label = \"x\"]\n";
  }


  for (auto [Edge, Kind] : DepFinder.getDepEdges()) {
    auto [Src, Dst] = Edge;
    if (Src == Dst)
      continue;
    if (ActiveArcs.count({SrcNodeToIds.lookup(Src), DstNodeToIds.lookup(Dst)})) {
      if (Kind.isConditional())
        errs() << "n" << SrcNodeToIds.lookup(Src) << " -> n" << DstNodeToIds.lookup(Dst)
          << " [color=\"red\" style=\"dashed\"]\n";
      else
        errs() << "n" << SrcNodeToIds.lookup(Src) << " -> n" << DstNodeToIds.lookup(Dst)
          << " [color=\"red\"]\n";
    } else if (ActiveArcs.count(
                   {SrcNodeToIds.lookup(Src), DstNodeToIds.lookup(Dst)})) {
      if (Kind.isConditional())
        errs() << "n" << SrcNodeToIds.lookup(Src) << " -> n"
          << DstNodeToIds.lookup(Dst) << " [color=\"red\" style=\"dashed\"]\n";
      else
        errs() << "n" << SrcNodeToIds.lookup(Src) << " -> n"
          << DstNodeToIds.lookup(Dst) << " [color=\"red\"]\n";
    } else if (DstNodeToIds.count(Dst)) {
      errs() << "n" << SrcNodeToIds.lookup(Src) << " -> n"
             << DstNodeToIds.lookup(Dst) << '\n';
    } else {
      errs() << "n" << SrcNodeToIds.lookup(Src) << " -> n" << DstNodeToIds.lookup(Dst)
             << '\n';
    }
    DrawnEdges.insert({SrcNodeToIds.lookup(Src), DstNodeToIds.lookup(Dst)});
  }
  for (auto Node : Nodes) {
    DrawnEdges.insert({S, SrcNodeToIds.lookup(Node)});
    errs() << "n" << S << " -> n" << SrcNodeToIds.lookup(Node) << '\n';
  }
  for (auto N : Deps) {
    DrawnEdges.insert({DstNodeToIds.lookup(N), T});
    errs() << "n" << DstNodeToIds.lookup(N) << " -> n" << T << '\n';
  }

  for (int Arc = 0; Arc < MaxFlow.NumArcs(); Arc++) {
    auto Tail = MaxFlow.Tail(Arc); 
    auto Head = MaxFlow.Head(Arc);
    if (!DrawnEdges.count({Tail, Head}))
      errs() << "n" << Tail << " -> n" << Head << '\n';
  }
  errs() << "}\n";
#endif
  ///////////
  if (MaxFlow.OptimalFlow() >= UnconditionalWeight ||
      MaxFlow.OptimalFlow() > 300) {
    errs() << "max flow eight = " << MaxFlow.OptimalFlow()
           << ", unconditional weight = " << UnconditionalWeight << '\n';
    return nullptr;
  }

  auto Ver = std::make_unique<Versioning>();
  Ver->ParentLoop = VL;
  Ver->Primary = nullptr;

  // If we version any edges, remember their sources
  SmallVector<DepNode> Sources;
  // Keep track of the computations that are required to compute the versioning
  // conditions
  SmallVector<DepNode> CondComputations;
  SCEVDepFinder SDF(DepChecker.getSE(), VL, CondComputations);
  // Find the cut edges; abort if any of the cut edges are unconditional
  for (auto [Edge, Kind] : DepFinder.getDepEdges()) {
    auto [Src, Dst] = Edge;
    if (Src == Dst)
      continue;
    bool SrcInSCut = SCutSet.count(SrcNodeToIds.lookup(Src));
    bool DstInSCut = SCutSet.count(DstNodeToIds.lookup(Dst));
    assert(EdgeToArcMap.count(Edge));
    if (SrcInSCut && !DstInSCut) {
      // Can't cut an unconditional edge
      if (Kind.isUnconditional())
        return nullptr;
      // Figure out the deps required to compute the versioning conditions
      for (auto &DepCond : Kind.getConds()) {
        // FIXME: also deal with overlap checks
        if (auto *C = DepCond.getCondition()) {
          CondComputations.push_back(C);
        } else {
          assert(DepCond.isOverlapping());
          auto [R1, R2] = DepCond.getRanges();
          SDF.visit(R1.Base);
          SDF.visit(R1.Size);
          SDF.visit(R2.Base);
          SDF.visit(R2.Size);
        }
      }
      Ver->CutEdges.try_emplace(Edge, Kind.getConds());
      Sources.push_back(Src);
    }
  }

  DenseMap<DepNode, std::vector<DepNode>> DestToSourceMap;
  for (auto [Src, Dst] : llvm::make_first_range(DepFinder.getDepEdges())) {
    DestToSourceMap[Dst].push_back(Src);
  }

  // Do a backward traversal to find, transitively, all of the sources (of the
  // versioned edges), which also need to be versioned
  DenseSet<DepNode> Visited(Deps.begin(), Deps.end());
  while (!Sources.empty()) {
    auto Src = Sources.pop_back_val();
    if (!Visited.insert(Src).second)
      continue;
    Ver->Nodes.push_back(Src);
    if (auto It = DestToSourceMap.find(Src); It != DestToSourceMap.end())
      Sources.append(It->second.begin(), It->second.end());
  }
  llvm::append_range(Ver->Nodes, Nodes);

  // Do seconary versioning in case the computation of the versioning conditions
  // conditionally depend on the boundary items (in which case there would be
  // imposible to schedule the versioning checks).
  if (!CondComputations.empty()) {
    if (Depth > 1)
      return nullptr;
    DenseSet<DepNode> NewNodes(CondComputations.begin(),
                               CondComputations.end());
    // If any of the condition computations overlap with the original nodes, it
    // means there's a circular dep
    if (any_of(Nodes, [&](auto N) { return NewNodes.count(N); }))
      return nullptr;
    auto SecondaryVer = inferVersioning(CondComputations, Deps, InterLoopDeps,
                                        VL, DepChecker, Packs, Depth+1);
    if (!SecondaryVer)
      return nullptr;
#if 0
    errs() << "<<<<< dumping secondary versioning\n";
    errs() << "Node:\n";
    for (auto &N : SecondaryVer->Nodes)
      errs() << N << '\n';
    for (auto [Edge, Conds] : SecondaryVer->CutEdges) {
      auto [Src, Dst] = Edge;
      errs() << "Secondary cut edge: " << Src << " -> " << Dst << '\n';
      for (auto &Cond : Conds)
        errs() << "\t " << Cond << '\n';
    }
    errs() << ">>>>>>>\n";
#endif
    if (!SecondaryVer->CutEdges.empty()) {
      SecondaryVer->Primary = Ver.get();
      Ver->Secondary = std::move(SecondaryVer);
    }
  }

  return Ver;
}

static bool haveSameParent(ArrayRef<VLoop *> Loops) {
  if (Loops.empty())
    return true;

  auto *Parent = Loops.front()->getParent();
  for (auto *VL : drop_begin(Loops))
    if (VL->getParent() != Parent)
      return false;
  return true;
};

raw_ostream &operator<<(raw_ostream &OS, const DepCondition &DepCond) {
  if (DepCond.isOverlapping()) {
    auto [R1, R2] = DepCond.getRanges();
    OS << R1 << " OVERLAPS WITH " << R2;
  } else {
    OS << *DepCond.getCondition();
  }
  return OS;
}

void ConditionSetTracker::mergeObjectsFromConditions(
    const DepCondition &LeaderCond, const DepCondition &MergedCond,
    bool Swapped) {
  assert(MergedObjects.count(LeaderCond));
  auto &[Set1, Set2] = MergedObjects[LeaderCond];
#if 0
  errs() << "Merging " << LeaderCond << "\n\twith " << MergedCond
         << "\n\t orig pointers = " << *LeaderCond.getRanges().first.Access << ", "
         << *LeaderCond.getRanges().second.Access
         << "\n\t incoming pointers = " << *MergedCond.getRanges().first.Access
         << ", " << *MergedCond.getRanges().second.Access << '\n';
#endif
  assert(MergedObjects.count(MergedCond));
  auto &[SetA, SetB] = MergedObjects[MergedCond];
  assert(SetA.count(MergedCond.getRanges().first.Access));
  assert(SetB.count(MergedCond.getRanges().second.Access));

  if (Swapped) {
    Set1.insert(SetB.begin(), SetB.end());
    Set2.insert(SetA.begin(), SetA.end());
  } else {
    Set1.insert(SetA.begin(), SetA.end());
    Set2.insert(SetB.begin(), SetB.end());
  }

  if (MergedCond != LeaderCond)
    MergedObjects.erase(MergedCond);
}

void ConditionSetTracker::addImpl(const DepCondition &DepCond) {
  ConditionSet *Set = nullptr;
  for (auto &CS : CondSets) {
    bool Swapped;
    if (Optional<DepCondition> Coalesced =
            DepCondition::coalesce(CS.DepCond, DepCond, SE, PSSA, Swapped)) {
      mergeObjectsFromConditions(CS.DepCond, DepCond, Swapped);
      // Transfer the entry of CS.DepCond to *Coalesced
      // (which in general can be different from CS.DepCond after coalescing)
      auto It = MergedObjects.find(CS.DepCond);
      assert(It != MergedObjects.end());
      auto Tmp = std::move(It->second);
      MergedObjects.erase(It);
      MergedObjects[*Coalesced] = std::move(Tmp);
      CS.DepCond = *Coalesced;
      assert(MergedObjects.count(CS.DepCond));
      Set = &CS;
      break;
    }
  }

  // If we can't coalesce, just create a singleton set
  if (!Set)
    Set = newSet(DepCond);
  // Forward the condition to the set
  CondToSetMap[DepCond] = Set;
}

static const SCEV *diffRanges(ScalarEvolution &SE, const MemRange &R1,
                              const MemRange &R2) {
  if (R1.ParentLoop != R2.ParentLoop)
    return nullptr;
  // TODO: technically the one with bigger size *subsumes* the one with a
  // smaller size
  if (R1.Size != R2.Size)
    return nullptr;
  auto *Diff = SE.getMinusSCEV(R1.Base, R2.Base);
  if (isa<SCEVCouldNotCompute>(Diff))
    return nullptr;
  return Diff;
}

static bool checksAreEquivalent(ScalarEvolution &SE,
                                const std::pair<MemRange, MemRange> &Check1,
                                const std::pair<MemRange, MemRange> &Check2,
                                bool &Swapped) {
  Swapped = false;
  const SCEV *Diff1;
  const SCEV *Diff2;
  Diff1 = diffRanges(SE, Check1.first, Check2.first);
  if (!Diff1)
    goto retry;
  Diff2 = diffRanges(SE, Check1.second, Check2.second);
  if (!Diff2)
    goto retry;
  if (Diff1 == Diff2)
    return true;
retry:
  Swapped = true;
  Diff1 = diffRanges(SE, Check1.first, Check2.second);
  if (!Diff1)
    return false;
  Diff2 = diffRanges(SE, Check1.second, Check2.first);
  if (!Diff2)
    return false;
  return Diff1 == Diff2;
}

// Given a list of redundant conditions, select a canonical one
// Only works on range checks currently.
static DepCondition getCanonicalCondition(ScalarEvolution &SE,
                                          ArrayRef<DepCondition> DepConds) {
  auto It = std::min_element(
      DepConds.begin(), DepConds.end(), [&](auto &DepCond1, auto &DepCond2) {
        return isLessThan(SE, DepCond1.getRanges().first.Base,
                          DepCond2.getRanges().first.Base);
      });
  assert(It != DepConds.end());
  return *It;
}

std::vector<DepCondition>
ConditionSetTracker::dedupConditions(ArrayRef<DepCondition> DepConds) {
  std::vector<DepCondition> NewConds;
  std::vector<DepCondition> Checks;
  DenseSet<DepCondition> Visited;
  for (auto &DepCond : DepConds) {
    if (!Visited.insert(DepCond).second)
      continue;
    if (!DepCond.isOverlapping()) {
      NewConds.push_back(DepCond);
      continue;
    }
    bool IsRedundant = false;
    auto Check = DepCond.getRanges();
    for (auto &Check2 : Checks) {
      bool Swapped;
      if (checksAreEquivalent(SE, Check, Check2.getRanges(), Swapped)) {
        RedundantConds.insert({DepCond, Check2});
        IsRedundant = true;
        mergeObjectsFromConditions(Check2 /*=LeaderCond*/, DepCond, Swapped);
        break;
      }
    }
    if (!IsRedundant) {
      NewConds.push_back(DepCond);
      Checks.push_back(DepCond);
    }
  }
  return NewConds;
}

const DepCondition &
ConditionSetTracker::getCoalescedCondition(const DepCondition &DepCond) {
  if (!Worklist.empty()) {
    // Record the objects that we are tracking with the overlapping checks
    for (auto &DepCond : Worklist) {
      if (!DepCond.isOverlapping())
        continue;
      auto [R1, R2] = DepCond.getRanges();
      MergedObjects[DepCond].first.insert(R1.Access);
      MergedObjects[DepCond].second.insert(R2.Access);
    }

    Worklist = dedupConditions(Worklist);

    // At this point, redundant conds maps a condition to an arbitrary leader.
    // We want to elect a new leader by choosing the check with the leftmost
    // first range. Mapping a leader condition -> list of conditions equivalent
    // to the leader
    MapVector<DepCondition, std::vector<DepCondition>> EquivalentConds;
    for (auto [DepCond, LeaderCond] : RedundantConds) {
      if (EquivalentConds[LeaderCond].empty())
        EquivalentConds[LeaderCond].push_back(LeaderCond);
      EquivalentConds[LeaderCond].push_back(DepCond);
    }

    for (auto [OldLeader, Conds] : EquivalentConds) {
      auto NewLeader = getCanonicalCondition(SE, Conds);
      for (auto &DepCond : Conds) {
        auto [It, Inserted] = RedundantConds.insert({DepCond, NewLeader});
        if (!Inserted)
          It->second = NewLeader;
      }
      bool Swapped;
      checksAreEquivalent(SE, OldLeader.getRanges(), NewLeader.getRanges(),
                          Swapped);
      if (NewLeader != OldLeader) {
        auto Tmp = std::move(MergedObjects[OldLeader]);
        MergedObjects.erase(OldLeader);
        MergedObjects[NewLeader] = std::move(Tmp);
      }
    }

    for (auto &DepCond2 : Worklist) {
      auto It = RedundantConds.find(DepCond2);
      if (It != RedundantConds.end())
        addImpl(It->second);
      else
        addImpl(DepCond2);
    }
    Worklist.clear();
  }

  auto It = RedundantConds.count(DepCond)
                ? CondToSetMap.find(RedundantConds.find(DepCond)->second)
                : CondToSetMap.find(DepCond);
  if (It != CondToSetMap.end())
    return It->second->DepCond;
  return DepCond;
}

std::pair<ConditionSetTracker::ValueSet *, ConditionSetTracker::ValueSet *>
ConditionSetTracker::getMergedObjects(Value *A, Value *B) {
  // errs() << "Getting merged objects for " << *A << ", " << *B << '\n';
  for (auto &KV : MergedObjects) {
    auto DepCond = KV.first;
    if (!(DepCond == getCoalescedCondition(DepCond)))
      continue;
    auto &[SetA, SetB] = KV.second;
    if (SetA.contains(A) && SetB.contains(B))
      return {&SetA, &SetB};
    if (SetB.contains(A) && SetA.contains(B))
      return {&SetB, &SetA};
  }
  llvm_unreachable("A and B not merged");
}

bool findNecessaryDeps(VersioningPlan &VerPlan, ArrayRef<Instruction *> Insts,
                       PredicatedSSA &PSSA, DependenceChecker &DepChecker,
                       const PackSet *Packs,
                       IndependentItemsTracker *IndependentItems) {
  SmallVector<DepNode> Nodes;
  SmallVector<Item> Items;
  auto *ParentVL = PSSA.getLoopForInst(Insts.front());
  if (all_of(Insts, [ParentVL, &PSSA](auto *I) {
        return ParentVL == PSSA.getLoopForInst(I);
      })) {
    Nodes.assign(Insts.begin(), Insts.end());
    Items.assign(Insts.begin(), Insts.end());
  } else {
    SmallDenseMap<VLoop *, TinyPtrVector<Instruction *>, 8> LoopToInstsMap;
    for (auto *I : Insts) {
      auto *VL = PSSA.getLoopForInst(I);
      LoopToInstsMap[VL].push_back(I);
    }

    // For instructions that come from the same loops,
    // make sure that they are independent
    for (auto &Insts2 : make_second_range(LoopToInstsMap))
      if (Insts2.size() > 1 &&
          !findNecessaryDeps(VerPlan, Insts2, PSSA, DepChecker, Packs))
        return false;

    // Make sure the disjoint parent loops are independent
    SmallVector<VLoop *, 8> Loops(make_first_range(LoopToInstsMap));
    while (!haveSameParent(Loops)) {
      for (auto &VL : Loops) {
        VL = VL->getParent();
        // This only happens when the instructions have different nesting depth,
        // in which case we just bail out.
        if (!VL)
          return false;
      }
    }

    // Abort if the any of the loops are exclusive
    for (unsigned i = 0; i < Loops.size(); i++) {
      auto *C1 = Loops[i]->getLoopCond();
      for (unsigned j = i + 1; j < Loops.size(); j++) {
        auto *C2 = Loops[j]->getLoopCond();
        if (isExclusive(C1, C2))
          return false;
      }
    }

    Nodes.assign(Loops.begin(), Loops.end());
    Items.assign(Loops.begin(), Loops.end());
    ParentVL = Loops.front()->getParent();
  }

  // See if we have checked the independence of `Items` previously
  if (IndependentItems && IndependentItems->contains(Items))
    return true;

  auto Ver = inferVersioning(Nodes, Items, VerPlan.InterLoopDeps, ParentVL,
                             DepChecker, Packs);
  if (!Ver)
    return false;

  if (IndependentItems)
    IndependentItems->add(Items);

  if (!Ver->CutEdges.empty())
    VerPlan.Versionings.push_back(std::move(Ver));
  return true;
}

void IndependentItemsTracker::add(ArrayRef<Item> Items) {
  Checked.insert(std::vector<Item>(Items.begin(), Items.end()));
}

bool IndependentItemsTracker::contains(ArrayRef<Item> Items) {
  return Checked.find_as(Items) != Checked.end();
}

Versioning::Versioning(const Versioning &Ver)
    : Nodes(Ver.Nodes), CutEdges(Ver.CutEdges),
      ImpliedCutEdges(Ver.ImpliedCutEdges), ParentLoop(Ver.ParentLoop) {
  if (Ver.Secondary) {
    Secondary = std::make_unique<Versioning>(*Ver.Secondary);
    Secondary->Primary = this;
  }
}
