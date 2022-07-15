#include "AddrUtil.h"
#include "llvm/Analysis/LoopInfo.h"
#include "llvm/Analysis/ScalarEvolution.h"
#include "llvm/Analysis/ScalarEvolutionExpressions.h"

using namespace llvm;

namespace {
class AddRecLoopRewriter : public SCEVRewriteVisitor<AddRecLoopRewriter> {
public:
  using LoopToLoopMap = SmallDenseMap<const Loop *, const Loop *>;

private:
  const LoopToLoopMap &OldToNewMap;
  bool Success;

public:
  AddRecLoopRewriter(ScalarEvolution &SE, const LoopToLoopMap &OldToNewMap)
      : SCEVRewriteVisitor<AddRecLoopRewriter>(SE), OldToNewMap(OldToNewMap),
        Success(true) {}

  static const SCEV *rewrite(ScalarEvolution &SE, const SCEV *Expr,
                             const LoopToLoopMap &OldToNewMap) {
    AddRecLoopRewriter Rewriter(SE, OldToNewMap);
    return Rewriter.visit(Expr);
  }

  const SCEV *visitAddRecExpr(const SCEVAddRecExpr *Expr) {
    if (!Success)
      return Expr;

    auto *OldLoop = Expr->getLoop();
    auto It = OldToNewMap.find(OldLoop);
    auto *NewLoop = It == OldToNewMap.end() ? OldLoop : It->second;

    SmallVector<const SCEV *> Operands;
    for (auto *Op : Expr->operands()) {
      Operands.push_back(visit(Op));
      if (!SE.isAvailableAtLoopEntry(Operands.back(), NewLoop)) {
        Success = false;
        return Expr;
      }
    }

    return SE.getAddRecExpr(Operands, NewLoop, Expr->getNoWrapFlags());
  }
};
} // namespace

static SmallVector<const Loop *, 4> getLoopNest(Value *V, LoopInfo &LI) {
  auto *I = dyn_cast<Instruction>(V);
  if (!I)
    return {};

  SmallVector<const Loop *, 4> LoopNest;
  for (auto *L = LI.getLoopFor(I->getParent()); L; L = L->getParentLoop())
    LoopNest.push_back(L);
  return LoopNest;
}

static Loop *getLoopForValue(Value *V, LoopInfo &LI) {
  if (auto *I = dyn_cast<Instruction>(V))
    return LI.getLoopFor(I->getParent());
  return nullptr;
}

// Get a the SCEV two PtrA and PtrB.
// If they come from different loop nests,
// rewrite PtrB as if it comes from the same loop nest as PtrB
static Optional<std::pair<const SCEV *, const SCEV *>>
getSCEVs(Value *PtrA, Value *PtrB, ScalarEvolution &SE, LoopInfo &LI) {
  Loop *LoopA = getLoopForValue(PtrA, LI);
  Loop *LoopB = getLoopForValue(PtrB, LI);
  auto *SCEVA = SE.getSCEV(PtrA);
  auto *SCEVB = SE.getSCEV(PtrB);

  if (LoopA == LoopB)
    return std::make_pair(SCEVA, SCEVB);

  auto LoopNestA = getLoopNest(PtrA, LI);
  auto LoopNestB = getLoopNest(PtrB, LI);

  // Bail if the loop nests have different depths.
  if (LoopNestA.size() != LoopNestB.size())
    return None;

  // Rewrite B to use A's nesting
  AddRecLoopRewriter::LoopToLoopMap LoopMapping;
  for (const auto &Pair : zip(LoopNestA, LoopNestB)) {
    const Loop *LoopA, *LoopB;
    std::tie(LoopA, LoopB) = Pair;
    if (LoopA != LoopB)
      LoopMapping[LoopB] = LoopA;
  }
  SCEVB = AddRecLoopRewriter::rewrite(SE, SCEVB, LoopMapping);

  return std::make_pair(SCEVA, SCEVB);
}

Optional<int> diffPointers(Type *ElemTyA, Value *PtrA, Type *ElemTyB,
                           Value *PtrB, const DataLayout &DL,
                           ScalarEvolution &SE, LoopInfo &LI, bool StrictCheck,
                           bool CheckType) {
  assert(PtrA && PtrB && "Expected non-nullptr pointers.");
  assert(cast<PointerType>(PtrA->getType())
             ->isOpaqueOrPointeeTypeMatches(ElemTyA) &&
         "Wrong PtrA type");
  assert(cast<PointerType>(PtrB->getType())
             ->isOpaqueOrPointeeTypeMatches(ElemTyB) &&
         "Wrong PtrB type");

  // Make sure that A and B are different pointers.
  if (PtrA == PtrB)
    return 0;

  // Make sure that the element types are the same if required.
  if (CheckType && ElemTyA != ElemTyB)
    return None;

  unsigned ASA = PtrA->getType()->getPointerAddressSpace();
  unsigned ASB = PtrB->getType()->getPointerAddressSpace();

  // Check that the address spaces match.
  if (ASA != ASB)
    return None;
  unsigned IdxWidth = DL.getIndexSizeInBits(ASA);

  APInt OffsetA(IdxWidth, 0), OffsetB(IdxWidth, 0);
  Value *PtrA1 = PtrA->stripAndAccumulateInBoundsConstantOffsets(DL, OffsetA);
  Value *PtrB1 = PtrB->stripAndAccumulateInBoundsConstantOffsets(DL, OffsetB);

  int Val;
  if (PtrA1 == PtrB1) {
    // Retrieve the address space again as pointer stripping now tracks through
    // `addrspacecast`.
    ASA = cast<PointerType>(PtrA1->getType())->getAddressSpace();
    ASB = cast<PointerType>(PtrB1->getType())->getAddressSpace();
    // Check that the address spaces match and that the pointers are valid.
    if (ASA != ASB)
      return None;

    IdxWidth = DL.getIndexSizeInBits(ASA);
    OffsetA = OffsetA.sextOrTrunc(IdxWidth);
    OffsetB = OffsetB.sextOrTrunc(IdxWidth);

    OffsetB -= OffsetA;
    Val = OffsetB.getSExtValue();
  } else {
    // Otherwise compute the distance with SCEV between the base pointers.
    const SCEV *PtrSCEVA, *PtrSCEVB;
    if (auto Result = getSCEVs(PtrA, PtrB, SE, LI))
      std::tie(PtrSCEVA, PtrSCEVB) = *Result;
    else
      return None;

    const auto *Diff =
        dyn_cast<SCEVConstant>(SE.getMinusSCEV(PtrSCEVB, PtrSCEVA));
    if (!Diff)
      return None;
    Val = Diff->getAPInt().getSExtValue();
  }
  int Size = DL.getTypeStoreSize(ElemTyA);
  int Dist = Val / Size;

  // Ensure that the calculated distance matches the type-based one after all
  // the bitcasts removal in the provided pointers.
  if (!StrictCheck || Dist * Size == Val)
    return Dist;
  return None;
}

bool sortPointers(ArrayRef<Value *> VL, Type *ElemTy, const DataLayout &DL,
                  ScalarEvolution &SE, LoopInfo &LI,
                  SmallVectorImpl<unsigned> &SortedIndices) {
  assert(llvm::all_of(
             VL, [](const Value *V) { return V->getType()->isPointerTy(); }) &&
         "Expected list of pointer operands.");
  // Walk over the pointers, and map each of them to an offset relative to
  // first pointer in the array.
  Value *Ptr0 = VL[0];

  using DistOrdPair = std::pair<int64_t, int>;
  auto Compare = [](const DistOrdPair &L, const DistOrdPair &R) {
    return L.first < R.first;
  };
  std::set<DistOrdPair, decltype(Compare)> Offsets(Compare);
  Offsets.emplace(0, 0);
  int Cnt = 1;
  bool IsConsecutive = true;
  for (auto *Ptr : VL.drop_front()) {
    Optional<int> Diff = diffPointers(ElemTy, Ptr0, ElemTy, Ptr, DL, SE, LI,
                                      /*StrictCheck=*/true);
    if (!Diff)
      return false;

    // Check if the pointer with the same offset is found.
    int64_t Offset = *Diff;
    auto Res = Offsets.emplace(Offset, Cnt);
    if (!Res.second)
      return false;
    // Consecutive order if the inserted element is the last one.
    IsConsecutive = IsConsecutive && std::next(Res.first) == Offsets.end();
    ++Cnt;
  }
  SortedIndices.clear();
  if (!IsConsecutive) {
    // Fill SortedIndices array only if it is non-consecutive.
    SortedIndices.resize(VL.size());
    Cnt = 0;
    for (const std::pair<int64_t, int> &Pair : Offsets) {
      SortedIndices[Cnt] = Pair.second;
      ++Cnt;
    }
  }
  return true;
}
