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
  PredicatedSSA &PSSA;
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
      : PSSA(PSSA), Pkr(PSSA, DL, SE, LI), TTI(TTI) {}
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

BottomUpHeuristic::SolutionView
BottomUpHeuristic::solve(ArrayRef<Value *> Values) {
  auto *VecTy = FixedVectorType::get(Values.front()->getType(), Values.size());

  // No cost for constant/undef vector
  if (all_of(Values, [](Value *V) { return !V || isa<Constant>(V); }))
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

  Solutions.try_emplace(ValueVector(Values.begin(), Values.end()),
                        nullptr, 0);

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
static InstructionCost getSaving(ArrayRef<Pack *> Packs) {}

// FIXME: also pack stuff required by masking
static void runBottomUp(OperandPack Root, BottomUpHeuristic &Heuristic,
                        PackSet &Packs) {
  auto IsPacked = [&Packs](auto *V) { return Packs.isPacked(V); };

  DenseSet<OperandPack, VectorHashInfo<OperandPack>> Visited;
  SmallVector<OperandPack> Worklist{Root};

  while (!Worklist.empty()) {
    auto Values = Worklist.pop_back_val();
    if (any_of(Values, IsPacked) || !Visited.insert(Values).second)
      continue;
    auto *P = Heuristic.getProducer(Values);
    if (!P)
      continue;
    Packs.add(P);
    Worklist.append(P->getOperands());
  }
}

std::vector<std::unique_ptr<Pack>>
packBottomUp(PredicatedSSA &PSSA, const DataLayout &DL, ScalarEvolution &SE,
             LoopInfo &LI, TargetTransformInfo &TTI) {
  StoreGrouper::ObjToInstMapTy ObjToStoreMap;
  visitWith<StoreGrouper>(PSSA, ObjToStoreMap);

  BottomUpHeuristic Heuristic(PSSA, DL, SE, LI, TTI);

  for (ArrayRef<Instruction *> Stores : make_second_range(ObjToStoreMap)) {
    SmallVector<Instruction *> SortedStores;
    // FIXME: deal with cases when there are gaps between the stores
    if (!sortByPointers(Stores, SortedStores, DL, SE, LI))
      continue;

    auto *StoreP = StorePack::tryPack(SortedStores, DL, SE, LI, PSSA);
    if (!StoreP)
      continue;

    errs() << "Found seed store pack: " << *StoreP << '\n';
    PackSet Packs;
    auto Operands = StoreP->getOperands();
    runBottomUp(Operands.front(), Heuristic, Packs);
    for (auto *P : Packs)
      errs() << "pack " << *P << '\n';
  }

  std::vector<std::unique_ptr<Pack>> Packs;
  return Packs;
}
