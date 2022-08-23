#include "AddrUtil.h"
#include "DependenceChecker.h"
#include "PackSet.h"
#include "TripCount.h"
#include "pssa/VectorHashInfo.h"
#include "pssa/Visitor.h"
#include "vegen/Lower.h"
#include "vegen/Pack.h"
#include "llvm/ADT/TinyPtrVector.h"
#include "llvm/Analysis/LoopInfo.h"
#include "llvm/Analysis/TargetTransformInfo.h"
#include "llvm/Analysis/ValueTracking.h" // getUnderlyingObject
#include "llvm/IR/Instructions.h"

using namespace llvm;

namespace {

// A class that enumerates a list of packs
// that can produce a given vector
class Packer {
  PredicatedSSA &PSSA;
  const llvm::DataLayout &DL;
  ScalarEvolution &SE;
  llvm::LoopInfo &LI;

public:
  Packer(PredicatedSSA &PSSA, const llvm::DataLayout &DL,
         llvm::ScalarEvolution &SE, llvm::LoopInfo &LI)
      : PSSA(PSSA), DL(DL), SE(SE), LI(LI) {}
  TinyPtrVector<Pack *> getProducers(llvm::ArrayRef<llvm::Value *>);
};

class BottomUpHeuristic {
  Packer Pkr;
  TargetTransformInfo &TTI;

  struct Solution {
    std::unique_ptr<Pack> P;
    InstructionCost Cost;

    Solution(Pack *P, InstructionCost Cost) : P(P), Cost(Cost) {}
    Solution(Solution &&) = default;
    Solution &operator=(Solution &&) = default;

    void update(Pack *P2, InstructionCost Cost2) {
      if (Cost < Cost2) {
        delete P2;
        return;
      }

      Cost = Cost2;
      P.reset(P2);
    }
  };

  struct SolutionView {
    Pack *P;
    InstructionCost Cost;
    SolutionView(const Solution &Soln) : P(Soln.P.get()), Cost(Soln.Cost) {}
  };

  using ValueVector = SmallVector<Value *, 8>;

  DenseMap<ValueVector, Solution, VectorHashInfo<ValueVector>> Solutions;
  SolutionView solve(ArrayRef<Value *>);

  // Get the cost of producing a value as scalar
  DenseMap<Instruction *, InstructionCost> ScalarCosts;
  InstructionCost getCost(Value *);
  InstructionCost getCost(Pack *);

public:
  BottomUpHeuristic(PredicatedSSA &PSSA, const llvm::DataLayout &DL,
                    llvm::ScalarEvolution &SE, llvm::LoopInfo &LI,
                    TargetTransformInfo &TTI)
      : Pkr(PSSA, DL, SE, LI), TTI(TTI) {}
  Pack *getProducer(ArrayRef<Value *> Values) { return solve(Values).P; }
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

static unsigned getLoopDepth(PredicatedSSA &PSSA, VLoop *VL) {
  if (!VL->isLoop())
    return 0;
  return PSSA.getOrigLoop(VL)->getLoopDepth();
}

static unsigned getLoopDepth(PredicatedSSA &PSSA, Instruction *I) {
  return getLoopDepth(PSSA, PSSA.getLoopForInst(I));
}

// FIXME: make sure that the packed instructions are independent
// FIXME: make sure we are packing instructions that have the same nesting depth
TinyPtrVector<Pack *> Packer::getProducers(ArrayRef<Value *> Values) {
  SmallVector<Instruction *, 8> Insts;
  for (auto *V : Values) {
    auto *I = dyn_cast_or_null<Instruction>(V);
    if (!I)
      return {};
    Insts.push_back(I);
  }

  unsigned Depth = getLoopDepth(PSSA, Insts.front());
  for (auto *I : drop_begin(Insts))
    if (getLoopDepth(PSSA, I) != Depth)
      return {};

  if (auto *P = LoadPack::tryPack(Insts, DL, SE, LI, PSSA)) {
    // Make sure when we pack divergent loads we can speculate the address
    auto *Ptr =
        dyn_cast<Instruction>(getLoadStorePointerOperand(P->values().front()));
    if (!Ptr)
      return {P};
    auto *C = findSpeculativeCond(Ptr, Insts, PSSA);
    if (canSpeculateAt(Ptr, C, PSSA))
      return {P};
  }

  if (auto *P = PHIPack::tryPack(Insts, PSSA))
    return {P};
  if (auto *P = BlendPack::tryPack(Insts, PSSA))
    return {P};
  if (auto *P = MuPack::tryPack(Insts, PSSA))
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

  return Producers;
}

template <typename ValuesT>
FixedVectorType *getVectorType(const ValuesT &Values) {
  return FixedVectorType::get(Values.front()->getType(), Values.size());
}

static bool isUndefOrConstant(Value *V) { return !V || isa<Constant>(V); }

BottomUpHeuristic::SolutionView
BottomUpHeuristic::solve(ArrayRef<Value *> Values) {
  auto *VecTy = getVectorType(Values);

  // No cost for constant/undef vector
  if (all_of(Values, isUndefOrConstant))
    return Solution(nullptr, 0);

  // If we can produce this vector by broadcast ...
  if (is_splat(Values)) {
    InstructionCost Cost =
        getCost(Values.front()) +
        TTI.getShuffleCost(TTI::SK_Broadcast, VecTy, /*Mask=*/None, /*Index=*/0,
                           /*SubTy*/ nullptr, /*Args=*/Values.front());
    return Solution(nullptr, Cost);
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
        TTI.getVectorInstrCost(Instruction::InsertElement, VecTy, X.index());
  }

  Solution Soln(nullptr, ScalarCost);
  for (auto *P : Pkr.getProducers(Values))
    Soln.update(P, getCost(P));

  SolutionView Ret = Soln;
  Solutions.find_as(Values)->second = std::move(Soln);
  return Ret;
}

InstructionCost BottomUpHeuristic::getCost(Pack *P) {
  auto Cost = P->getCost();
  for (auto &O : P->getOperands())
    Cost += solve(O).Cost;
  return Cost;
}

static InstructionCost getScalarCost(Instruction *I, TargetTransformInfo &TTI) {
  if (isa<PHINode>(I))
    return 0;
  return TTI.getInstructionCost(I, TTI::TCK_RecipThroughput);
}

// Get the cost of producing a value as scalar
InstructionCost BottomUpHeuristic::getCost(Value *V) {
  auto *I = dyn_cast_or_null<Instruction>(V);
  if (!I)
    return 0;

  if (auto It = ScalarCosts.find(I); It != ScalarCosts.end())
    return It->second;

  ScalarCosts[I] = 0;

  auto Cost = getScalarCost(I, TTI);
  for (auto *O : I->operand_values())
    Cost += getCost(O);
  return ScalarCosts[I] = Cost;
}

// FIXME: INISH
static InstructionCost getSaving(const PackSet &Packs,
                                 TargetTransformInfo &TTI) {
  DenseSet<OperandPack, VectorHashInfo<OperandPack>> ShuffledOps;
  InstructionCost Saving = 0;
  auto IsPacked = [&Packs](Value *V) { return Packs.isPacked(V); };
  for (auto *P : Packs) {
    Type *VecTy = nullptr;
    if (!isa<StorePack>(P))
      VecTy = getVectorType(P->values());

    // Cost from running the vector inst.
    Saving -= P->getCost();
    for (auto X : enumerate(P->values())) {
      Instruction *I = X.value();
      // FIXME: take into account of complex operation like FMA
      // Saving from killing the scalar instruction
      Saving += getScalarCost(I, TTI);

#if 1
      // Figure out if we need to extract for scalar use
      // FIXME: this doesn't take into account that some users are killed things
      // like FMA
      if (!all_of(I->users(), IsPacked)) {
        Saving -= TTI.getVectorInstrCost(Instruction::ExtractElement, VecTy,
                                         X.index());
      }
#else
      for (auto *U : I->users()) {
        if (!IsPacked(U)) {
          errs() << "??? paying extract cost for use of " << *I
                 << ", user = " << *U << '\n';
          Saving -= TTI.getVectorInstrCost(Instruction::ExtractElement, VecTy,
                                           X.index());
          break;
        }
      }
#endif
    }

    // Figure out cost of shuffling the required operands
    for (const OperandPack &O : P->getOperands()) {
      auto *OpVecTy = getVectorType(O);

      // No shuffling cost for constant vector
      if (all_of(O, isUndefOrConstant))
        continue;

      // We can build the vector by broadcast
      if (!IsPacked(O.front()) && is_splat(O)) {
        Saving -=
            TTI.getShuffleCost(TargetTransformInfo::SK_Broadcast, OpVecTy);
        continue;
      }

      SmallPtrSet<Pack *, 2> SrcPacks;
      for (auto X : enumerate(O)) {
        Value *V = X.value();
        // Remember the vectors that we need to shuffle from
        if (auto *P2 = Packs.getPackForValue(V)) {
          SrcPacks.insert(P2);
        } else if (!isa<Constant>(V)) {
          // Pay the insertion cost
          Saving -= TTI.getVectorInstrCost(Instruction::InsertElement, OpVecTy,
                                           X.index());
        }
      }

      if (SrcPacks.empty())
        continue;

      if (SrcPacks.size() == 1) {
        auto *SrcP = *SrcPacks.begin();
        // No shuffle cost if O is produced exactly by some other pack
        if (all_of_zip(SrcP->values(), O,
                       [](auto *V1, auto *V2) { return V1 == V2; }))
          continue;

        Saving -= TTI.getShuffleCost(TargetTransformInfo::SK_PermuteSingleSrc,
                                     OpVecTy);
        continue;
      }

      // In general, gather the vector elements from the source vectors pairwise
      auto ShflCost =
          TTI.getShuffleCost(TargetTransformInfo::SK_PermuteTwoSrc, OpVecTy);
      unsigned NumShfls = SrcPacks.size() - 1;
      Saving -= ShflCost * NumShfls;
    }
  }
  return Saving;
}

// FIXME: also pack stuff required by masking
static void runBottomUp(OperandPack Root, BottomUpHeuristic &Heuristic,
                        PredicatedSSA &PSSA, ScalarEvolution &SE,

                        PackSet &Packs) {
  auto IsPacked = [&Packs](auto *V) { return Packs.isPacked(V); };

  DenseSet<OperandPack, VectorHashInfo<OperandPack>> Visited;
  SmallVector<OperandPack> Worklist{Root};

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

  while (!Worklist.empty()) {
    auto Values = Worklist.pop_back_val();
    if (any_of(Values, IsPacked) || !Visited.insert(Values).second)
      continue;
    auto *P = Heuristic.getProducer(Values);
    if (!P)
      continue;
    Packs.add(P);
    Worklist.append(P->getOperands());
    for (auto &M : P->masks())
      ProcessMaskOperands(M);
    LoopBundle Loops;
    for (auto *I : P->values())
      Loops.push_back(PSSA.getLoopForInst(I));
    ProcessLoopBundle(Loops);
  }
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

using StoreGroupType = std::map<Instruction *, SmallVector<Instruction *, 8>>;
// Partition the stores by whether two stores are comparable.
// E.g., a[i] and a[j] (assuming we know nothing more about i and j) are not
// comparable, while a[i] and a[i+2] are comparable.
static void partitionStores(ArrayRef<Instruction *> Stores,
                            StoreGroupType &Groups, const DataLayout &DL,
                            ScalarEvolution &SE, LoopInfo &LI) {
  for (auto *Store : Stores) {
    auto *Ty = getLoadStoreType(Store);
    auto *Ptr = getLoadStorePointerOperand(Store);
    bool Found = false;
    for (auto &KV : Groups) {
      auto *Store2 = KV.first;
      auto *Ty2 = getLoadStoreType(Store2);
      auto *Ptr2 = getLoadStorePointerOperand(Store2);
      if (diffPointers(Ty, Ptr, Ty2, Ptr2, DL, SE, LI)) {
        Found = true;
        KV.second.push_back(Store);
        break;
      }
    }
    if (!Found)
      Groups[Store].push_back(Store);
  }
}

std::vector<Pack *> packBottomUp(PredicatedSSA &PSSA, const DataLayout &DL,
                                 ScalarEvolution &SE, LoopInfo &LI,
                                 AAResults &AA, DependenceInfo &DI,
                                 TargetTransformInfo &TTI) {
  StoreGrouper::ObjToInstMapTy ObjToStoreMap;
  visitWith<StoreGrouper>(PSSA, ObjToStoreMap);

  DependenceChecker DepChecker(PSSA, DI, AA, LI);

  BottomUpHeuristic Heuristic(PSSA, DL, SE, LI, TTI);
  PackSet Packs;
  auto PrevSaving = getSaving(Packs, TTI);

  auto VectorizeStoreChain = [&](ArrayRef<Instruction *> Stores) {
    if (Stores.size() <= 1)
      return;

    unsigned Depth = getLoopDepth(PSSA, Stores.front());
    for (auto *I : drop_begin(Stores))
      if (getLoopDepth(PSSA, I) != Depth)
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

    if (!isIndependent(Stores, PSSA, DepChecker))
      return;

    auto *StoreP = StorePack::tryPack(SortedStores, DL, SE, LI, PSSA);
    if (!StoreP)
      return;

    errs() << "Found seed store pack: " << *StoreP << '\n';
    PackSet Scratch = Packs;
    Scratch.add(StoreP);
    auto Operands = StoreP->getOperands();
    runBottomUp(Operands.front(), Heuristic, PSSA, SE, Scratch);
    auto NewSaving = getSaving(Scratch, TTI);
    // FIXME: need to check for dep cycle
    errs() << "Prev saving: " << PrevSaving << ", new saving " << NewSaving
           << '\n';
    if (NewSaving >= PrevSaving) {
      PrevSaving = NewSaving;
      Packs = std::move(Scratch);
    }
  };

  for (ArrayRef<Instruction *> Stores : make_second_range(ObjToStoreMap)) {
    StoreGroupType StoreGroups;
    partitionStores(Stores, StoreGroups, DL, SE, LI);
    for_each(make_second_range(StoreGroups), VectorizeStoreChain);
  }
  for (auto *P : Packs)
    errs() << "pack " << *P << '\n';

  std::vector<Pack *> ThePacks;
  ThePacks.reserve(Packs.size());
  for (auto *P : Packs)
    ThePacks.push_back(P->clone());
  return ThePacks;
}
