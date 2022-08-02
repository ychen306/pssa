#include "AddrUtil.h"
#include "PackSet.h"
#include "pssa/PSSA.h"
#include "pssa/VectorHashInfo.h"
#include "pssa/Visitor.h"
#include "vegen/Pack.h"
#include "llvm/ADT/TinyPtrVector.h"
#include "llvm/Analysis/TargetTransformInfo.h"
#include "llvm/Analysis/ValueTracking.h" // getUnderlyingObject
#include "llvm/IR/Instructions.h"
#include "llvm/IR/Intrinsics.h"

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
    Value *Obj = getUnderlyingObject(SI->getPointerOperand());
    ObjToStoreMap[Obj].push_back(SI);
  }
};

} // namespace

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

  if (auto *P = PHIPack::tryPack(Insts, PSSA))
    return {P};
  if (auto *P = BlendPack::tryPack(Insts, PSSA))
    return {P};
  if (auto *P = MuPack::tryPack(Insts, PSSA))
    return {P};
  if (auto *P = GEPPack::tryPack(Insts))
    return {P};
  if (auto *P = LoadPack::tryPack(Insts, DL, SE, LI, PSSA))
    return {P};
  if (auto P = GatherPack::tryPack(Insts, PSSA))
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
                        PackSet &Packs) {
  auto IsPacked = [&Packs](auto *V) { return Packs.isPacked(V); };

  DenseSet<OperandPack, VectorHashInfo<OperandPack>> Visited;
  SmallVector<OperandPack> Worklist{Root};

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
  }
}

std::vector<std::unique_ptr<Pack>>
packBottomUp(PredicatedSSA &PSSA, const DataLayout &DL, ScalarEvolution &SE,
             LoopInfo &LI, TargetTransformInfo &TTI) {
  StoreGrouper::ObjToInstMapTy ObjToStoreMap;
  visitWith<StoreGrouper>(PSSA, ObjToStoreMap);

  BottomUpHeuristic Heuristic(PSSA, DL, SE, LI, TTI);
  PackSet Packs;
  auto PrevSaving = getSaving(Packs, TTI);

  for (ArrayRef<Instruction *> Stores : make_second_range(ObjToStoreMap)) {
    SmallVector<Instruction *> SortedStores;
    // FIXME: deal with cases when there are gaps between the stores
    if (!sortByPointers(Stores, SortedStores, DL, SE, LI))
      continue;

    auto *StoreP = StorePack::tryPack(SortedStores, DL, SE, LI, PSSA);
    if (!StoreP)
      continue;

    errs() << "Found seed store pack: " << *StoreP << '\n';
    PackSet Scratch = Packs;
    Scratch.add(StoreP);
    auto Operands = StoreP->getOperands();
    runBottomUp(Operands.front(), Heuristic, Scratch);
    auto NewSaving = getSaving(Scratch, TTI);
    if (NewSaving >= PrevSaving or true) {
      errs() << "Prev saving: " << PrevSaving << ", new saving " << NewSaving
             << '\n';
      PrevSaving = NewSaving;
      Packs = std::move(Scratch);
    }
  }
  for (auto *P : Packs)
    errs() << "pack " << *P << '\n';

  std::vector<std::unique_ptr<Pack>> ThePacks;
  ThePacks.reserve(Packs.size());
  for (auto *P : Packs)
    ThePacks.emplace_back(P->clone());
  return ThePacks;
}
