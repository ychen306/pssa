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
  for (auto &Elt : Rdx.Leaves) {
    Value *V = Elt.Val;
    if (V->hasName())
      OS << " " << V->getName();
    else
      OS << " (" << *V << ')';
    if (Elt.Loops.empty())
      continue;
    OS << ":" << getName(Elt.Loops.front());
    for (auto *VL : drop_begin(Elt.Loops))
      OS << "," << getName(VL);
  }
  OS << ")";
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

void ReductionInfo::processLoop(VLoop *VL) {
  for (auto &It : VL->items()) {
    if (auto *I = It.asInstruction()) {
      if (auto *PN = dyn_cast<PHINode>(I)) {
        if (PN->getNumOperands() == 1) {
          // detect identity phis created by LCSSA
          auto *Val = PN->getIncomingValue(0);
          if (auto *Rdx = ValueToReductionMap.lookup(Val)) {
            Rdx->Roots.insert(PN);
            ValueToReductionMap[PN] = Rdx;
          }
        }
      }

      auto Rdx = matchReduction(I);
      if (!Rdx)
        continue;
      Reduction *RdxA = ValueToReductionMap.lookup(Rdx->A);
      Reduction *RdxB = ValueToReductionMap.lookup(Rdx->B);
      bool CanMergeA = RdxA && RdxA->Kind == Rdx->Kind && Rdx->A->hasOneUse();
      bool CanMergeB = RdxB && RdxB->Kind == Rdx->Kind && Rdx->B->hasOneUse();
      assert(!CanMergeA || RdxA->Roots.count(Rdx->A));
      assert(!CanMergeB || RdxB->Roots.count(Rdx->B));
      Reduction *Merged = nullptr;
      if (CanMergeA) {
        if (CanMergeB) {
          RdxA->Leaves.append(RdxB->Leaves);
          // forward B to A's reduction group
          RdxB->Roots.clear();
          ValueToReductionMap[Rdx->B] = RdxA;
        } else {
          RdxA->Leaves.push_back(Rdx->B);
        }
        Merged = RdxA;
      } else if (CanMergeB) {
        RdxB->Leaves.push_back(Rdx->A);
        Merged = RdxB;
      } else {
        Reduction *AB = newReduction();
        AB->Kind = Rdx->Kind;
        AB->Leaves = {Rdx->A, Rdx->B};
        Merged = AB;
      }
      ValueToReductionMap[I] = Merged;
      Merged->Roots.insert(I);
      continue;
    }
    assert(It.asLoop());
    processLoop(It.asLoop());
  }

  // Inspect the Mu nodes and see if we can
  // generalize some of the "straightline" reductions into loop reductions
  for (auto *Mu : VL->mus()) {
    if (!Mu->hasOneUse())
      continue;
    // Generalize instances of `rec = (+ mu(init, rec) x0 x1 ...)`
    // into `rec = (+ init x0^L x1^L ...)`
    auto *Init = Mu->getIncomingValue(0);
    auto *Rec = Mu->getIncomingValue(1);
    auto *Rdx = ValueToReductionMap.lookup(Rec);

    if (!Rdx || !Rdx->Roots.count(Rec))
      continue;

    // Make sure `Rec` is only used once inside `VL` (by `Mu`)
    if (any_of(Rec->users(), [&](User *U) {
          return U != Mu && VL->contains(cast<Instruction>(U));
        }))
      continue;
    auto It = llvm::find_if(Rdx->Leaves, [Mu](const ReductionElement &Elt) {
      return Elt.Val == Mu && Elt.Loops.empty();
    });
    if (It == Rdx->Leaves.end())
      continue;
    for (auto It2 = Rdx->Leaves.begin(), End = Rdx->Leaves.end(); It2 != End;
         ++It2) {
      if (It2 == It)
        continue;
      It2->Loops.push_back(VL);
    }
    Rdx->Leaves.erase(It);
    auto *InitRdx = ValueToReductionMap.lookup(Init);
    // Merge init's reduction group if it has one
    if (InitRdx && InitRdx->Kind == Rdx->Kind && Init->hasOneUse()) {
      Rdx->Leaves.append(InitRdx->Leaves);
      // Forward init's reduction group to rdx
      InitRdx->Roots.clear();
      ValueToReductionMap[Init] = Rdx;
    } else {
      Rdx->Leaves.push_back(Init);
    }
  }
}

ReductionInfo::ReductionInfo(PredicatedSSA &PSSA) {
  processLoop(&PSSA.getTopLevel());
}
