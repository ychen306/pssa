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

static bool isTrivialMatching(ArrayRef<int> Xs) {
  for (unsigned i = 0; i < Xs.size(); i++)
    if (Xs[i] != (int)i)
      return false;
  return true;
}

// FIXME: cache match failure
Match *Matcher::matchImpl(const Operation *Op, Instruction *Root) {
  assert(Op);

  auto Key = MatchKey(Op, Root);
  auto It = Matches.find(Key);
  if (It != Matches.end())
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

      Reduction *Rdx = dyn_cast<Reduction>(V);
      if (!Rdx)
        Rdx = RI.getReductionFor(V);

      auto RdxKind = ReductionOp->getReductionKind();
      if (Rdx && Rdx->Kind == RdxKind) {
        if (Instruction *I =
                RI.decompose(Rdx, Operands.size() /*N-way reduction*/, LIT)) {
          // Try to reorder the reducer operands to enable matching
          SmallVector<Instruction *> Insts;
          for (auto *V : I->operand_values())
            Insts.push_back(dyn_cast<Instruction>(V));
          auto Matching = findMatching(Operands, Insts);
          if (!Matching)
            return false;
          if (!isTrivialMatching(*Matching)) {
            SmallVector<Value *> ReducerArgs;
            for (int i : *Matching)
              ReducerArgs.push_back(Insts[i]);
            I = LIT.getOrCreateReducer(Rdx, ReducerArgs);
          }

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

  assert(!isa<InputOperation>(Op) && "can't match with trivial input");

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
  Matches[Key].reset(M);
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

Optional<Matcher::Matching>
Matcher::findMatching(ArrayRef<const Operation *> Ops,
                      ArrayRef<Instruction *> Insts) {

  Matching Result(Ops.size(), -1);

  SmallVector<BitVector> InstToOps(Insts.size(), BitVector(Ops.size(), false));
  SmallVector<BitVector> OpToInsts(Ops.size(), BitVector(Insts.size(), false));
  for (unsigned i = 0; i < Ops.size(); i++) {
    auto *Op = Ops[i];
    OpToInsts.emplace_back(Insts.size());
    bool IsInputOp = isa<InputOperation>(Op);
    for (unsigned j = 0; j < Insts.size(); j++) {
      auto *I = Insts[j];
      if (I && (IsInputOp || matchImpl(Op, I))) {
        // the i'th op is compatible with the j'th Inst
        OpToInsts[i].set(j);
        InstToOps[j].set(i);
      }
    }
  }

  // indicate whether an instruction is availlable; false if taken
  BitVector AvailableInsts(Insts.size(), true);
  BitVector AvailableOps(Ops.size(), true);

  // Build the matching
  unsigned NumMatched = 0;
  while (NumMatched < Ops.size()) {
    // Match the most constrained Ops with the least matched insts;
    // Tiebreak left to right
    int OpId = -1;
    unsigned MinAvail;
    for (unsigned i : AvailableOps.set_bits()) {
      OpToInsts[i] &= AvailableInsts;
      unsigned NumInsts = OpToInsts[i].count();
      if (OpId == -1 || NumInsts <= MinAvail) {
        MinAvail = NumInsts;
        OpId = i;
      }
    }
    if (OpId == -1)
      return None;

    // Find the most constrained instructions that's compatible with the Op
    int InstId = -1;
    for (unsigned i : OpToInsts[OpId].set_bits()) {
      InstToOps[i] &= AvailableOps;
      assert(InstToOps[i].test(OpId));
      unsigned NumOps = InstToOps[i].count();
      if (InstId == -1 || NumOps <= MinAvail) {
        MinAvail = NumOps;
        InstId = i;
      }
    }
    if (InstId == -1)
      return None;

    assert(AvailableInsts.test(InstId));
    assert(AvailableOps.test(OpId));
    AvailableInsts.reset(InstId);
    AvailableOps.reset(OpId);
    Result[OpId] = InstId;
    NumMatched++;
  }

  return Result;
}

Reduction *Matcher::findAuxReduction(Reduction *Rdx, const Operation *Op,
                                     Reduction *&SubRdx) {
  auto Operands = Op->getOperands();
  if (Rdx->size() <= Operands.size())
    return nullptr;

  SmallVector<Instruction *, 8> Insts;
  for (auto &Elt : Rdx->Elements)
    Insts.push_back(dyn_cast<Instruction>(Elt.Val));

  auto OpMatching = findMatching(Operands, Insts);
  if (!OpMatching)
    return nullptr;

  // Build the sub reduction given the sub matches and do a final consistency
  // check
  SubRdx = RI.copyReduction(Rdx);
  SubRdx->Elements.clear();
  for (int j : *OpMatching) {
    assert(j >= 0);
    SubRdx->Elements.push_back(Rdx->Elements[j]);
  }
  SubRdx = RI.dedup(SubRdx);
  if (!matchImpl(Op, unwrapAllLoops(SubRdx, RI)))
    return nullptr;

  // Special case where the sub rdx is just the original reduction permuted
  if (SubRdx->size() == Rdx->size()) {
    LIT.forwardAuxReduction(SubRdx, Rdx);
    return SubRdx;
  }

  auto *AuxRdx = RI.copyReduction(Rdx);
  AuxRdx->Elements.clear();
  for (auto Enum : enumerate(Rdx->Elements))
    if (!llvm::count(*OpMatching, Enum.index()))
      AuxRdx->Elements.push_back(Enum.value());
  AuxRdx->Elements.emplace_back(SubRdx, nullptr /*condition*/);
  AuxRdx = RI.dedup(AuxRdx);
  LIT.forwardAuxReduction(AuxRdx, Rdx);
  return AuxRdx;
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

  Reduction *SubRdx = nullptr;
  if (auto *AuxRdx = findAuxReduction(Rdx, Op, SubRdx))
    return AuxRdx;

  // One last hurrah: in some cases, when Op has the form `Op = (+ acc ?)` with
  // n arguments, where acc is an InputOperation, we can match Op on a
  // (n-1)-nary *recurrent* reduction.
  auto Operands = Op->getOperands();
  if (!isa<InputOperation>(Operands.front()))
    return nullptr;

  ReductionOperation AuxOp(RdxOp->getReductionKind(), Operands.drop_front());
  if (auto *AuxRdx = findAuxReduction(Rdx, &AuxOp, SubRdx)) {
    // Check that all elements of the factored sub reduction are recurrent
    for (auto &Elt : SubRdx->Elements)
      if (!Elt.reducedByLoop())
        return nullptr;
    return AuxRdx;
  }

  return nullptr;
}
