#include "Matcher.h"
#include "InstructionDescriptor.h"
#include "LooseInstructionTable.h"
#include "Reducer.h"
#include "Reduction.h"
#include "llvm/ADT/BitVector.h"
#include "llvm/IR/PatternMatch.h"
#include <numeric> // std::iota

using namespace llvm;

static std::pair<Use *, Use *> getBinaryOperands(Instruction *I) {
  auto *BO = cast<BinaryOperator>(I);
  return {&BO->getOperandUse(0), &BO->getOperandUse(1)};
}

// FIXME: deal with operands of non-binary inst
// Detect a binary, unconditional reduction
static Optional<std::pair<Use *, Use *>> matchSimpleReduction(RecurKind Kind,
                                                              Value *V) {
  using namespace PatternMatch;
  auto *I = dyn_cast<Instruction>(V);
  switch (Kind) {
  case RecurKind::Add:
    if (m_Add(m_Value(), m_Value()).match(V))
      return getBinaryOperands(I);
    return None;
  case RecurKind::Mul:
    if (m_Mul(m_Value(), m_Value()).match(V))
      return getBinaryOperands(I);
    return None;
  case RecurKind::And:
    if (m_And(m_Value(), m_Value()).match(V))
      return getBinaryOperands(I);
    return None;
  case RecurKind::Or:
    if (m_Or(m_Value(), m_Value()).match(V))
      return getBinaryOperands(I);
    return None;
  case RecurKind::Xor:
    if (m_Xor(m_Value(), m_Value()).match(V))
      return getBinaryOperands(I);
    return None;
  case RecurKind::FAdd:
    if (m_FAdd(m_Value(), m_Value()).match(V))
      return getBinaryOperands(I);
    return None;
  case RecurKind::FMul:
    if (m_FMul(m_Value(), m_Value()).match(V))
      return getBinaryOperands(I);
    return None;
  case RecurKind::SMax:
    if (m_SMax(m_Value(), m_Value()).match(V))
      return getBinaryOperands(I);
    return None;
  case RecurKind::SMin:
    if (m_SMin(m_Value(), m_Value()).match(V))
      return getBinaryOperands(I);
    return None;
  case RecurKind::UMax:
    if (m_UMax(m_Value(), m_Value()).match(V))
      return getBinaryOperands(I);
    return None;
  case RecurKind::UMin:
    if (m_UMin(m_Value(), m_Value()).match(V))
      return getBinaryOperands(I);
    return None;
  case RecurKind::FMax:
    if (m_OrdFMax(m_Value(), m_Value()).match(V))
      return getBinaryOperands(I);
    return None;
  case RecurKind::FMin:
    if (m_OrdFMin(m_Value(), m_Value()).match(V))
      return getBinaryOperands(I);
    return None;
  default:
    llvm_unreachable("unexpected reduction kind");
  }
}

static void getUses(Instruction *I, SmallVectorImpl<Use *> &Uses) {
  Uses.clear();
  for (Use &U : I->operands())
    Uses.push_back(&U);
}

// FIXME: cache match failure
Match *Matcher::matchImpl(const Operation *Op, Instruction *Root) {
  assert(Op);

  auto [It, Inserted] = Matches.try_emplace(MatchKey(Op, Root));
  if (!Inserted)
    return It->second.get();

  decltype(Match::LooseInsts) LooseInsts;
  decltype(Match::LiveIns) LiveIns;
  // Add a substitution, return if there's a conflict.
  auto AddLiveIn = [&LiveIns](unsigned i, Use *U) -> bool {
    if (LiveIns.size() <= i)
      LiveIns.resize(i + 1, nullptr);
    if (LiveIns[i] && LiveIns[i] != U)
      return false;
    LiveIns[i] = U;
    return true;
  };

  SmallVector<std::pair<const Operation *, Use *>> Worklist;
  // Match Op on V locally.
  auto TryMatch = [&](const Operation *Op, Value *V) -> bool {
    // For most operation the matched value is the same as V;
    // But if V is a reduction, its matched value is a Reducer.
    Value *MatchedValue = nullptr;

    // By default, the matched operands are just the operands of the matched
    // instruction. But we may overwrite it later
    SmallVector<Use *, 4> MatchedOperands;

    if (auto *I = dyn_cast<Instruction>(V))
      getUses(I, MatchedOperands);

    if (auto *ReductionOp = dyn_cast<ReductionOperation>(Op)) {
      auto Operands = Op->getOperands();

      // FIXME: deal with multi-way reduction later
      assert(Operands.size() == 2);
      Reduction *Rdx = dyn_cast<Reduction>(V);
      if (!Rdx)
        Rdx = RI.getReductionFor(V);

      auto RdxKind = ReductionOp->getReductionKind();
      if (Rdx && Rdx->Kind == RdxKind) {
        if (Instruction *I = RI.decomposeWithBinary(Rdx, LIT)) {
          if (LIT.isLoose(I))
            LooseInsts.push_back(I);
          getUses(I, MatchedOperands);
          MatchedValue = I;
        }
      } else if (!Rdx) {
        if (auto Operands = matchSimpleReduction(RdxKind, V)) {
          auto [A, B] = *Operands;
          MatchedValue = V;
          MatchedOperands.assign({A, B});
        }
      }
    } else if (auto *Select = dyn_cast<SelectOperation>(Op)) {
      MatchedValue = dyn_cast<SelectInst>(V);
    } else if (auto *Binary = dyn_cast<BinaryOperation>(Op)) {
      auto *BO = dyn_cast<BinaryOperator>(V);
      if (BO && BO->getOpcode() == Binary->getOpcode())
        MatchedValue = BO;
    } else if (auto *ConvOp = dyn_cast<ConvertOperation>(Op)) {
      auto *Conv = dyn_cast<CastInst>(V);
      if (Conv && Conv->getOpcode() == ConvOp->getOpcode())
        MatchedValue = Conv;
    } else if (auto *CmpOp = dyn_cast<CompareOperation>(Op)) {
      auto *Cmp = dyn_cast<CmpInst>(V);
      if (Cmp && Cmp->getPredicate() == CmpOp->getPredicate())
        MatchedValue = Cmp;
    } else {
      auto *ConstOp = cast<ConstantOperation>(Op);
      auto *C = dyn_cast<ConstantInt>(V);
      if (C && APInt::isSameValue(ConstOp->getConst(), C->getValue()))
        MatchedValue = C;
    }

    if (!MatchedValue)
      return false;

    auto Operands = Op->getOperands();
    assert(MatchedOperands.size() == Operands.size());
    if (Operands.empty())
      return false;

    // Recursively match the operands
    for (auto [Op2, Operand] : llvm::zip(Operands, MatchedOperands))
      Worklist.emplace_back(Op2, Operand);

    if (V == Root)
      Root = cast<Instruction>(MatchedValue);

    return true;
  };

  if (!TryMatch(Op, Root))
    return nullptr;

  while (!Worklist.empty()) {
    auto [Op, Use] = Worklist.pop_back_val();

    auto *V = Use->get();

    // Abort if the bit width doesn't match
    auto *Ty = V->getType();
    if (!Ty->isSized() || Ty->getScalarSizeInBits() != Op->size())
      return nullptr;

    if (auto *Input = dyn_cast<InputOperation>(Op)) {
      if (!AddLiveIn(Input->id(), Use))
        return nullptr;
      continue;
    }

    if (!TryMatch(Op, V))
      return nullptr;
  }

  auto *M = new Match;
  M->Root = Root;
  M->LiveIns = std::move(LiveIns);
  M->LooseInsts = LooseInsts;
  It->second.reset(M);
  return M;
}

static Reduction *unwrapAllLoops(Reduction *Rdx, ReductionInfo &RI) {
  Rdx = RI.copyReduction(Rdx);
  for (;;) {
    for (auto &Elt : Rdx->Elements)
      if (Elt.Loops.empty())
        return Rdx;
    for (auto &Elt : Rdx->Elements)
      Elt.Loops.pop_back();
  }
  return Rdx;
}

Matcher::Result Matcher::match(const Operation *Op, Instruction *Root) {
  auto *M = matchImpl(Op, Root);
  if (M)
    return M;

  // If we fail to match but the Root is a reduction,
  // see if we can pull a subset of the elements and get a match.
  auto *Rdx = dyn_cast<Reduction>(Root);
  if (!Rdx)
    Rdx = RI.getReductionFor(Root);
  if (!Rdx)
    return nullptr;

  // Rule out obvious mismatch first.
  auto *RdxOp = dyn_cast<ReductionOperation>(Op);
  if (!RdxOp || RdxOp->getReductionKind() != Rdx->Kind ||
      RdxOp->size() != Root->getType()->getScalarSizeInBits())
    return nullptr;

  auto Operands = Op->getOperands();
  if (Rdx->size() <= Operands.size())
    return nullptr;

  // Indices of the available reduction elements; -1 if taken
  SmallVector<int> AvailableIdxs(Rdx->size());
  SmallVector<int> SubMatches(Operands.size(), -1);
  std::iota(AvailableIdxs.begin(), AvailableIdxs.end(), 0);
  // Match the operands right-to-left
  for (int i = Operands.size() - 1; i >= 0; i--) {
    auto *SubOp = Operands[i];
    bool Matched = false;
    // Try to match SubOp from one of AvailableIdxs, preferring the right most
    // one
    for (int &j : llvm::reverse(AvailableIdxs)) {
      if (j == -1)
        continue;
      auto *I = dyn_cast<Instruction>(Rdx->Elements[j].Val);
      if (!I)
        continue;
      if (I && matchImpl(SubOp, I)) {
        // the i'th operand matches with the j'th element
        SubMatches[i] = j;
        // Mark that the j'th element is used
        j = -1;
        Matched = true;
        break;
      }
    }
    // Abort if we fail to find match a sub operation
    if (!Matched)
      return nullptr;
  }
  // Build the sub reduction given the sub matches and do a final consistency
  // check
  auto *SubRdx = RI.copyReduction(Rdx);
  SubRdx->Elements.clear();
  for (unsigned j : SubMatches) {
    assert(j >= 0);
    SubRdx->Elements.push_back(Rdx->Elements[j]);
  }
  SubRdx = RI.dedup(SubRdx);
  if (!matchImpl(Op, unwrapAllLoops(SubRdx, RI)))
    return nullptr;

  auto *AuxRdx = RI.copyReduction(Rdx);
  AuxRdx->Elements.clear();
  for (auto Enum : enumerate(Rdx->Elements))
    if (!llvm::count(SubMatches, Enum.index()))
      AuxRdx->Elements.push_back(Enum.value());
  AuxRdx->Elements.emplace_back(SubRdx, nullptr /*condition*/);
  AuxRdx = RI.dedup(AuxRdx);
  LIT.forwardAuxReduction(AuxRdx, Rdx);
  return AuxRdx;
}
