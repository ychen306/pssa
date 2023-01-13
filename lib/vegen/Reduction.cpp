#include "Reduction.h"
#include "pssa/PSSA.h"
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

raw_ostream &operator<<(raw_ostream &OS, const Reduction &Rdx) {
  OS << "(" << getName(Rdx.Kind);
  for (auto &Elt : Rdx.Leaves) {
    Value *V = Elt.Val;
    if (V->hasName())
      OS << " " << V->getName();
    else
      OS << " " << *V;
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
      auto Rdx = matchReduction(I);
      if (!Rdx)
        continue;
      Reduction *RdxA = ValueToReductionMap.lookup(Rdx->A);
      Reduction *RdxB = ValueToReductionMap.lookup(Rdx->B);
      bool CanMergeA = RdxA && RdxA->Kind == Rdx->Kind && Rdx->A->hasOneUse();
      bool CanMergeB = RdxB && RdxB->Kind == Rdx->Kind && Rdx->B->hasOneUse();
      assert(!CanMergeA || RdxA->Root == Rdx->A);
      assert(!CanMergeB || RdxB->Root == Rdx->B);
      Reduction *Merged = nullptr;
      if (CanMergeA) {
        if (CanMergeB) {
          RdxA->Leaves.append(RdxB->Leaves);
        } else {
          RdxA->Leaves.push_back(Rdx->B);
          // forward B to A's reduction group
          ValueToReductionMap[Rdx->B] = RdxA;
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
      Merged->Root = I;
      continue;
    }
    assert(It.asLoop());
    processLoop(It.asLoop());
  }

  // Inspect the Mu nodes and see if we can
  // generalize some of the "straightline" reductions into loop reductions
}

ReductionInfo::ReductionInfo(PredicatedSSA &PSSA) {
  processLoop(&PSSA.getTopLevel());
}
