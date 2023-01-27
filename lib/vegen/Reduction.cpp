#include "Reduction.h"
#include "pssa/PSSA.h"
#include "llvm/Analysis/LoopInfo.h"
#include "llvm/IR/PatternMatch.h"
#include "llvm/Support/raw_ostream.h"

using namespace llvm;
using namespace PatternMatch;

static StringRef getName(RecurKind Kind) {
  switch (Kind) {
  case RecurKind::Add:
    return "add";
  case RecurKind::Mul:
    return "mul";
  case RecurKind::Or:
    return "or";
  case RecurKind::And:
    return "and";
  case RecurKind::Xor:
    return "xor";
  case RecurKind::SMin:
    return "smin";
  case RecurKind::SMax:
    return "smax";
  case RecurKind::UMin:
    return "smin";
  case RecurKind::UMax:
    return "smax";
  case RecurKind::FAdd:
    return "fadd";
  case RecurKind::FMul:
    return "fmul";
  case RecurKind::FMin:
    return "smin";
  case RecurKind::FMax:
    return "smax";
  default:
    llvm_unreachable("unexpected recurrence type");
  }
}

// Identify loop by their headers
static StringRef getName(VLoop *VL) {
  auto *PSSA = VL->getPSSA();
  return PSSA->getOrigLoop(VL)->getHeader()->getName();
}

raw_ostream &operator<<(raw_ostream &OS, const Reduction &Rdx) {
  OS << "(" << getName(Rdx.Kind);
  for (auto &Elt : Rdx.Elements) {
    Value *V = Elt.Val;
    if (V->hasName())
      OS << " " << V->getName();
    else
      OS << " (" << *V << ')';
    bool IsFirst = true;
    for (auto *VL : Elt.Loops) {
      if (IsFirst) {
        OS << ":";
        IsFirst = false;
      } else {
        OS << ",";
      }
      OS << getName(VL);
    }
    if (Elt.C)
      OS << "@" << *Elt.C;
  }
  OS << ')';
  return OS;
}

struct SimpleReduction {
  RecurKind Kind;
  Value *A;
  Value *B;
};

Optional<SimpleReduction> matchReduction(Instruction *I) {
  SimpleReduction Rdx;
  auto A = m_Value(Rdx.A);
  auto B = m_Value(Rdx.B);
  if (match(I, m_Add(A, B)))
    Rdx.Kind = RecurKind::Add;
  else if (match(I, m_Mul(A, B)))
    Rdx.Kind = RecurKind::Mul;
  else if (match(I, m_Or(A, B)))
    Rdx.Kind = RecurKind::Or;
  else if (match(I, m_And(A, B)))
    Rdx.Kind = RecurKind::Or;
  else if (match(I, m_Xor(A, B)))
    Rdx.Kind = RecurKind::Xor;
  else if (match(I, m_SMin(A, B)))
    Rdx.Kind = RecurKind::SMin;
  else if (match(I, m_SMax(A, B)))
    Rdx.Kind = RecurKind::SMax;
  else if (match(I, m_UMin(A, B)))
    Rdx.Kind = RecurKind::UMin;
  else if (match(I, m_UMax(A, B)))
    Rdx.Kind = RecurKind::UMax;
  else if (match(I, m_FAdd(A, B)))
    Rdx.Kind = RecurKind::FAdd;
  else if (match(I, m_FMul(A, B)))
    Rdx.Kind = RecurKind::FMul;
  else if (match(I, m_OrdFMin(A, B)))
    Rdx.Kind = RecurKind::FMin;
  else if (match(I, m_OrdFMax(A, B)))
    Rdx.Kind = RecurKind::FMax;
  else
    return None;

  return Rdx;
}

// Detect the case when the elements of `B` is a supper set of `A`.
// Return the set difference
Optional<std::set<ReductionElement>> getDifference(Reduction *A, Reduction *B) {
  std::set<ReductionElement> AElts(A->Elements.begin(), A->Elements.end());
  std::set<ReductionElement> BElts(B->Elements.begin(), B->Elements.end());
  if (!all_of(AElts, [&](auto &Elt) { return BElts.count(Elt); }))
    return None;
  std::set<ReductionElement> Diff;
  for (auto &Elt : BElts)
    if (!AElts.count(Elt))
      Diff.insert(Elt);
  return Diff;
}

// Detect the case where Init is one of Rdx's reduction element and return the
// difference
Optional<std::set<ReductionElement>>
getDifference(Value *Init, const ControlCondition *C, Reduction *Rdx) {
  ReductionElement Elt0(Init, C);
  std::set<ReductionElement> Elts(Rdx->Elements.begin(), Rdx->Elements.end());
  if (!Elts.count(Elt0))
    return None;
  std::set<ReductionElement> Diff;
  for (auto &Elt : Elts) {
    if (Elt == Elt0)
      continue;
    Diff.insert(Elt);
  }
  return Diff;
}

// Get C1 /\ C2
const ControlCondition *getAnd(PredicatedSSA *PSSA, const ControlCondition *C1,
                               const ControlCondition *C2) {
  if (isImplied(C1, C2))
    return C2;
  if (isImplied(C2, C1))
    return C1;
  return PSSA->concat(C1, C2);
}

void ReductionInfo::processLoop(VLoop *VL) {
  auto MatchPhiReduction = [&](PHINode *PN, unsigned A,
                               unsigned B) -> Reduction * {
    // Detect the following pattern:
    //   phi [not c: A, c: B]
    // where the elements of `B` is a superset of `A`
    // and assign the phi node the following reduction
    //   (+ <elts of rdx1> <diff1 predicated with c>)
    auto *Rdx1 = ValueToReductionMap.lookup(PN->getIncomingValue(A));
    auto *Rdx2 = ValueToReductionMap.lookup(PN->getIncomingValue(B));
    const ControlCondition *C = VL->getPhiCondition(PN, B);
    if (!Rdx2)
      return nullptr;
    // TODO: detect even when rdx1 and rdx2 are swapped
    auto Diff = Rdx1 ? getDifference(Rdx1, Rdx2)
                     : getDifference(PN->getIncomingValue(A),
                                     VL->getPhiCondition(PN, B), Rdx2);
    if (!Diff)
      return nullptr;
    auto *Merged = copyReduction(Rdx2);
    for (auto &Elt : Merged->Elements) {
      if (!Diff->count(Elt)) {
        // in the case the A is not a reduction
        // but showed up in both side,
        // we set its condition to be disjunction of both side
        // (which is just the condition of phi node);
        if (!Rdx1)
          Elt.C = VL->getInstCond(PN);
        continue;
      }
      // Strengthen the reduction condition based on the phi
      // but skip if the condition happens to be the condition of the outermost loop
      // that we are reducing over (in which case it's redundant)
      if (Elt.Loops.empty() || Elt.Loops.back()->getLoopCond() != C) {
        // FIXME: it's possible that this creates cyclic control dependences
        // maybe only do this transformation if one of C and Elt.C implies the other
        Elt.C = getAnd(VL->getPSSA(), C, Elt.C);
      }
    }
    Merged->ParentCond = VL->getInstCond(PN);
    Merged->ParentLoop = VL;
    return Merged;
  };

  for (auto &It : VL->items()) {
    if (auto *I = It.asInstruction()) {
      if (auto *PN = dyn_cast<PHINode>(I)) {
        if (PN->getNumOperands() == 1) {
          // detect identity phis created by LCSSA
          auto *Val = PN->getIncomingValue(0);
          if (auto *Rdx = ValueToReductionMap.lookup(Val)) {
            ValueToReductionMap[PN] = Rdx;
            if (LiveOutRdxs.count(Val)) {
              auto [LiveOutRdx, ProducerVL] = LiveOutRdxs[Val];
              // Ensure that this is indeed a LCSSA Phi
              if (!ProducerVL->contains(PN))
                ValueToReductionMap[PN] = LiveOutRdx;
            }
          }
        } else if (PN->getNumOperands() == 2) {
          if (auto *Rdx = MatchPhiReduction(PN, 0, 1))
            ValueToReductionMap[PN] = Rdx;
          else if (auto *Rdx = MatchPhiReduction(PN, 1, 0))
            ValueToReductionMap[PN] = Rdx;
        }
      }

      auto Rdx = matchReduction(I);
      if (!Rdx)
        continue;
      Reduction *RdxA = ValueToReductionMap.lookup(Rdx->A);
      Reduction *RdxB = ValueToReductionMap.lookup(Rdx->B);
      bool CanMergeA =
          RdxA && RdxA->Kind == Rdx->Kind /* && Rdx->A->hasOneUse()*/;
      bool CanMergeB =
          RdxB && RdxB->Kind == Rdx->Kind /* && Rdx->B->hasOneUse()*/;
      auto *C = VL->getInstCond(I);
      Reduction *Merged = newReduction(I->getType());
      if (CanMergeA) {
        Merged->copyFrom(RdxA);
        if (CanMergeB) {
          llvm::append_range(Merged->Elements, RdxB->Elements);
        } else {
          Merged->Elements.emplace_back(Rdx->B, C);
        }
      } else if (CanMergeB) {
        Merged->copyFrom(RdxB);
        Merged->Elements.emplace_back(Rdx->A, C);
      } else {
        Merged->Kind = Rdx->Kind;
        Merged->Elements = {ReductionElement(Rdx->A, C),
                            ReductionElement(Rdx->B, C)};
      }
      Merged->ParentLoop = VL;
      Merged->ParentCond = C;
      ValueToReductionMap[I] = Merged;
      continue;
    }
    assert(It.asLoop());
    processLoop(It.asLoop());
  }

  // Inspect the Mu nodes and see if we can
  // generalize some of the "straightline" reductions into loop reductions
  for (auto *Mu : VL->mus()) {
    // if (!Mu->hasOneUse())
    //   continue;

    // Generalize instances of `rec = (+ mu(init, rec) x0 x1 ...)`
    // into `rec = (+ init x0^L x1^L ...)`
    auto *Init = Mu->getIncomingValue(0);
    auto *Rec = Mu->getIncomingValue(1);
    auto *OrigRdx = ValueToReductionMap.lookup(Rec);

    if (!OrigRdx)
      continue;

    auto *Rdx = copyReduction(OrigRdx);

    // Make sure `Rec` is only used once inside `VL` (by `Mu`)
    if (any_of(Rec->users(), [&](User *U) {
          return U != Mu && VL->contains(cast<Instruction>(U));
        }))
      continue;
    auto It = llvm::find_if(Rdx->Elements, [Mu](const ReductionElement &Elt) {
      return Elt.Val == Mu && !Elt.reducedByLoop();
    });
    if (It == Rdx->Elements.end())
      continue;

    for (auto It2 = Rdx->Elements.begin(), End = Rdx->Elements.end();
         It2 != End; ++It2) {
      if (It2 == It)
        continue;
      It2->Loops.push_back(VL);
    }
    Rdx->Elements.erase(It);

    auto *InitRdx = ValueToReductionMap.lookup(Init);
    // Merge init's reduction group if it has one
    if (InitRdx && InitRdx->Kind == Rdx->Kind /* && Init->hasOneUse()*/) {
      // FIXME: need to strengthen the condition of these elements with the loop
      // cond of VL
      llvm::append_range(Rdx->Elements, InitRdx->Elements);
    } else {
      Rdx->Elements.emplace_back(Init, nullptr);
    }
    Rdx->ParentLoop = VL->getParent();
    Rdx->ParentCond = VL->getLoopCond();
    // If we use `Rec` outside of `VL`, we are actually using the reduction `Rdx`
    LiveOutRdxs[Rec] = {Rdx, VL};
  }
}

ReductionInfo::ReductionInfo(PredicatedSSA &PSSA) {
  processLoop(&PSSA.getTopLevel());
#ifndef NDEBUG
  // Check that we recorded the context of reduction properly
  for (auto [V, Rdx] : ValueToReductionMap) {
    auto *I = cast<Instruction>(V);
    assert(PSSA.getInstCond(I) == Rdx->ParentCond);
    assert(PSSA.getLoopForInst(I) == Rdx->ParentLoop);
  }
#endif
}
