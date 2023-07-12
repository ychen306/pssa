#include "AddrUtil.h"
#include "DependenceChecker.h"
#include "InstructionDescriptor.h"
#include "LooseInstructionTable.h"
#include "Matcher.h"
#include "PackSet.h"
#include "Reducer.h"
#include "Reduction.h"
#include "TripCount.h"
#include "Versioning.h"
#include "pssa/VectorHashInfo.h"
#include "pssa/Visitor.h"
#include "vegen/Lower.h"
#include "vegen/Pack.h"
#include "llvm/ADT/EquivalenceClasses.h"
#include "llvm/ADT/FoldingSet.h"
#include "llvm/ADT/SetVector.h"
#include "llvm/ADT/TinyPtrVector.h"
#include "llvm/Analysis/LoopInfo.h"
#include "llvm/Analysis/TargetTransformInfo.h"
#include "llvm/Analysis/ValueTracking.h" // getUnderlyingObject
#include "llvm/IR/Instructions.h"

using namespace llvm;
namespace {

cl::opt<bool> NoReductionPacking("no-reduction-packing",
                                 cl::desc("Don't pack reductions horizontally"),
                                 cl::init(false));

cl::opt<bool>
    DoVersioning("do-versioning",
                 cl::desc("do versioning to enable speculative vectorization"),
                 cl::init(false));

// A class that enumerates a list of packs
// that can produce a given vector
class Packer {
  ArrayRef<InstructionDescriptor> InstPool;
  PredicatedSSA &PSSA;
  ReductionInfo &RI;
  LooseInstructionTable &LIT;
  Matcher &TheMatcher;
  const llvm::DataLayout &DL;
  ScalarEvolution &SE;
  DominatorTree &DT;
  llvm::LoopInfo &LI;

  // Get the reduction that I computes or null
  Reduction *getReduction(Instruction *I) const {
    if (auto *Rdx = dyn_cast<Reduction>(I))
      return Rdx;
    return RI.getReductionFor(I);
  }

public:
  Packer(ArrayRef<InstructionDescriptor> InstPool, PredicatedSSA &PSSA,
         ReductionInfo &RI, LooseInstructionTable &LIT, Matcher &TheMatcher,
         const llvm::DataLayout &DL, llvm::ScalarEvolution &SE,
         DominatorTree &DT, llvm::LoopInfo &LI)
      : InstPool(InstPool), PSSA(PSSA), RI(RI), LIT(LIT),
        TheMatcher(TheMatcher), DL(DL), SE(SE), DT(DT), LI(LI) {}
  TinyPtrVector<Pack *> getProducers(llvm::ArrayRef<llvm::Value *>);
  // The values are all loads, try to split them up into several load packs
  SmallVector<Pack *> getLoadPacks(ArrayRef<llvm::Value *>);
};

class BottomUpHeuristic {
  PredicatedSSA &PSSA;
  LooseInstructionTable &LIT;
  Packer Pkr;
  TargetTransformInfo &TTI;

  struct Solution {
    SmallVector<std::unique_ptr<Pack>, 1> Packs;
    InstructionCost Cost;

    Solution(Pack *P, InstructionCost Cost) : Cost(Cost) {
      if (P)
        Packs.emplace_back(P);
    }
    Solution(Solution &&) = default;
    Solution &operator=(Solution &&) = default;

    void update(Pack *P2, InstructionCost Cost2) {
      if (Cost < Cost2) {
        delete P2;
        return;
      }

      Cost = Cost2;
      Packs.clear();
      Packs.emplace_back(P2);
    }

    void update(ArrayRef<Pack *> Packs2, InstructionCost Cost2) {
      if (Cost < Cost2) {
        for (auto *P : Packs2)
          delete P;
        return;
      }

      Cost = Cost2;
      Packs.clear();
      for (auto *P : Packs2)
        Packs.emplace_back(P);
    }
  };

  struct SolutionView {
    TinyPtrVector<Pack *> Packs;
    InstructionCost Cost;
    SolutionView(const Solution &Soln) : Cost(Soln.Cost) {
      for (auto &P : Soln.Packs)
        Packs.push_back(P.get());
    }
  };

  using ValueVector = SmallVector<Value *, 8>;

  DenseMap<ValueVector, Solution, VectorHashInfo<ValueVector>> Solutions;
  SolutionView solve(ArrayRef<Value *>);

  // Get the cost of producing a value as scalar
  DenseMap<Instruction *, InstructionCost> ScalarCosts;
  InstructionCost getCost(Pack *);

  // Return a bogus trip count (maybe based on profile information in the
  // future) for the cost model
  int getTripCount(VLoop *) const { return 4; }

public:
  BottomUpHeuristic(ArrayRef<InstructionDescriptor> InstPool,
                    PredicatedSSA &PSSA, ReductionInfo &RI,
                    LooseInstructionTable &LIT, Matcher &TheMatcher,
                    const llvm::DataLayout &DL, llvm::ScalarEvolution &SE,
                    llvm::DominatorTree &DT, llvm::LoopInfo &LI,
                    TargetTransformInfo &TTI)
      : PSSA(PSSA), LIT(LIT),
        Pkr(InstPool, PSSA, RI, LIT, TheMatcher, DL, SE, DT, LI), TTI(TTI) {}
  TinyPtrVector<Pack *> getProducer(ArrayRef<Value *> Values) {
    return solve(Values).Packs;
  }
  Pack *getSingleProducer(ArrayRef<Value *> Values) {
    auto Packs = getProducer(Values);
    if (Packs.size() == 1)
      return Packs.front();
    return nullptr;
  }
  InstructionCost getCost(ArrayRef<Value *> Values) {
    return solve(Values).Cost;
  }
  InstructionCost getCost(Value *);

  // Estimate how many times this instruction is executed
  int getTripCount(Instruction *I) const;

  int getTripCount(Value *V) const {
    if (auto *I = dyn_cast_or_null<Instruction>(V))
      return getTripCount(I);
    return 0;
  }

  template <typename ValueT> int getTripCount(ArrayRef<ValueT *> Values) const {
    int Count = 1;
    for (auto *V : Values)
      Count = std::max<int>(Count, getTripCount(V));
    return Count;
  }

  void dumpBottomUpTree(ArrayRef<Value *> Values);
};

// Group stores by their underlying objects
class StoreGrouper : public PSSAVisitor<StoreGrouper> {
public:
  using ObjToInstMapTy = std::map<Value *, SmallVector<Instruction *, 8>>;

private:
  ObjToInstMapTy &ObjToStoreMap;

public:
  StoreGrouper(ObjToInstMapTy &ObjToStoreMap) : ObjToStoreMap(ObjToStoreMap) {}
  void visitInstruction(Instruction *I) {
    auto *SI = dyn_cast<StoreInst>(I);
    if (!SI)
      return;
    auto *Ty = SI->getValueOperand()->getType();
    if (!VectorType::isValidElementType(Ty))
      return;
    Value *Obj = getUnderlyingObject(SI->getPointerOperand());
    ObjToStoreMap[Obj].push_back(SI);
  }
};

} // namespace

VLoop *getLoopFor(Instruction *I, PredicatedSSA &PSSA,
                  LooseInstructionTable &LIT) {
  if (auto *Rdx = dyn_cast<Reduction>(I))
    return Rdx->getParentLoop();
  if (LIT.isLoose(I))
    return LIT.getLoopForInst(I);
  return PSSA.getLoopForInst(I);
}

static unsigned getLoopDepth(PredicatedSSA &PSSA, Instruction *I,
                             LooseInstructionTable &LIT) {
  return PSSA.getLoopDepth(getLoopFor(I, PSSA, LIT));
}

Pack *decomposeAndPack(PredicatedSSA &PSSA, ReductionInfo &RI,
                       LooseInstructionTable &LIT,
                       ArrayRef<Instruction *> Insts) {
  auto *Rdx0 = dyn_cast<Reduction>(Insts.front());
  if (!Rdx0)
    return nullptr;

  if (auto *PN0 = RI.unwrapCondition(Rdx0, LIT)) {
    // See if we can unwrap the whole pack of instructions
    SmallVector<Instruction *, 4> PNs = {PN0};
    SmallVector<const ControlCondition *, 4> Conds{LIT.getOneHotCond(PN0)};
    for (auto *I : drop_begin(Insts)) {
      auto *Rdx = dyn_cast<Reduction>(I);
      if (!Rdx)
        return nullptr;
      auto *PN = RI.unwrapCondition(Rdx, LIT);
      if (!PN)
        continue;
      PNs.push_back(PN);
      Conds.push_back(LIT.getOneHotCond(PN));
    }
    if (PNs.size() == Insts.size()) {
      if (llvm::is_splat(Conds))
        return PHIPack::create(PNs);
      else
        return BlendPack::create(PNs, true /*is one-hot*/, PSSA, &LIT);
    }
  }

  SmallVector<Instruction *, 4> Reducers;
  for (auto *I : Insts) {
    auto *Rdx = dyn_cast<Reduction>(I);
    if (!Rdx)
      return nullptr;
    auto *R = RI.decomposeWithBinary(Rdx, LIT);
    if (!R)
      return nullptr;
    Reducers.push_back(R);
  }
  return SIMDPack::tryPack(Reducers);
}

// FIXME: make sure that the packed instructions are independent
// FIXME: make sure we are packing instructions that have the same nesting depth
TinyPtrVector<Pack *> Packer::getProducers(ArrayRef<Value *> Values) {
  SmallVector<Instruction *, 8> Insts;
  SmallPtrSet<Instruction *, 8> Seen;
  for (auto *V : Values) {
    auto *I = dyn_cast_or_null<Instruction>(V);
    if (!I)
      return {};
    if (Seen.insert(I).second)
      Insts.push_back(I);
  }

  unsigned Depth = getLoopDepth(PSSA, Insts.front(), LIT);
  for (auto *I : drop_begin(Insts))
    if (getLoopDepth(PSSA, I, LIT) != Depth)
      return {};

  if (auto *P = LoadPack::tryPack(Insts, DL, SE, DT, LI, PSSA)) {
    // Make sure when we pack divergent loads we can speculate the address
    auto *Ptr =
        dyn_cast<Instruction>(getLoadStorePointerOperand(P->values().front()));
    if (!Ptr)
      return {P};
    auto *C = findSpeculativeCond(Ptr, Insts, PSSA);
    if (canSpeculateAt(Ptr, C, PSSA))
      return {P};
  }

  if (auto *P = PHIPack::tryPack(Insts, PSSA, &LIT))
    return {P};
  if (auto *P = BlendPack::tryPack(Insts, PSSA, &LIT))
    return {P};
  if (auto *P = MuPack::tryPack(Insts, PSSA, &LIT))
    return {P};
  if (auto *P = GEPPack::tryPack(Insts))
    return {P};
  if (auto P = GatherPack::tryPack(Insts, PSSA))
    return {P};
  if (auto *P = IntrinsicPack::tryPack(Insts))
    return {P};

  TinyPtrVector<Pack *> Producers;
  if (auto *P = SIMDPack::tryPack(Insts))
    Producers.push_back(P);

  for (auto &InstDesc : InstPool) {
    if (auto *P = GeneralPack::tryPack(InstDesc, Insts, TheMatcher)) {
      Producers.push_back(P);
      continue;
    }
    // If we are packing reductions, check if we can reassociate the top-level
    // reductions to enable using some of the instructions
    SmallVector<Value *, 8> AuxRdxs;
    for (auto [I, BoundOp] : llvm::zip(Insts, InstDesc.getOperations())) {
      auto *Rdx = getReduction(I);
      if (!Rdx)
        break;
      auto Res = TheMatcher.match(BoundOp.Op, Rdx);
      auto *AuxRdx = Res.dyn_cast<Reduction *>();
      if (!AuxRdx)
        break;
      AuxRdxs.push_back(AuxRdx);
    }
    if (AuxRdxs.size() == Insts.size()) {
      for (auto *P : getProducers(AuxRdxs))
        Producers.push_back(P);
    }
  }

  // Pack reduction with SIMD instructions
  if (auto *P = decomposeAndPack(PSSA, RI, LIT, Insts))
    Producers.push_back(P);

  // Try to unfold recurrent reductions
  SmallVector<Value *> InnerRdxs;
  for (auto *I : Insts) {
    auto *Rdx = getReduction(I);
    if (!Rdx)
      break;
    auto *InnerRdx = RI.unwrapLoop(Rdx, LIT);
    if (!InnerRdx)
      break;
    InnerRdxs.push_back(InnerRdx);
  }
  if (InnerRdxs.size() == Insts.size()) {
    for (auto *P : getProducers(InnerRdxs))
      Producers.push_back(P);
  }

  return Producers;
}

SmallVector<Pack *> Packer::getLoadPacks(ArrayRef<Value *> Values) {
  // Loads within the same class are within a constant offset with each other
  EquivalenceClasses<LoadInst *> EC;
  for (auto *V1 : Values) {
    auto *L1 = cast<LoadInst>(V1);
    for (auto *V2 : Values) {
      if (V1 == V2)
        continue;
      auto *L2 = cast<LoadInst>(V2);
      if (diffPointers(L1->getType(), L1->getPointerOperand(), L2->getType(),
                       L2->getPointerOperand(), DL, SE, LI)) {
        EC.unionSets(L1, L2);
        break;
      }
    }
  }

  SmallVector<Pack *> LoadPacks;
  for (auto I = EC.begin(), E = EC.end(); I != E; ++I) {
    SmallVector<Instruction *> Insts(EC.member_begin(I), EC.member_end());
    if (!llvm::isPowerOf2_32(Insts.size()))
      continue;
    if (auto *P = LoadPack::tryPack(Insts, DL, SE, DT, LI, PSSA))
      LoadPacks.push_back(P);
  }
  return LoadPacks;
}

template <typename ValuesT>
FixedVectorType *getVectorType(const ValuesT &Values) {
  return FixedVectorType::get(Values.front()->getType(), Values.size());
}

static bool isUndefOrConstant(Value *V) { return !V || isa<Constant>(V); }

void BottomUpHeuristic::dumpBottomUpTree(ArrayRef<Value *> Values) {
  OperandPack Root(Values.begin(), Values.end());
  SmallVector<OperandPack> Worklist{Root};
  DenseSet<OperandPack, VectorHashInfo<OperandPack>> Visited;
  while (!Worklist.empty()) {
    auto Operand = Worklist.pop_back_val();
    if (!Visited.insert(Operand).second)
      continue;
    auto Packs = getProducer(Operand);
    if (!Packs.empty()) {
      for (auto *P : Packs) {
        errs() << "\t Producing " << Operand << " with " << *P
               << ", cost = " << P->getCost() << '\n';
        for (auto X : enumerate(P->getOperands()))
          errs() << "\t\t operand " << X.index() << " = " << X.value() << '\n';
        Worklist.append(P->getOperands());
      }
    } else {
      errs() << "\t Producing " << Operand << " as scalar\n";
    }
    errs() << "\t\t estimated sub tree cost = " << getCost(Operand) << '\n';
  }
}

int BottomUpHeuristic::getTripCount(Instruction *I) const {
  auto *VL = getLoopFor(I, PSSA, LIT);
  int Count = 1;
  while (VL->isLoop()) {
    Count *= getTripCount(VL);
    VL = VL->getParent();
  }
  return Count;
}

BottomUpHeuristic::SolutionView
BottomUpHeuristic::solve(ArrayRef<Value *> Values) {
  auto *VecTy = getVectorType(Values);

  auto TripCount = getTripCount(Values);

  // No cost for constant/undef vector
  if (all_of(Values, isUndefOrConstant))
    return Solution(nullptr, 0);

  // If we can produce this vector by broadcast ...
  if (is_splat(Values)) {
    InstructionCost Cost =
        getCost(Values.front()) +
        TTI.getShuffleCost(TTI::SK_Broadcast, VecTy, /*Mask=*/None, /*Index=*/0,
                           /*SubTy*/ nullptr, /*Args=*/Values.front());
    return Solution(nullptr, Cost * TripCount);
  }

  if (auto It = Solutions.find_as(Values); It != Solutions.end())
    return It->second;

  Solutions.try_emplace(ValueVector(Values.begin(), Values.end()), nullptr, 0);

  // The base line is producing the vector elts as scalar and insert them
  InstructionCost ScalarCost = 0;
  for (auto X : enumerate(Values)) {
    Value *V = X.value();
    if (!V || isa<Constant>(V))
      continue;

    ScalarCost += getCost(V);
    ScalarCost +=
        TTI.getVectorInstrCost(Instruction::InsertElement, VecTy, X.index()) *
        TripCount;
  }

  Solution Soln(nullptr, ScalarCost);
  for (auto *P : Pkr.getProducers(Values)) {
    assert(P);
    Soln.update(P, getCost(P));
  }

  if (all_of(Values, [&](Value *V) { return isa<LoadInst>(V); })) {
    auto LoadPacks = Pkr.getLoadPacks(Values);
    if (!LoadPacks.empty()) {
      InstructionCost ShflCost = TTI.getShuffleCost(
          TargetTransformInfo::SK_PermuteTwoSrc, getVectorType(Values));
      InstructionCost Cost = (LoadPacks.size() - 1) * ShflCost * TripCount;
      for (auto *P : LoadPacks)
        Cost += getCost(P);
      Soln.update(LoadPacks, Cost);
    }
  }

  SolutionView Ret = Soln;
  Solutions.find_as(Values)->second = std::move(Soln);
  return Ret;
}

InstructionCost BottomUpHeuristic::getCost(Pack *P) {
  auto TripCount = getTripCount(P->values());
  auto Cost = P->getCost() * TripCount;
  for (auto &O : P->getOperands())
    Cost += solve(O).Cost;
  return Cost;
}

static InstructionCost getScalarCost(Instruction *I, TargetTransformInfo &TTI) {
  if (isa<PHINode>(I))
    return 0;
  if (auto *Rdx = dyn_cast<Reduction>(I))
    return Rdx->size() - 1;
  if (auto *R = dyn_cast<Reducer>(I))
    return R->getNumOperands() - 1;
  return TTI.getInstructionCost(I, TTI::TCK_RecipThroughput);
}

// Get the cost of producing a value as scalar
InstructionCost BottomUpHeuristic::getCost(Value *V) {
  auto *I = dyn_cast_or_null<Instruction>(V);
  if (!I)
    return 0;

  auto TripCount = getTripCount(V);

  if (auto *Rdx = dyn_cast<Reduction>(I)) {
    // TODO: query TTI to figure out the cost of a binary reduction operator
    InstructionCost Cost = (Rdx->size() - 1) * TripCount;
    for (auto &Elt : Rdx->Elements)
      Cost += getCost(Elt.Val);
    return ScalarCosts[I] = Cost;
  }

  if (auto It = ScalarCosts.find(I); It != ScalarCosts.end())
    return It->second;

  ScalarCosts[I] = 0;

  auto Cost = getScalarCost(I, TTI) * TripCount;
  for (auto *O : I->operand_values())
    Cost += getCost(O);
  return ScalarCosts[I] = Cost;
}

// Mark instructions that are always presumed to be live:
//   * those may have side effects
//   * return instruction
// Ignore predicates because they are tricky
static SmallVector<Instruction *> findRootLiveInsts(PredicatedSSA &PSSA) {
  SmallVector<Instruction *> Roots;

  SmallVector<Item> Worklist{&PSSA.getTopLevel()};
  while (!Worklist.empty()) {
    auto It = Worklist.pop_back_val();
    if (auto *VL = It.asLoop()) {
      Worklist.append(VL->item_begin(), VL->item_end());
      continue;
    }

    auto *I = It.asInstruction();
    assert(I);
    if (isa<ReturnInst>(I) || I->mayHaveSideEffects())
      Roots.push_back(I);
  }
  return Roots;
}

namespace {
// Utility to tell us whether an instruction will be replace by another one
// (given a packing decision)
class NewInstructionTracker {
  ReductionInfo &RI;
  DenseMap<Reduction *, Instruction *> RdxToInstMap;
  LooseInstructionTable &LIT;

public:
  NewInstructionTracker(const PackSet &Packs, ReductionInfo &RI,
                        LooseInstructionTable &LIT)
      : RI(RI), LIT(LIT) {
    // Figure out the loose reducers required by packs
    SmallVector<Instruction *> LooseInsts;
    for (auto *P : Packs)
      P->getLooseInsts(LooseInsts, LIT);

    for (auto *I : LooseInsts)
      if (auto *Rdx = LIT.getReductionFor(I))
        RdxToInstMap.try_emplace(Rdx, I);
  }

  Instruction *getNewInstruction(Instruction *I) const {
    auto *Rdx = getReductionFor(I);
    if (auto *InnerRdx = LIT.getInnerReduction(Rdx))
      Rdx = InnerRdx;

    auto It = RdxToInstMap.find(Rdx);
    if (It != RdxToInstMap.end()) {
      assert(It->first && "mapping null rdx");
      return It->second;
    }
    return I;
  }

  Value *getNewValue(Value *V) const {
    auto *I = dyn_cast<Instruction>(V);
    if (!I)
      return V;
    return getNewInstruction(I);
  }

  Reduction *getReductionFor(Instruction *I) const {
    auto *Rdx = dyn_cast<Reduction>(I);
    if (Rdx)
      return Rdx;
    return RI.getReductionFor(I);
  }
};
} // namespace

static DenseSet<Instruction *>
findLiveInstructions(PredicatedSSA &PSSA, const PackSet &Packs,
                     const NewInstructionTracker &NewInstTracker) {
  SmallVector<Instruction *> Worklist = findRootLiveInsts(PSSA);
  DenseSet<Instruction *> LiveInsts, Visited;
  while (!Worklist.empty()) {
    auto *I = Worklist.pop_back_val();
    if (!Visited.insert(I).second)
      continue;

    I = NewInstTracker.getNewInstruction(I);

    // Don't count I as live if it's packed
    auto *P = Packs.getPackForValue(I);
    if (P) {
      // Still want to process the operands of P though
      for (const OperandPack &OP : P->getOperands())
        for (auto *O : OP)
          if (auto *OI = dyn_cast<Instruction>(O))
            Worklist.push_back(OI);
      continue;
    }

    LiveInsts.insert(I);
    for (auto *O : I->operand_values())
      if (auto *OI = dyn_cast<Instruction>(O))
        Worklist.push_back(OI);
  }
  return LiveInsts;
}

static InstructionCost getTotalCost(PredicatedSSA &PSSA, const PackSet &Packs,
                                    ReductionInfo &RI,
                                    LooseInstructionTable &LIT,
                                    TargetTransformInfo &TTI) {
  DenseSet<OperandPack, VectorHashInfo<OperandPack>> ShuffledOps;
  NewInstructionTracker NewInstTracker(Packs, RI, LIT);
  // Figure out the live instructions
  DenseSet<Instruction *> LiveInsts =
      findLiveInstructions(PSSA, Packs, NewInstTracker);

  auto IsPackedOrDead = [&](Value *V) {
    auto *I = dyn_cast<Instruction>(V);
    if (!I)
      return true;
    if (Packs.isPacked(I))
      return true;
    return !I || Packs.isPacked(I) || !LiveInsts.count(I);
  };
  InstructionCost Cost = 0;

  // Add up the cost for the instructions still live
  for (auto *I : LiveInsts)
    Cost += getScalarCost(I, TTI);

  DenseSet<OperandPack, VectorHashInfo<OperandPack>> Processed;
  for (auto *P : Packs) {
    Type *VecTy = nullptr;
    if (!isa<StorePack>(P))
      VecTy = getVectorType(P->values());

    // Cost from running the vector inst.
    Cost += P->getCost();

    for (auto X : enumerate(P->values())) {
      Instruction *I = X.value();
      if (!all_of(I->users(), IsPackedOrDead)) {
        Cost += TTI.getVectorInstrCost(Instruction::ExtractElement, VecTy,
                                       X.index());
      }
    }

    // Figure out cost of shuffling the required operands
    for (const OperandPack &O : P->getOperands()) {
      auto *OpVecTy = getVectorType(O);

      // We only need to gather each operand once.
      if (!Processed.insert(O).second)
        continue;

      // No shuffling cost for constant vector
      if (all_of(O, isUndefOrConstant))
        continue;

      // We can build the vector by broadcast
      if (is_splat(O)) {
        Cost += TTI.getShuffleCost(TargetTransformInfo::SK_Broadcast, OpVecTy);
        continue;
      }

      SmallPtrSet<Pack *, 2> SrcPacks;
      SmallVector<Value *, 4> ReplacedInsts;
      for (auto X : enumerate(O)) {
        Value *V = NewInstTracker.getNewValue(X.value());
        ReplacedInsts.push_back(V);

        // Remember the vectors that we need to shuffle from
        if (auto *P2 = Packs.getPackForValue(V)) {
          SrcPacks.insert(P2);
        } else if (!isa<Constant>(V)) {
          Cost += TTI.getVectorInstrCost(Instruction::InsertElement, OpVecTy,
                                         X.index());
        }
      }

      if (SrcPacks.empty())
        continue;

      if (SrcPacks.size() == 1) {
        auto *SrcP = *SrcPacks.begin();
        // No shuffle cost if O is produced exactly by some other pack
        if (all_of_zip(SrcP->values(), ReplacedInsts,
                       [](auto *V1, auto *V2) { return V1 == V2; }))
          continue;

        Cost += TTI.getShuffleCost(TargetTransformInfo::SK_PermuteSingleSrc,
                                   OpVecTy);
        continue;
      }

      // In general, gather the vector elements from the source vectors pairwise
      auto ShflCost =
          TTI.getShuffleCost(TargetTransformInfo::SK_PermuteTwoSrc, OpVecTy);
      unsigned NumShfls = SrcPacks.size() - 1;
      Cost += ShflCost * NumShfls;
    }
  }
  return Cost;
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

// Return whether the Insts are independent
static bool isIndependent(ArrayRef<Instruction *> Insts, PredicatedSSA &PSSA,
                          DependenceChecker &DepChecker) {
  SmallVector<Item> Items;

  auto *ParentVL = PSSA.getLoopForInst(Insts.front());
  if (all_of(Insts, [ParentVL, &PSSA](auto *I) {
        return ParentVL == PSSA.getLoopForInst(I);
      })) {
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
      if (Insts2.size() > 1 && !isIndependent(Insts2, PSSA, DepChecker))
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

    Items.assign(Loops.begin(), Loops.end());
    ParentVL = Loops.front()->getParent();
  }

  SmallVector<Item> Deps;
  findInBetweenDeps(Deps, Items, ParentVL, PSSA, DepChecker);
  SmallDenseSet<Item, 8, ItemHashInfo> ItemSet(Items.begin(), Items.end());
  for (auto &Dep : Deps)
    if (ItemSet.count(Dep))
      return false;
  return true;
}

// FIXME: also pack stuff required by masking
static void runBottomUp(Pack *P, BottomUpHeuristic &Heuristic,
                        PredicatedSSA &PSSA, LooseInstructionTable &LIT,
                        ScalarEvolution &SE, DependenceChecker &DepChecker,
                        PackSet &Packs, VersioningPlan &VerPlan) {
  auto IsPacked = [&Packs](Value *V) { return Packs.isPacked(V); };

  DenseSet<OperandPack, VectorHashInfo<OperandPack>> Visited;
  SmallVector<OperandPack> Worklist;

  using LoopBundle = SmallVector<VLoop *, 8>;

  DenseSet<VectorMask, VectorHashInfo<VectorMask>> VisitedMasks;
  // Add mask operands to Worklist
  std::function<void(const VectorMask &)> ProcessMaskOperands =
      [&](const VectorMask &Mask) {
        // Ignore all true mask
        if (!Mask.front() && is_splat(Mask))
          return;
        if (!VisitedMasks.insert(Mask).second)
          return;
        if (all_of(Mask, [](auto *C) { return C && isa<ConditionAnd>(C); })) {
          Worklist.emplace_back(map_range(
              Mask, [](auto *C) { return cast<ConditionAnd>(C)->Cond; }));
          VectorMask Parents(map_range(
              Mask, [](auto *C) { return cast<ConditionAnd>(C)->Parent; }));
          ProcessMaskOperands(Parents);
        }
      };

  DenseSet<LoopBundle, VectorHashInfo<LoopBundle>> VisitedLoopBundles;
  // Pack divergent control conditions from disjoint loops
  std::function<void(const LoopBundle &)> ProcessLoopBundle = [&](auto &Loops) {
    // Don't need to do anything when packing instructions from the same loop
    if (is_splat(Loops))
      return;
    if (!VisitedLoopBundles.insert(Loops).second)
      return;
    LoopBundle Parents;
    for (auto *VL : Loops)
      Parents.push_back(VL->getParent());
    auto *L0 = PSSA.getOrigLoop(Loops.front());
    if (any_of(Loops, [&](auto *VL) {
          return !haveIdenticalTripCounts(L0, PSSA.getOrigLoop(VL), SE);
        })) {
      ProcessMaskOperands(VectorMask(
          map_range(Loops, [](auto *VL) { return VL->getLoopCond(); })));
      ProcessMaskOperands(VectorMask(
          map_range(Loops, [](auto *VL) { return VL->getBackEdgeCond(); })));
    }
    ProcessLoopBundle(Parents);
  };

  auto ProcessNewPack = [&](Pack *P) {
    if (!P)
      return;
    // Check the independence of all packed, non-loose insts
    SmallVector<Instruction *> Insts;
    for (auto *I : P->values())
      if (!LIT.isLoose(I))
        Insts.push_back(I);
    // Check if the instructions are independent
    if (!Insts.empty() && !isIndependent(Insts, PSSA, DepChecker)) {
      // Try again and see if we can do versioning to get independence
      if (!DoVersioning ||
          !findNecessaryDeps(VerPlan, P->values(), PSSA, DepChecker))
        return;
    }

    Packs.add(P);
    Worklist.append(P->getOperands());
    for (auto &M : P->masks())
      ProcessMaskOperands(M);
    LoopBundle Loops;
    for (auto *I : P->values())
      Loops.push_back(getLoopFor(I, PSSA, LIT));
    ProcessLoopBundle(Loops);
  };

  ProcessNewPack(P);

  while (!Worklist.empty()) {
    auto Values = Worklist.pop_back_val();
    if (any_of(Values, IsPacked) || !Visited.insert(Values).second)
      continue;

    llvm::for_each(Heuristic.getProducer(Values), ProcessNewPack);
  }
}

namespace {

struct Structure : FoldingSetNode {
  unsigned Opcode;
  Type *Ty;
  SmallVector<Structure *, 2> Operands;

  Structure(unsigned Opcode, Type *Ty, ArrayRef<Structure *> Operands)
      : Opcode(Opcode), Ty(Ty), Operands(Operands.begin(), Operands.end()) {}

  void Profile(FoldingSetNodeID &ID) const {
    ID.AddInteger(Opcode);
    ID.AddPointer(Ty);
    for (auto *O : Operands)
      ID.AddPointer(O);
  }
};

// Expressions with the same computation graph should have the same structure
class StructureNumbering {
  BumpPtrAllocator Allocator;
  FoldingSet<Structure> UniqueStructures;
  Structure *getUniqueStructure(unsigned Opcode, Type *Ty,
                                ArrayRef<Structure *> Operands = None) {
    auto *S = new (Allocator) Structure(Opcode, Ty, Operands);
    return UniqueStructures.GetOrInsertNode(S);
  }
  DenseMap<Instruction *, Structure *> InstToStructMap;

public:
  Structure *getStructure(Instruction *I) {
    if (auto It = InstToStructMap.find(I); It != InstToStructMap.end())
      return It->second;

    // Instructions with side effects are terminal (e.g., loads, actual function
    // calls). Same for phi nodes
    if (I->mayReadOrWriteMemory() || isa<PHINode>(I))
      return InstToStructMap[I] =
                 getUniqueStructure(I->getOpcode(), I->getType());
    SmallVector<Structure *> Operands;
    for (auto *O : I->operand_values())
      Operands.push_back(getStructure(O));
    return InstToStructMap[I] =
               getUniqueStructure(I->getOpcode(), I->getType(), Operands);
  }
  Structure *getStructure(Value *V) {
    if (auto *I = dyn_cast<Instruction>(V))
      return getStructure(I);
    return nullptr;
  }
};

} // namespace

using StoreGroupType = std::map<Instruction *, SmallVector<Instruction *, 8>>;
// Partition the stores by whether two stores are comparable.
// E.g., a[i] and a[j] (assuming we know nothing more about i and j) are not
// comparable, while a[i] and a[i+2] are comparable.
static void partitionStores(ArrayRef<Instruction *> Stores,
                            StoreGroupType &Groups, const DataLayout &DL,
                            ScalarEvolution &SE, LoopInfo &LI) {
  std::map<std::pair<Value *, Type *>, SmallVector<Instruction *>>
      PtrToStoresMap;
  for (auto *Store : Stores) {
    auto *Ty = getLoadStoreType(Store);
    auto *Ptr = getLoadStorePointerOperand(Store);
    PtrToStoresMap[{Ptr, Ty}].push_back(Store);
  }

  // Set of stores assigned to a group
  DenseSet<Instruction *> AssignedStores;
  StructureNumbering SN;
  while (AssignedStores.size() < Stores.size()) {
    for (auto [Key, Stores] : PtrToStoresMap) {
      auto *Ptr = Key.first;
      auto *Ty = Key.second;

      SmallVector<Instruction *> UnassignedStores;
      for (auto *Store : Stores)
        if (!AssignedStores.count(Store))
          UnassignedStores.push_back(Store);
      if (UnassignedStores.empty())
        continue;

      auto HasSamePointer = [Ptr](Instruction *I) {
        return getLoadStorePointerOperand(I) == Ptr;
      };
      bool Found = false;
      for (auto &KV : Groups) {
        auto *Store2 = KV.first;
        auto *Ty2 = getLoadStoreType(Store2);
        auto *Ptr2 = getLoadStorePointerOperand(Store2);

        if (diffPointers(Ty, Ptr, Ty2, Ptr2, DL, SE, LI) &&
            !llvm::count_if(KV.second, HasSamePointer)) {
          Found = true;
          Instruction *BestStore = UnassignedStores.front();
          // Now that we find a store group with comparable pointers,
          // pick from `UnassignedStores` with the same structure, if possible
          auto *S = SN.getStructure(cast<StoreInst>(Store2)->getValueOperand());
          for (auto *Store : UnassignedStores)
            if (S == SN.getStructure(cast<StoreInst>(Store)->getValueOperand()))
              BestStore = Store;
          KV.second.push_back(BestStore);
          AssignedStores.insert(BestStore);
          break;
        }
      }
      if (!Found) {
        auto *Store = UnassignedStores.front();
        AssignedStores.insert(Store);
        Groups[Store].push_back(Store);
      }
    }
  }
}

// Estimate the cost saving from horizontally vectorizing a list of values
// This is basically the bottom-up heuristic, except we want to consider reuses
// of vector values. Similar to the bottom-up heuristic, we still don't
// calculate extraction cost.
static InstructionCost getReductionSaving(BottomUpHeuristic &H,
                                          ArrayRef<Value *> Values) {
  OperandPack Root(Values.begin(), Values.end());
  SmallVector<OperandPack> Worklist{Root};
  DenseSet<OperandPack, VectorHashInfo<OperandPack>> Visited;
  InstructionCost VectorCost = 0;
  while (!Worklist.empty()) {
    auto Operand = Worklist.pop_back_val();
    if (!Visited.insert(Operand).second)
      continue;
    auto Packs = H.getProducer(Operand);
    if (!Packs.empty()) {
      for (auto *P : Packs) {
        Worklist.append(P->getOperands());
        VectorCost += P->getCost() * H.getTripCount(P->values());
      }
    } else {
      VectorCost += H.getCost(Operand);
    }
  }
  auto TripCount = H.getTripCount(Values);
  unsigned Rounds = Log2_32_Ceil(Values.size());
  // Include cost of doing horizontal reduction
  // Every round we have to do one shuffle and add/mul/etc
  // And finally we have to pay an extract cost.
  auto RdxCost = Rounds * 2 + 1;
  VectorCost += RdxCost * TripCount;

  InstructionCost ScalarCost = 0;
  for (auto *V : Values)
    ScalarCost += H.getCost(V);
  return ScalarCost - VectorCost;
}

// Find list of reduction elements that are profitable to pack together
// Also return their saving estimate
static void findPackableReductions(
    SmallVectorImpl<std::pair<Pack *, InstructionCost>> &Seeds,
    PredicatedSSA &PSSA, ReductionInfo &RI, LooseInstructionTable &LIT,
    BottomUpHeuristic &Heuristic, TargetTransformInfo &TTI) {
  unsigned MaxVecWidth = TTI.getLoadStoreVecRegBitWidth(0 /*address space*/);
  class ReductionFinder : public PSSAVisitor<ReductionFinder> {
    ReductionInfo &RI;
    SetVector<Reduction *> &Rdxs;

  public:
    ReductionFinder(ReductionInfo &RI, SetVector<Reduction *> &Rdxs)
        : RI(RI), Rdxs(Rdxs) {}

    void visitInstruction(Instruction *I) {
      auto *Rdx = RI.getReductionFor(I);
      if (Rdx)
        Rdxs.insert(Rdx);
    }
  };

  // FIXME: find a better way to configure the available vector width
  SmallVector<unsigned> VectorLengths{2, 4, 8, 16};

  SetVector<Reduction *> Rdxs;
  visitWith<ReductionFinder>(PSSA, RI, Rdxs);

  for (auto *Rdx : Rdxs) {
    // Find out the elements that we are reducing over
    // FIXME: rename this sub reduction
    SmallVector<Value *> Elements;
    RI.split(Rdx, Rdx->size(), Elements);

    // Mapping <inner loops> -> <sub reductions they are involved>
    std::map<VLoop *, SmallVector<Value *>> LoopToReductionsMap;
    for (auto *V : Elements) {
      auto *SubRdx = cast<Reduction>(V);
      assert(SubRdx->size() == 1);
      auto &Elt = SubRdx->Elements.front();
      // If the this is now a loop reduction, we will use the null loop
      VLoop *VL = nullptr;
      if (!Elt.Loops.empty())
        VL = Elt.Loops.front();
      LoopToReductionsMap[VL].push_back(V);
    }

    unsigned MaxVecLen = MaxVecWidth / Rdx->getType()->getScalarSizeInBits();

    for (auto SubRdxs : make_second_range(LoopToReductionsMap)) {
      if (SubRdxs.size() < 2)
        continue;

      // Round the number of reduction elements to even and use as the seed
      ArrayRef<Value *> Seed(SubRdxs.data(), SubRdxs.size() / 2 * 2);

      if (auto *P = Heuristic.getSingleProducer(Seed)) {
        SmallVector<Value *> Args;
        for (auto X : llvm::enumerate(Elements))
          if (!llvm::count(Seed, X.value()))
            Args.push_back(X.value());
        Args.append(Seed.begin(), Seed.end());
        auto *R = LIT.getOrCreateReducer(Rdx, Args);
        auto Saving = getReductionSaving(Heuristic, Seed);
        unsigned VecLen = MaxVecLen;
        if (Seed.size() < VecLen)
          VecLen = Seed.size();
        Seeds.emplace_back(new ReductionPack(R, Seed.size(), VecLen), Saving);
      }
    }
  }
}

std::vector<Pack *> packBottomUp(ArrayRef<InstructionDescriptor> InstPool,
                                 VersioningPlan &VerPlan, PredicatedSSA &PSSA,
                                 ReductionInfo &RI, LooseInstructionTable &LIT,
                                 Matcher &TheMatcher, const DataLayout &DL,
                                 ScalarEvolution &SE, DominatorTree &DT,
                                 LoopInfo &LI, AAResults &AA,
                                 DependenceInfo &DI, TargetTransformInfo &TTI) {
  StoreGrouper::ObjToInstMapTy ObjToStoreMap;
  visitWith<StoreGrouper>(PSSA, ObjToStoreMap);

  DependenceChecker DepChecker(PSSA, DI, AA, LI, SE);

  BottomUpHeuristic Heuristic(InstPool, PSSA, RI, LIT, TheMatcher, DL, SE, DT,
                              LI, TTI);
  PackSet Packs;
  auto PrevCost = getTotalCost(PSSA, Packs, RI, LIT, TTI);

  auto VectorizeStoreChain = [&](ArrayRef<Instruction *> Stores) {
    if (Stores.size() <= 1)
      return;

    unsigned Depth = getLoopDepth(PSSA, Stores.front(), LIT);
    for (auto *I : drop_begin(Stores))
      if (getLoopDepth(PSSA, I, LIT) != Depth)
        return;

    SmallVector<Instruction *> SortedStores;
    // FIXME: deal with cases when there are gaps between the stores
    if (!sortByPointers(Stores, SortedStores, DL, SE, LI))
      return;

    if (auto *Ptr = dyn_cast<Instruction>(
            getLoadStorePointerOperand(SortedStores.front()))) {
      auto *C = findSpeculativeCond(Ptr, SortedStores, PSSA);
      if (!canSpeculateAt(Ptr, C, PSSA))
        return;
    }

    auto *StoreP = StorePack::tryPack(SortedStores, DL, SE, LI, PSSA);
    if (!StoreP)
      return;

    errs() << "Found seed store pack: " << *StoreP << '\n';
    PackSet Scratch = Packs;
    runBottomUp(StoreP, Heuristic, PSSA, LIT, SE, DepChecker, Scratch, VerPlan);
    auto NewCost = getTotalCost(PSSA, Scratch, RI, LIT, TTI);
    // FIXME: need to check for dep cycle
    errs() << "Prev cost: " << PrevCost << ", new cost: " << NewCost << '\n';
    if (NewCost < PrevCost) {
      PrevCost = NewCost;
      Packs = std::move(Scratch);
    }
  };

  for (ArrayRef<Instruction *> Stores : make_second_range(ObjToStoreMap)) {
    StoreGroupType StoreGroups;
    partitionStores(Stores, StoreGroups, DL, SE, LI);
    for_each(make_second_range(StoreGroups), VectorizeStoreChain);
  }

  auto VectorizeReduction = [&](Pack *Seed) {
    PackSet Scratch = Packs;
    assert(isa<ReductionPack>(Seed));

    // Pack the horizontal reduction
    runBottomUp(Seed, Heuristic, PSSA, LIT, SE, DepChecker, Scratch, VerPlan);

    auto NewCost = getTotalCost(PSSA, Scratch, RI, LIT, TTI);
    // FIXME: need to check for dep cycle
    errs() << "Prev cost: " << PrevCost << ", new cost: " << NewCost << '\n';
    if (NewCost < PrevCost) {
      PrevCost = NewCost;
      Packs = std::move(Scratch);
    }
  };

  if (!NoReductionPacking) {
    SmallVector<std::pair<Pack *, InstructionCost>> RdxSeeds;
    findPackableReductions(RdxSeeds, PSSA, RI, LIT, Heuristic, TTI);

    if (!RdxSeeds.empty()) {
      llvm::stable_sort(RdxSeeds, [](const auto &A, const auto &B) {
        return A.second > B.second;
      });
      VectorizeReduction(RdxSeeds.front().first);
    }
  }

  for (auto *P : Packs)
    errs() << "pack " << *P << '\n';

  std::vector<Pack *> ThePacks;
  ThePacks.reserve(Packs.size());
  for (auto *P : Packs)
    ThePacks.push_back(P->clone());
  return ThePacks;
}

std::vector<Pack *> packVersioningPhis(ArrayRef<Pack *> Packs,
                                       const Versioner &TheVersioner,
                                       PredicatedSSA &PSSA) {
  std::vector<Pack *> NewPacks;
  for (auto *P : Packs) {
    auto Values = P->values();
    ArrayRef VersioningPhis = TheVersioner.getVersioningPhis(Values.front());
    unsigned NumVersions = VersioningPhis.size();
    if (NumVersions == 0)
      continue;
    if (any_of(drop_begin(Values), [&](auto *I) {
          return TheVersioner.getVersioningPhis(I).size() != NumVersions;
        }))
      continue;
    for (unsigned i = 0; i < NumVersions; i++) {
      SmallVector<Instruction *> Phis;
      for (auto *I : Values)
        Phis.push_back(TheVersioner.getVersioningPhis(I)[i]);
      if (auto *PhiP = PHIPack::tryPack(Phis, PSSA)) {
        errs() << "!!! packing " << *PhiP << '\n';
        NewPacks.push_back(PhiP);
      }
    }
  }
  return NewPacks;
}
