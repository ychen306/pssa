#include "Reduction.h"
#include "LooseInstructionTable.h"
#include "Reducer.h"
#include "pssa/Inserter.h"
#include "pssa/PSSA.h"
#include "pssa/Visitor.h"
#include "llvm/Analysis/LoopInfo.h"
#include "llvm/IR/PatternMatch.h"
#include "llvm/Support/raw_ostream.h"

using namespace llvm;
using namespace PatternMatch;

StringRef getReductionName(RecurKind Kind) {
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

void Reduction::dump() const { errs() << *this << '\n'; }

raw_ostream &operator<<(raw_ostream &OS, const Reduction &Rdx) {
  OS << "(" << getReductionName(Rdx.Kind);
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
  OS << ") : " << *Rdx.ParentCond;
  return OS;
}

static Value *getIdentity(RecurKind Kind, Type *Ty) {
  switch (Kind) {
  case RecurKind::Xor:
  case RecurKind::Add:
  case RecurKind::Or:
    return ConstantInt::get(Ty, 0);
  case RecurKind::Mul:
    return ConstantInt::get(Ty, 1);
  case RecurKind::And:
    return ConstantInt::get(Ty, -1, true);
  case RecurKind::FMul:
    return ConstantFP::get(Ty, 1.0L);
  case RecurKind::FAdd:
    return ConstantFP::get(Ty, 0.0L);
  case RecurKind::UMin:
    return ConstantInt::get(Ty, -1);
  case RecurKind::UMax:
    return ConstantInt::get(Ty, 0);
  case RecurKind::SMin:
    return ConstantInt::get(Ty,
                            APInt::getSignedMaxValue(Ty->getIntegerBitWidth()));
  case RecurKind::SMax:
    return ConstantInt::get(Ty,
                            APInt::getSignedMinValue(Ty->getIntegerBitWidth()));
  case RecurKind::FMin:
    return ConstantFP::getInfinity(Ty, false /*Negative*/);
  case RecurKind::FMax:
    return ConstantFP::getInfinity(Ty, true /*Negative*/);
  default:
    llvm_unreachable("Unknown recurrence kind");
  }
}

static bool isIdentity(RecurKind Kind, Value *V) {
  return getIdentity(Kind, V->getType()) == V;
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
    Rdx.Kind = RecurKind::And;
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
Optional<std::vector<ReductionElement>> getDifference(Reduction *A,
                                                      Reduction *B) {
  if (A->Kind != B->Kind)
    return None;

  auto *Identity = A->identity();

  std::map<ReductionElement, unsigned> AElts, BElts;
  for (auto &Elt : A->Elements) {
    if (Elt.Val == Identity)
      continue;
    AElts[Elt]++;
  }
  for (auto &Elt : B->Elements) {
    if (Elt.Val == Identity)
      continue;
    BElts[Elt]++;
  }

  // Check that B contains A
  if (!all_of(AElts, [&](const auto &KV) {
        auto [Elt, Count] = KV;
        auto It = BElts.find(Elt);
        return It != BElts.end() && It->second >= Count;
      }))
    return None;

  std::vector<ReductionElement> Diff;
  for (auto &Elt : B->Elements)
    if (!AElts.count(Elt))
      Diff.push_back(Elt);
  return Diff;
}

// Detect the case where Init is one of Rdx's reduction element and return the
// difference
Optional<std::vector<ReductionElement>>
getDifference(Value *Init, const ControlCondition *C, Reduction *Rdx) {
  ReductionElement Elt0(Init, C);
  std::set<ReductionElement> Elts(Rdx->Elements.begin(), Rdx->Elements.end());
  if (!isa<UndefValue>(Init) && !Elts.count(Elt0))
    return None;
  std::vector<ReductionElement> Diff;
  for (auto &Elt : Rdx->Elements) {
    if (Elt == Elt0)
      continue;
    Diff.push_back(Elt);
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

void ReductionInfo::trackValue(llvm::Value *V) {
  ValueOrdering.try_emplace(V, ValueOrdering.size());
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
      if (!llvm::count(*Diff, Elt)) {
        // in the case the A is not a reduction
        // but showed up in both side,
        // we set its condition to be disjunction of both side
        // (which is just the condition of phi node);
        if (!Rdx1)
          Elt.C = VL->getInstCond(PN);
        continue;
      }
      // Strengthen the reduction condition based on the phi
      // but skip if the condition happens to be the condition of the outermost
      // loop that we are reducing over (in which case it's redundant)
      if (Elt.Loops.empty() || Elt.Loops.back()->getLoopCond() != C) {
        // FIXME: it's possible that this creates cyclic control dependences
        // maybe only do this transformation if one of C and Elt.C implies the
        // other
        Elt.C = getAnd(VL->getPSSA(), C, Elt.C);
      }
    }
    Merged->ParentCond = VL->getInstCond(PN);
    Merged->ParentLoop = VL;
    return Merged;
  };

  for (auto &It : VL->items()) {
    if (auto *I = It.asInstruction()) {
      // Don't mess with boolean values, which could be used for control-flow
      if (I->getType()->isIntegerTy(1))
        continue;

      if (auto *PN = dyn_cast<PHINode>(I)) {
        if (PN->getNumOperands() == 1) {
          // detect recurrent reduction
          auto *Val = PN->getIncomingValue(0);
          if (auto *Rdx = ValueToReductionMap.lookup(Val)) {
            if (LiveOutRdxs.count(Val)) {
              auto [LiveOutRdx, ProducerVL] = LiveOutRdxs[Val];
              // Ensure that this is indeed a LCSSA Phi
              if (!ProducerVL->contains(PN)) {
                auto *Rdx = copyReduction(LiveOutRdx);
                Rdx->ParentCond = VL->getInstCond(PN);
                setReductionFor(PN, Rdx);
              }
            }
          }
        } else if (PN->getNumOperands() == 2) {
          if (auto *Rdx = MatchPhiReduction(PN, 0, 1))
            setReductionFor(PN, Rdx);
          else if (auto *Rdx = MatchPhiReduction(PN, 1, 0))
            setReductionFor(PN, Rdx);
        }
      }

      auto Rdx = matchReduction(I);
      if (!Rdx)
        continue;
      Reduction *RdxA = ValueToReductionMap.lookup(Rdx->A);
      Reduction *RdxB = ValueToReductionMap.lookup(Rdx->B);
      bool CanMergeA = RdxA && RdxA->Kind == Rdx->Kind;
      bool CanMergeB = RdxB && RdxB->Kind == Rdx->Kind;
      auto *C = VL->getInstCond(I);
      Reduction *Merged = newReduction(I->getType());
      trackValue(Rdx->A);
      trackValue(Rdx->B);
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
      setReductionFor(I, Merged);
      continue;
    }
    assert(It.asLoop());
    processLoop(It.asLoop());
  }

  // Inspect the Mu nodes and see if we can
  // generalize some of the "straightline" reductions into loop reductions
  for (auto *Mu : VL->mus()) {
    // Generalize instances of `rec = (+ mu(init, rec) x0 x1 ...)`
    // into `rec = (+ init x0^L x1^L ...)`
    auto *Init = Mu->getIncomingValue(0);
    auto *Rec = Mu->getIncomingValue(1);
    auto *OrigRdx = ValueToReductionMap.lookup(Rec);

    if (!OrigRdx)
      continue;

    auto *Rdx = copyReduction(OrigRdx);

    // Make sure OrigRdx contains Mu
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
    if (InitRdx && InitRdx->Kind == Rdx->Kind) {
      // FIXME: need to strengthen the condition of these elements with the loop
      // cond of VL
      llvm::append_range(Rdx->Elements, InitRdx->Elements);
    } else {
      Rdx->Elements.emplace_back(Init, nullptr);
    }
    Rdx->ParentLoop = VL->getParent();
    Rdx->ParentCond = VL->getLoopCond();
    // If we use `Rec` outside of `VL`, we are actually using `Rdx`
    LiveOutRdxs[Rec] = {Rdx, VL};
  }
}

// A reduction is simple if we can produce it directly with a binary reducer
static bool isSimpleReduction(Reduction *Rdx) {
  if (Rdx->size() != 2)
    return false;

  auto &A = Rdx->Elements[0];
  auto &B = Rdx->Elements[1];
  if (!A.Loops.empty() || !B.Loops.empty())
    return false;

  return A.C == Rdx->ParentCond && B.C == Rdx->ParentCond;
}

ReductionInfo::ReductionInfo(PredicatedSSA &PSSA) {
  processLoop(&PSSA.getTopLevel());

  std::vector<Instruction *> SimpleRdxInsts;

  // Update the reduction to values mapping after we canonicalize the reductions
  decltype(ReductionToValuesMap) NewRdxToValsMap;

  // Post processing:
  // 1) Remove any simple reductions
  //    (e.g., we want `add a, b` instead of `(+ a b)`)
  // 2) Remove any identity elements and hash cons the reductions
  for (auto &[V, Rdx] : ValueToReductionMap) {
    auto *I = cast<Instruction>(V);
    assert(PSSA.getInstCond(I) == Rdx->ParentCond);
    assert(PSSA.getLoopForInst(I) == Rdx->ParentLoop);

    if (isSimpleReduction(Rdx)) {
      SimpleRdxInsts.push_back(I);
      continue;
    }

    decltype(Rdx->Elements) NewElements;
    for (auto &Elt : Rdx->Elements) {
      if (!isIdentity(Rdx->Kind, Elt.Val))
        NewElements.push_back(Elt);
    }

    // Order the elements by the order in which their values are discovered
    llvm::sort(NewElements, [&](auto &Elt1, auto &Elt2) {
      return ValueOrdering.lookup(Elt1.Val) < ValueOrdering.lookup(Elt2.Val);
    });

    auto OrigVals = ReductionToValuesMap[Rdx];

    Rdx->Elements = NewElements;
    Rdx = dedup(Rdx);
    assert(ValueToReductionMap.lookup(V) == dedup(copyReduction(Rdx)));
    llvm::append_range(NewRdxToValsMap[Rdx], OrigVals);
  }

  for (auto *I : SimpleRdxInsts)
    ValueToReductionMap.erase(I);

  ReductionToValuesMap = std::move(NewRdxToValsMap);
}

void ReductionInfo::split(const Reduction *Rdx, unsigned Parts,
                          SmallVectorImpl<Reduction *> &SubRdxs) {
  unsigned N = Rdx->size();
  assert(isPowerOf2_32(Parts));
  assert(isPowerOf2_32(N));
  assert(N % Parts == 0);
  for (unsigned i = 0; i < Parts; i++) {
    auto *SubRdx = copyReduction(Rdx);
    SubRdx->Elements.clear();
    for (unsigned j = i; j < N; j += Parts)
      SubRdx->Elements.push_back(Rdx->Elements[j]);
    SubRdxs.push_back(dedup(SubRdx));
  }
}

Reducer *ReductionInfo::decomposeWithBinary(Reduction *Rdx,
                                            LooseInstructionTable &LIT) {
  assert(Rdx->size() > 0);

  // Decompose a recurrent reduction
  // FIXME: this is getting messy. Refactor the decomposition code into utility
  if (Rdx->size() == 1 && !Rdx->Elements.front().Loops.empty()) {
    // decompose (+ a^L) -> (+ a^L'), (+ a)
    auto *Cur = copyReduction(Rdx);
    auto &Elt = Cur->Elements.front();
    auto *VL = Elt.Loops.pop_back_val();
    Cur->ParentLoop = VL;
    // The accumulation must happen unconditionally every iteraiton
    Cur->ParentCond = nullptr;

    // If the loop's execution is not implied by the parent condition
    // then we need to unwrap the condition first.
    if (!isImplied(VL->getLoopCond(), Rdx->getParentCond()))
      return nullptr;

    return LIT.getOrCreateRecurrentReducer(Rdx, {dedup(Cur)}, VL);
  }

  if (Rdx->size() < 2)
    return nullptr;

  // Left's elements is the first n-1 elements of Rdx's elements
  auto *Left = copyReduction(Rdx);
  Left->Elements.clear();
  Left->Elements.insert(Left->Elements.begin(), Rdx->Elements.begin(),
                        Rdx->Elements.end() - 1);

  // Right's elements is the last element of Rdx's elements
  auto *Right = copyReduction(Rdx);
  Right->Elements = {Rdx->Elements.back()};

  return LIT.getOrCreateReducer(Rdx, {dedup(Left), dedup(Right)},
                                "binary-reducer" /*name*/);
}

void ReductionInfo::setReductionFor(Value *V, Reduction *Rdx) {
  ValueToReductionMap[V] = Rdx;
  ReductionToValuesMap[Rdx].push_back(V);
}

ReductionInfo::~ReductionInfo() {
  for (auto &Rdx : Reductions)
    Rdx->replaceAllUsesWith(UndefValue::get(Rdx->getType()));
}

Value *Reduction::identity() const { return getIdentity(Kind, getType()); }

// (+ a@c) -> phi (c : a, _: 0)
PHINode *ReductionInfo::unwrapCondition(Reduction *Rdx,
                                        LooseInstructionTable &LIT) {
  // FIXME: we can also unwrap if there are multiple elements but they all share
  // the same condition
  if (Rdx->Elements.size() != 1)
    return nullptr;

  auto &X = Rdx->Elements.front();
  if (!X.Loops.empty()) {
    auto *VL = X.Loops.back();
    // Unwrap the looping condition if the loop's execution
    // is not guaranteed by the reduction condition
    if (!isImplied(VL->getLoopCond(), Rdx->getParentCond())) {
      auto *Rdx2 = copyReduction(Rdx);
      Rdx2->ParentCond = VL->getLoopCond();
      auto *PN = LIT.createOneHotPhi(
          Rdx->getParentLoop(), VL->getLoopCond(), dedup(Rdx2) /*if true*/,
          Rdx->identity() /*if false*/, Rdx->getParentCond(),
          Rdx /*the reduction the PN produces*/);
      return PN;
    }
    return nullptr;
  }

  if (!X.Loops.empty() || !X.C)
    return nullptr;

  auto *PN =
      LIT.createOneHotPhi(Rdx->getParentLoop(), X.C, X.Val /*if true*/,
                          Rdx->identity() /*if false*/, Rdx->getParentCond(),
                          Rdx /*the reduction the PN produces*/);
  return PN;
}

static void profileReductionElement(const ReductionElement &Elt,
                                    FoldingSetNodeID &ID) {
  // Elt = v : l1 ^ l2 ^ ... @ c
  ID.AddPointer(Elt.Val);
  for (auto *VL : Elt.Loops)
    ID.AddPointer(VL);
  ID.AddPointer(Elt.C);
}

void profileReduction(const Reduction *Rdx, FoldingSetNodeID &ID) {
  ID.AddInteger((unsigned)Rdx->Kind);
  ID.AddPointer(Rdx->ParentLoop);
  ID.AddPointer(Rdx->ParentCond);
  for (auto &Elt : Rdx->Elements) {
    FoldingSetNodeID EltID;
    profileReductionElement(Elt, EltID);
    ID.AddNodeID(EltID);
  }
}

Reduction *ReductionInfo::dedup(Reduction *Rdx) {
  auto *UniqRdx = new (UniqueRdxAllocator) UniqueReduction(Rdx);
  // FIXME: free the origin Rdx if it's not inserted?
  return UniqueRdxs.GetOrInsertNode(UniqRdx)->Rdx;
}

Value *emitBinaryReduction(RecurKind Kind, Value *A, Value *B,
                           Inserter &Insert) {
  assert(A->getType() == B->getType());
  auto *Ty = A->getType();
  switch (Kind) {
  case RecurKind::Add:
    return Insert.CreateBinOp(Instruction::BinaryOps::Add, A, B);
  case RecurKind::Mul:
    return Insert.CreateBinOp(Instruction::BinaryOps::Mul, A, B);
  case RecurKind::And:
    return Insert.CreateBinOp(Instruction::BinaryOps::And, A, B);
  case RecurKind::Or:
    return Insert.CreateBinOp(Instruction::BinaryOps::Or, A, B);
  case RecurKind::Xor:
    return Insert.CreateBinOp(Instruction::BinaryOps::Xor, A, B);
  case RecurKind::FAdd:
    return Insert.CreateBinOp(Instruction::BinaryOps::FAdd, A, B);
  case RecurKind::FMul:
    return Insert.CreateBinOp(Instruction::BinaryOps::FMul, A, B);
  case RecurKind::SMax:
    return Insert.createIntrinsicCall(Intrinsic::smax, {Ty}, {A, B});
  case RecurKind::SMin:
    return Insert.createIntrinsicCall(Intrinsic::smin, {Ty}, {A, B});
  case RecurKind::UMax:
    return Insert.createIntrinsicCall(Intrinsic::umax, {Ty}, {A, B});
  case RecurKind::UMin:
    return Insert.createIntrinsicCall(Intrinsic::umin, {Ty}, {A, B});
  case RecurKind::FMax:
    return Insert.createIntrinsicCall(Intrinsic::maxnum, {Ty}, {A, B});
  case RecurKind::FMin:
    return Insert.createIntrinsicCall(Intrinsic::minnum, {Ty}, {A, B});
  default:
    llvm_unreachable("unexpected reduction kind");
  }
}

namespace {

// Utility to find all reduction used in a given function
class ReductionFinder : public PSSAVisitor<ReductionFinder> {
  DenseSet<Reduction *> &Rdxs;
  ReductionInfo &RI;
  LooseInstructionTable &LIT;
  bool ReplaceInsts;

  bool addIfNotProduced(Reduction *Rdx) {
    if (!LIT.getProducer(Rdx)) {
      Rdxs.insert(Rdx);
      return true;
    }
    return false;
  }

  bool addIfNotProduced(Value *V) {
    if (!ReplaceInsts) {
      if (auto *Rdx = dyn_cast<Reduction>(V))
        return addIfNotProduced(Rdx);
      return false;
    }

    if (auto *Rdx = RI.getReductionFor(V))
      return addIfNotProduced(Rdx);
    return false;
  }

public:
  ReductionFinder(DenseSet<Reduction *> &Rdxs, ReductionInfo &RI,
                  LooseInstructionTable &LIT, bool ReplaceInsts)
      : Rdxs(Rdxs), RI(RI), LIT(LIT), ReplaceInsts(ReplaceInsts) {}
  void visitInstruction(Instruction *I) {
    if (addIfNotProduced(I))
      return;
    for (Value *V : I->operand_values()) {
      addIfNotProduced(V);
    }
  }
};

} // namespace

void replaceUsesOfReductionWith(Reduction *Rdx, Instruction *I,
                                ReductionInfo &RI) {
  for (auto *V : RI.getValuesForReduction(Rdx))
    V->replaceAllUsesWith(I);
  Rdx->replaceAllUsesWith(I);
}

void lowerReductions(ReductionInfo &RI, PredicatedSSA &PSSA,
                     LooseInstructionTable &LIT, DependenceChecker &DepChecker,
                     bool ReplaceInsts) {
  // Find out all reduction we haven't lowered yet
  DenseSet<Reduction *> Rdxs;
  visitWith<ReductionFinder>(PSSA, Rdxs, RI, LIT, ReplaceInsts);

  // Decompose those reductions into reducers and phis
  SmallVector<Reduction *> Worklist(Rdxs.begin(), Rdxs.end());
  DenseSet<Reduction *> Lowered;
  SmallVector<Instruction *> LooseInsts;
  // Some Reductions are already produced,
  // remember them and rewire their uses later
  DenseMap<Reduction *, Instruction *> RdxToPatch;

  while (!Worklist.empty()) {
    auto *Rdx = Worklist.pop_back_val();
    if (!Lowered.insert(Rdx).second)
      continue;

    if (auto *I = LIT.getProducer(Rdx)) {
      auto *Rdx2 = LIT.getReductionFor(I);
      if (Rdx2 == Rdx) {
        RdxToPatch[Rdx] = I;
      } else {
        // This must be a case of Rdx being produced at a stronger condition C
        // but can be reused because C is a necessary condition for all the
        // elements.
        assert(Rdx->size() == Rdx2->size());
        assert(Rdx->getParentLoop() == Rdx2->getParentLoop());
        auto *NewInst = LIT.createOneHotPhi(
            Rdx->getParentLoop(), Rdx2->getParentCond() /* gating condition*/,
            I /*if true*/, Rdx->identity() /*if false*/, Rdx->getParentCond(),
            Rdx);
        LooseInsts.push_back(NewInst);
      }
      continue;
    }

    Instruction *NewInst = nullptr;
    if (Reducer *R = RI.decomposeWithBinary(Rdx, LIT)) {
      assert(R->getNumOperands() == 2);
      NewInst = R;
    } else if (auto *PN = RI.unwrapCondition(Rdx, LIT)) {
      NewInst = PN;
    }
    assert(NewInst && "don't know how to decompose reduction");
    // FIXME: this doesn't work for recurrent decomposition, which emits a mu +
    // a reducer
    for (Value *V : NewInst->operand_values())
      if (auto *Rdx = dyn_cast<Reduction>(V))
        Worklist.push_back(Rdx);
    LooseInsts.push_back(NewInst);
  }

  // Some of the intermediate reductions are produced by instructions inserted
  // previously, rewire their uses.
  for (auto [Rdx, I] : RdxToPatch) {
    replaceUsesOfReductionWith(Rdx, I, RI);
  }

  // Insert the new instructions
  LIT.insertInto(LooseInsts, PSSA, DepChecker, RI);

  // Replace all of the reducers with actual llvm compute instructions
  for (auto *I : LooseInsts) {
    auto *R = dyn_cast<Reducer>(I);
    if (!R)
      continue;
    auto *VL = PSSA.getLoopForInst(R);
    assert(R->getNumOperands() == 2);
    Inserter Insert(VL, VL->getInstCond(R), VL->toIterator(R));
    auto *I2 = emitBinaryReduction(R->getKind(), R->getOperand(0),
                                   R->getOperand(1), Insert);
    I2->setName(R->getName());
    R->replaceAllUsesWith(I2);
    VL->erase(R);
    R->dropAllReferences();
  }
}

// Mark instructions that are always presumed to be live:
//   * those used by control conditions
//   * those may have side effects
//   * return instruction
static std::vector<Instruction *> findRootLiveInsts(PredicatedSSA &PSSA) {
  std::vector<Instruction *> Roots;

  DenseSet<const ControlCondition *> VisitedConds;
  auto ProcessCond = [&VisitedConds, &Roots](const ControlCondition *C) {
    SmallVector<const ControlCondition *> Worklist{C};
    while (!Worklist.empty()) {
      auto *C = Worklist.pop_back_val();
      if (!C || !VisitedConds.insert(C).second)
        continue;

      if (auto *And = dyn_cast<ConditionAnd>(C)) {
        if (auto *I = dyn_cast<Instruction>(And->Cond))
          Roots.push_back(I);
        Worklist.push_back(And->Parent);
      } else {
        Worklist.append(cast<ConditionOr>(C)->Conds);
      }
    }
  };

  SmallVector<Item> Worklist{&PSSA.getTopLevel()};
  while (!Worklist.empty()) {
    auto It = Worklist.pop_back_val();
    if (auto *VL = It.asLoop()) {
      Worklist.append(VL->item_begin(), VL->item_end());
      ProcessCond(VL->getLoopCond());
      ProcessCond(VL->getBackEdgeCond());
      continue;
    }

    auto *I = It.asInstruction();
    assert(I);
    ProcessCond(PSSA.getInstCond(I));
    if (isa<ReturnInst>(I) || I->mayHaveSideEffects())
      Roots.push_back(I);
    else if (auto *PN = dyn_cast<PHINode>(I))
      llvm::for_each(PSSA.getLoopForInst(I)->getPhiConditions(PN), ProcessCond);
  }
  return Roots;
}

DenseSet<Instruction *> findDeadInsts(ReductionInfo &RI, PredicatedSSA &PSSA) {
  // We will use an algorithm similar to LLVM's ADCE. That is,
  // we start with a set of initial instructions that are known
  // to be live. More generally, an instruction is live if it's
  // from the root set or used by other live instructions.
  std::vector<Instruction *> Worklist = findRootLiveInsts(PSSA);
  DenseSet<Instruction *> Visited;
  DenseSet<Instruction *> LiveInsts;
  while (!Worklist.empty()) {
    Instruction *I = Worklist.back();
    Worklist.pop_back();
    if (!Visited.insert(I).second)
      continue;
    if (auto *Rdx = RI.getReductionFor(I)) {
      for (auto &Elt : Rdx->Elements)
        if (auto *I2 = dyn_cast<Instruction>(Elt.Val))
          Worklist.push_back(I2);
    } else {
      for (auto *V : I->operand_values())
        if (auto *I2 = dyn_cast<Instruction>(V))
          Worklist.push_back(I2);
    }
    LiveInsts.insert(I);
  }

  DenseSet<Instruction *> DeadInsts;
  std::function<void(Item)> MarkDead = [&](Item It) {
    if (auto *VL = It.asLoop()) {
      llvm::for_each(VL->items(), MarkDead);
      for (auto *PN : VL->mus())
        if (!LiveInsts.count(PN))
          DeadInsts.insert(PN);
    } else {
      auto *I = It.asInstruction();
      assert(I);
      if (!LiveInsts.count(I))
        DeadInsts.insert(I);
    }
  };
  MarkDead(&PSSA.getTopLevel());

  return DeadInsts;
}
