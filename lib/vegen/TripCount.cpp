#include "llvm/Analysis/LoopInfo.h"
#include "llvm/Analysis/ScalarEvolution.h"
#include "llvm/Analysis/ScalarEvolutionExpressions.h"
#include "llvm/IR/PatternMatch.h"

using namespace llvm;

bool haveIdenticalTripCounts(const Loop *L1, const Loop *L2,
                             ScalarEvolution &SE) {
  if (L1 == L2)
    return true;

  auto *TripCount1 = SE.getBackedgeTakenCount(L1);
  auto *TripCount2 = SE.getBackedgeTakenCount(L2);
  if (!isa<SCEVCouldNotCompute>(TripCount1) &&
      !isa<SCEVCouldNotCompute>(TripCount2) && TripCount1 == TripCount2)
    return true;

  auto *BB1 = L1->getExitingBlock();
  if (!BB1)
    return false;

  auto *BB2 = L2->getExitingBlock();
  if (!BB2)
    return false;

  using namespace PatternMatch;

  Value *LHS1, *RHS1;
  ICmpInst::Predicate Pred1;
  if (!match(BB1->getTerminator(),
             m_Br(m_ICmp(Pred1, m_Value(LHS1), m_Value(RHS1)), m_BasicBlock(),
                  m_BasicBlock())))
    return false;

  Value *LHS2, *RHS2;
  ICmpInst::Predicate Pred2;
  if (!match(BB2->getTerminator(),
             m_Br(m_ICmp(Pred2, m_Value(LHS2), m_Value(RHS2)), m_BasicBlock(),
                  m_BasicBlock())))
    return false;

  if (Pred1 != Pred2)
    return false;

  if (RHS1 != RHS2)
    return false;

  auto *Expr1 = dyn_cast<SCEVAddRecExpr>(SE.getSCEV(LHS1));
  if (!Expr1 || !Expr1->isAffine() || Expr1->getLoop() != L1)
    return false;

  auto *Expr2 = dyn_cast<SCEVAddRecExpr>(SE.getSCEV(LHS2));
  if (!Expr2 || !Expr1->isAffine() || Expr2->getLoop() != L2)
    return false;

  return Expr1->getOperand(0) == Expr2->getOperand(0) &&
         Expr1->getOperand(1) == Expr2->getOperand(1);
}
