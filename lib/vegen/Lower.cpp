#include "pssa/Inserter.h"
#include "pssa/PSSA.h"
#include "pssa/VectorHashInfo.h"
#include "vegen/Pack.h"
#include "llvm/ADT/EquivalenceClasses.h"
#include "llvm/Analysis/DependenceAnalysis.h"
#include "llvm/IR/Constants.h"
#include "llvm/Support/CommandLine.h"
#include "llvm/Transforms/Utils/ValueMapper.h"

using namespace llvm;

namespace {

cl::opt<bool>
    DontPackConditions("disable-cond-packing",
                       cl::desc("disable secondary (condition) packing"),
                       cl::init(false));

bool mayReadOrWriteMemory(Instruction *I) {
  return isa<ReturnInst>(I) || I->mayReadOrWriteMemory();
}

bool mayReadOrWriteMemory(const Item &It) {
  if (auto *I = It.asInstruction())
    return mayReadOrWriteMemory(I);
  return true;
}

class DependenceChecker {
  struct LoopSummary {
    SmallVector<Instruction *, 8> LiveIns, MemoryInsts;
  };

  DependenceInfo &DI;
  // use std::map to avoid reacllocation
  std::map<VLoop *, LoopSummary> Summaries;

  void processLoop(VLoop *VL) {
    if (Summaries.count(VL))
      return;

    auto &Summary = Summaries[VL];
    for (auto &It : VL->items()) {
      if (auto *SubVL = It.asLoop()) {
        processLoop(SubVL);
        auto &SubSummary = Summaries[SubVL];
        Summary.MemoryInsts.append(SubSummary.MemoryInsts);
        // FIXME: also consider control deps
        for (auto *I : SubSummary.LiveIns)
          if (!VL->contains(I))
            Summary.LiveIns.push_back(I);
      } else {
        assert(It.asInstruction());
        for (Value *O : It.asInstruction()->operand_values()) {
          auto *OI = dyn_cast<Instruction>(O);
          if (OI && !VL->contains(OI))
            Summary.LiveIns.push_back(OI);
        }
      }
    }
  }

  ArrayRef<Instruction *> getMemoryInsts(VLoop *VL) {
    processLoop(VL);
    assert(Summaries.count(VL));
    return Summaries[VL].MemoryInsts;
  }

public:
  DependenceChecker(DependenceInfo &DI) : DI(DI) {}
  void invalidate(VLoop *VL) { Summaries.erase(VL); }
  // Check if there's any *memory dependence* from It1 to It2 (assuming It1
  // comes before It2), assuming It1 and It2 have the same parent.
  bool depends(const Item &It1, const Item &It2) {
    auto *I1 = It1.asInstruction();
    auto *I2 = It2.asInstruction();
    auto *VL1 = It1.asLoop();
    auto *VL2 = It2.asLoop();
    if (I1 && I2) {
      // TODO: directly query AA for better precision,
      // if I1 and I2 are in the same loop?
      auto Dep = DI.depends(I1, I2, true);
      return Dep && Dep->isOrdered();
    }

    assert((I1 && VL2) || (VL1 && I2));

    // Collapse the two cases.
    // We just want to find out if there's any ordered (non-input)
    // dependences between the instruction and loop.
    if (VL1 && I2) {
      I1 = I2;
      VL2 = VL1;
    }
    assert(I1 && VL2);

    // Don't bother if I1 doesn't touch memory
    if (!mayReadOrWriteMemory(I1))
      return false;

    // Figure out the memory instructions in VL2
    processLoop(VL2);

    return any_of(Summaries[VL2].MemoryInsts, [&](Instruction *I) {
      auto Dep = DI.depends(I1, I, true);
      return Dep && Dep->isOrdered();
    });
  }

  ArrayRef<Instruction *> getLiveIns(VLoop *VL) {
    processLoop(VL);
    assert(Summaries.count(VL));
    return Summaries[VL].LiveIns;
  }
};

// Keep track of the values produced by a lowered pack
template <typename ValueType, typename PackType> class ValueIndex {
public:
  struct Lane {
    unsigned Idx;
    Value *Vec;
    Lane(unsigned Idx, Value *Vec) : Idx(Idx), Vec(Vec) {}
  };

private:
  // Mapping a scalar value to the vector lane that contains the value
  DenseMap<ValueType, Lane> Lanes;

public:
  void insert(Value *VecVal, const PackType *P) {
    for (auto X : enumerate(P->values()))
      if (X.value())
        Lanes.try_emplace(X.value(), (unsigned)X.index(), VecVal);
  }
  Optional<Lane> getLane(ValueType V) const {
    auto It = Lanes.find(V);
    if (It == Lanes.end())
      return None;
    return It->second;
  }
};

Constant *toInt64(LLVMContext &Ctx, int Idx) {
  return ConstantInt::get(Type::getInt64Ty(Ctx), Idx);
}

// Utility to extract scalar values on-demand
class ExtractMaterializer : public ValueMaterializer {
  struct ExtractInfo {
    Value *Vec;
    unsigned Idx;
    Value *Val; // the materialized value (non-null if materialized)

    // Insert point for the materialized extract
    VLoop *VL;
    const ControlCondition *C;
    VLoop::ItemIterator InsertBefore;

    ExtractInfo(Value *Vec, unsigned Idx, VLoop *VL, const ControlCondition *C,
                VLoop::ItemIterator InsertBefore)
        : Vec(Vec), Idx(Idx), Val(nullptr), VL(VL), C(C),
          InsertBefore(InsertBefore) {}
  };
  // mapping scalar value -> the vector (and index) that contains it
  DenseMap<Value *, ExtractInfo> Infos;

public:
  // Remember a materialized vector
  void remember(Pack *P, Value *Vec, VLoop *VL, const ControlCondition *C,
                VLoop::ItemIterator InsertBefore) {
    for (auto X : enumerate(P->values())) {
      if (!X.value())
        continue;
      Infos.try_emplace(X.value(), Vec, X.index(), VL, C, InsertBefore);
    }
  }

  Value *materialize(Value *V) override {
    auto It = Infos.find(V);
    if (It == Infos.end())
      return V;

    auto &Info = It->second;

    // Return the extract if we've done it already
    if (Info.Val)
      return Info.Val;

    auto *Extract = ExtractElementInst::Create(
        Info.Vec, toInt64(V->getContext(), Info.Idx));
    Info.VL->insert(Extract, Info.C, Info.InsertBefore);
    return Info.Val = Extract;
  }
};

using SmallItemVector = SmallVector<Item, 8>;
template <typename SequenceTy> SmallItemVector toItems(SequenceTy Seq) {
  SmallItemVector Items;
  for (auto *X : Seq)
    if (X)
      Items.push_back(X);
  return Items;
}

class VectorGen {
  ValueIndex<Value *, Pack> ValueIdx;
  ValueIndex<const ControlCondition *, ConditionPack> MaskIdx;

  template <typename ValueType, typename PackType>
  Value *gatherValues(ArrayRef<ValueType>,
                      const ValueIndex<ValueType, PackType> &,
                      Inserter &Insert);
  Value *gatherOperand(ArrayRef<Value *>, Inserter &);
  Value *gatherMask(ArrayRef<const ControlCondition *>, Inserter &);

  Value *gatherOperand(ArrayRef<Value *> Values, VLoop *VL,
                       const ControlCondition *C, VLoop::ItemIterator It) {
    Inserter InsertBefore(VL, C, It);
    return gatherOperand(Values, InsertBefore);
  }

  DenseSet<Instruction *> Processed;
  void markAsProcessed(Instruction *I) { Processed.insert(I); }

  DenseSet<const ControlCondition *> ReadyConds;

  // Check wether the data dependences of C has been processed
  bool isReady(const ControlCondition *C) {
    if (!C || ReadyConds.count(C))
      return true;
    if (auto *And = dyn_cast<ConditionAnd>(C)) {
      auto *I = dyn_cast<Instruction>(And->Cond);
      return (!I || Processed.count(I)) && isReady(And->Parent);
    }
    auto *Or = dyn_cast<ConditionOr>(C);
    return all_of(Or->Conds, [this](auto *C) { return isReady(C); });
  }

  bool isReady(ConditionPack *CP) {
    return all_of(CP->values(), [this](auto *C) { return isReady(C); });
  }

  // Mapping conditions -> masks that produce them
  DenseMap<const ControlCondition *, ConditionPack *> CondToPackMap;
  DenseSet<const ConditionPack *> ProcessedCondPacks;

  void emitConditionPack(const ConditionPack *, Inserter &);

  // Util for replacing use of scalar values with extracted vector values
  ExtractMaterializer Extracter;
  ValueToValueMapTy VM;
  ValueMapper Remapper;

  Value *materializeValue(Value *);
  // Keep a uniform interface together with `materialize(const ControlCondition
  // *, Inserter)` This is needed to make gatherValues work.
  Value *materializeValue(Value *V, Inserter &) { return materializeValue(V); }
  Value *materializeValue(const ControlCondition *, Inserter &);

public:
  VectorGen() : Remapper(VM, RF_None, nullptr, &Extracter) {}
  void run(ArrayRef<Pack *> Packs, PredicatedSSA &PSSA, DependenceInfo &DI);
};

template <typename ContainerTy> class DeleteGuard {
  ContainerTy &Container;

public:
  DeleteGuard(ContainerTy &Container) : Container(Container) {}
  ~DeleteGuard() {
    for (auto *X : Container)
      delete X;
  }
};

}; // namespace

// Move the items together while still preserving dependences
static void merge(PredicatedSSA &PSSA, ArrayRef<Item> Items,
                  const DenseMap<Instruction *, Pack *> *InstToPackMap,
                  DependenceChecker &DepChecker) {
  if (Items.size() <= 1)
    return;

  auto *VL = PSSA.getLoopForItem(Items.front());
  auto ComesBefore = [VL](const Item &It1, const Item &It2) {
    return VL->comesBefore(It1, It2);
  };

  assert(all_of(Items,
                [&](const Item &It) { return PSSA.getLoopForItem(It) == VL; }));
  Item Earliest = *std::min_element(Items.begin(), Items.end(), ComesBefore);
  Item Latest = *std::max_element(Items.begin(), Items.end(), ComesBefore);

  DenseSet<Item, ItemHashInfo> Visited;
  DenseSet<const ControlCondition *> VisitedConds;
  SmallVector<Item> Depended;
  // Do DFS on a given item
  std::function<void(const Item &)> Visit;
  auto VisitValue = [&Visit](Value *V) {
    if (auto *I = dyn_cast<Instruction>(V))
      Visit(I);
  };
  std::function<void(const ControlCondition *)> VisitCond =
      [&](const ControlCondition *C) {
        if (!C)
          return;
        if (!VisitedConds.insert(C).second)
          return;

        if (auto *And = dyn_cast<ConditionAnd>(C)) {
          VisitCond(And->Parent);
          VisitValue(And->Cond);
          return;
        }

        auto *Or = cast<ConditionOr>(C);
        for_each(Or->Conds, VisitCond);
      };

  // FIXME: check circular dependencies
  Visit = [&](const Item &It) {
    // Only consider items that come after Earliest
    if (!VL->contains(It) || !VL->comesBefore(Earliest, It))
      return;
    if (!Visited.insert(It).second)
      return;

    ArrayRef<Item> Coupled = It;
    // Process (register) data and control dependences
    if (auto *I = It.asInstruction()) {
      Pack *P = InstToPackMap ? InstToPackMap->lookup(I) : nullptr;
      // If I is packed with other instructions,
      // we also need to check their dependences
      ArrayRef<Instruction *> Insts = P ? P->values() : I;
      for (auto *I : Insts) {
        for_each(I->operand_values(), VisitValue);
        VisitCond(VL->getInstCond(I));
      }
      Coupled = toItems(Insts);
    } else {
      auto *SubVL = It.asLoop();
      for_each(DepChecker.getLiveIns(SubVL), VisitValue);
      VisitCond(SubVL->getLoopCond());
    }

    // Scan the memory dependences between Earliest and It
    if (mayReadOrWriteMemory(It)) {
      for (auto I = std::next(VL->toIterator(Earliest)), E = VL->toIterator(It);
           I != E; ++I) {
        for (auto &It2 : Coupled)
          if (DepChecker.depends(*I, It))
            Visit(*I);
      }
    }

    Depended.push_back(It);
  };

  // Do DFS to find out dependences of the Items that appear after Earliest
  for_each(Items, Visit);

  // FIXME: refactor this out as an BatchItemMover
  ////// Utilities to erase items in batch and re-insert them later //////
  SmallVector<Item> Removed;
  SmallVector<const ControlCondition *> ItemConds;
  auto RemoveItem = [&Removed, &ItemConds, VL](const auto &It) {
    // Remember the items we removed so we can insert them later
    Removed.push_back(It);
    // Remember the conditions of the removed item
    if (auto *I = It.asInstruction()) {
      ItemConds.push_back(VL->getInstCond(I));
    } else {
      // Loops keep track of their own conditions so we don't care here
      ItemConds.push_back(nullptr);
    }
    VL->erase(It);
  };
  // Re-insert the removed items at InsertPoint
  auto ReinsertItems = [&Removed, &ItemConds,
                        VL](VLoop::ItemIterator InsertPt) {
    for (const auto &[It, C] : llvm::zip(Removed, ItemConds)) {
      if (auto *I = It.asInstruction())
        VL->insert(I, C, InsertPt);
      else
        VL->insert(It.asLoop(), InsertPt);
    };

    Removed.clear();
    ItemConds.clear();
  };
  //////////////////////////////////////////////////////////////////////

  // Remove the depended values,
  // and after which the items will look like
  // [before earliest][earliest][items and non deps between earliest and latest]
  DenseSet<Item, ItemHashInfo> ItemSet(Items.begin(), Items.end());
  for (const auto &It : Depended) {
    if (ItemSet.count(It))
      continue;
    RemoveItem(It);
  }

  // Insert the removed items before the earliest so we have
  // [before earliest][depended][items and non deps]
  auto InsertPt = VL->toIterator(Earliest);
  ReinsertItems(InsertPt);

  // Separate the items from the rest so we have
  // [before earliest][depended][earliest][ non deps]
  for (const auto &It : Items) {
    if (It != Earliest)
      RemoveItem(It);
  }

  ReinsertItems(InsertPt);
}

static void partitionLoops(EquivalenceClasses<VLoop *> &LoopsToFuse,
                           ArrayRef<Pack *> Packs, PredicatedSSA &PSSA) {
  SmallVector<SmallItemVector> Worklist(
      llvm::map_range(Packs, [](Pack *P) { return toItems(P->values()); }));

  auto *TopVL = &PSSA.getTopLevel();

  while (!Worklist.empty()) {
    auto Items = Worklist.pop_back_val();

    SmallItemVector ParentLoops;
    VLoop *PrevVL = nullptr;
    bool Fused = false;
    for (auto &It : Items) {
      auto *VL = PSSA.getLoopForItem(It);
      assert(VL);
      if (PrevVL && !LoopsToFuse.isEquivalent(VL, PrevVL)) {
        LoopsToFuse.unionSets(VL, PrevVL);
        Fused = true;
      }
      // Also collect the parent loops so we fuse them if need to
      auto *Parent = VL->getParent();
      if (Parent && Parent != TopVL)
        ParentLoops.push_back(VL->getParent());
      PrevVL = VL;
    }
    if (Fused)
      Worklist.push_back(ParentLoops);
  }
}

// Fuse loops and return the final loop
static VLoop *fuseLoops(VLoop *ParentVL, ArrayRef<VLoop *> Loops,
                        PredicatedSSA &PSSA) {
  assert(Loops.size() > 1);
  assert(all_of(Loops,
                [ParentVL](VLoop *VL) { return VL->getParent() == ParentVL; }));

  // The loop that will eventually contain all of the loops
  VLoop *Leader = Loops.front();
  for (auto *VL : drop_begin(Loops)) {
    // Transfer the mu nodes
    for (auto *Mu : VL->mus())
      Leader->addMu(Mu);
    // Transfer the loop items
    for (auto &It : VL->items()) {
      if (auto *I = It.asInstruction()) {
        auto *C = VL->getInstCond(I);
        if (auto *PN = dyn_cast<PHINode>(I)) {
          assert(VL->isGatedPhi(PN));
          Leader->insert(PN, VL->getPhiConditions(PN), C);
        } else {
          Leader->insert(I, C);
        }
      } else {
        Leader->insert(It.asLoop());
      }
    }
    ParentVL->erase(VL);
    delete VL;
  }

  return Leader;
}

static void fuseLoops(const EquivalenceClasses<VLoop *> &LoopsToFuse,
                      PredicatedSSA &PSSA, DependenceChecker &DepChecker) {
  SmallVector<VLoop *> Worklist{&PSSA.getTopLevel()};

  while (!Worklist.empty()) {
    auto *VL = Worklist.pop_back_val();

    // First pass: identify loops that we want to fuse
    DenseSet<VLoop *> Leaders;
    for (auto &It : VL->items()) {
      auto *SubVL = It.asLoop();
      if (!SubVL)
        continue;
      auto LeaderIt = LoopsToFuse.findLeader(SubVL);
      if (LeaderIt != LoopsToFuse.member_end())
        Leaders.insert(*LeaderIt);
    }

    // Second pass: fuse the loops
    for (VLoop *Leader : Leaders) {
      SmallVector<VLoop *> Loops(LoopsToFuse.findLeader(Leader),
                                 LoopsToFuse.member_end());
      // Move the loops together first
      merge(PSSA, toItems(Loops), nullptr /*inst to pack map*/, DepChecker);
      auto *Fused = fuseLoops(VL, Loops, PSSA);
      DepChecker.invalidate(Fused);
    }
  }
}

static void schedule(ArrayRef<Pack *> Packs,
                     const DenseMap<Instruction *, Pack *> &InstToPackMap,
                     PredicatedSSA &PSSA, DependenceInfo &DI) {
  DependenceChecker DepChecker(DI);

  // Figure out the loops that we need to fuse.
  EquivalenceClasses<VLoop *> LoopsToFuse;
  partitionLoops(LoopsToFuse, Packs, PSSA);

  // Fuse the loops top-down
  fuseLoops(LoopsToFuse, PSSA, DepChecker);

  // FIXME: Deal with packs that require fusion/co-iteration later
  for (auto *P : Packs)
    merge(PSSA, toItems(P->values()), &InstToPackMap, DepChecker);
}

Value *VectorGen::materializeValue(Value *V) { return Remapper.mapValue(*V); }

Value *VectorGen::materializeValue(const ControlCondition *C,
                                   Inserter &Insert) {
  if (isImplied(C, Insert.getCondition()))
    return Insert.getTrue();

  assert(C);

  // Fast path when the condition is just a boolean IR value
  if (auto *And = dyn_cast<ConditionAnd>(C); And && !And->Parent) {
    auto *Cond = materializeValue(And->Cond);
    if (And->IsTrue)
      return Cond;
    return Insert(BinaryOperator::CreateNot(Cond));
  }

  return Insert.createOneHotPhi(C, Insert.getTrue(), Insert.getFalse());
}

template <typename ValueType, typename PackType>
Value *VectorGen::gatherValues(ArrayRef<ValueType> Values,
                               const ValueIndex<ValueType, PackType> &ValueIdx,
                               Inserter &Insert) {
  struct GatherEdge {
    unsigned SrcIndex;
    unsigned DestIndex;
  };

  // Mapping vector -> subset of its elements that we are gathering
  SmallDenseMap<Value *, SmallVector<GatherEdge, 4>> SrcPacks;
  // Mapping scalar -> index that we need to insert into
  SmallVector<std::pair<Value *, unsigned>, 8> SrcScalars;

  // Figure out sources of the values in `Values`
  for (auto &X : enumerate(Values)) {
    auto *V = X.value();
    unsigned i = X.index();

    // Null means don't care/undef
    if (std::is_same<Value *, ValueType>::value && !V)
      continue;
    if (auto L = ValueIdx.getLane(V)) {
      // Remember we need to gather from this vector to the `i`th element
      SrcPacks[L->Vec].push_back({L->Idx, i});
    } else {
      // Remember that we need to insert `V` as the `i`th element
      SrcScalars.emplace_back(materializeValue(V, Insert), i);
    }
  }

  using ShuffleMaskTy = SmallVector<Constant *, 8>;
  const unsigned NumValues = Values.size();
  Value *SomeValue =
      SrcPacks.empty() ? SrcScalars.front().first : SrcPacks.begin()->first;
  auto &Ctx = SomeValue->getContext();

  auto *Int32Ty = Type::getInt32Ty(Ctx);
  ShuffleMaskTy Undefs(NumValues, UndefValue::get(Int32Ty));

  // Here's the codegen strategy we will use.
  //
  // Suppose we need to gather from N vectors,
  // and the output vector has M elements.
  // We then generate N partial gather, resulting in N vector if size M
  // Then we merge these temporaries to get the final vector.
  //
  // Additionally, if any of the source values come from scalars, we just insert
  // them.
  //
  // We don't care about the performance that much at this stage
  // because we are going to optimize the gather sequences later.

  // 1) Emit the partial gathers
  struct PartialGather {
    BitVector DefinedBits;
    Value *Gather;
  };
  std::vector<PartialGather> PartialGathers;

  for (const auto &[Src, GatherEdges] : SrcPacks) {
    BitVector DefinedBits(NumValues);
    // Figure out which values we want to gather
    ShuffleMaskTy MaskValues = Undefs;
    for (auto &GE : GatherEdges) {
      assert(GE.DestIndex < MaskValues.size());
      MaskValues[GE.DestIndex] = ConstantInt::get(Int32Ty, GE.SrcIndex);
      DefinedBits.set(GE.DestIndex);
    }

    auto *Mask = ConstantVector::get(MaskValues);
    Value *Gather;
    // Minor optimization: avoid unnecessary shuffle.
    unsigned SrcSize = cast<FixedVectorType>(Src->getType())->getNumElements();
    if (SrcSize == NumValues && ShuffleVectorInst::isIdentityMask(Mask))
      Gather = Src;
    else
      Gather = Insert.make<ShuffleVectorInst>(
          Src, UndefValue::get(Src->getType()), Mask);

    PartialGathers.push_back({DefinedBits, Gather});
  }

  Value *Acc = nullptr;
  if (!PartialGathers.empty()) {
    // 2) Merge the partial gathers
    BitVector DefinedBits = PartialGathers.front().DefinedBits;
    Acc = PartialGathers.front().Gather;
    for (auto &PG : drop_begin(PartialGathers)) {
      ShuffleMaskTy Mask = Undefs;
      assert(Mask.size() == NumValues);
      // Select from Acc
      for (unsigned Idx : DefinedBits.set_bits())
        Mask[Idx] = ConstantInt::get(Int32Ty, Idx);
      // Select from the partial gather
      for (unsigned Idx : PG.DefinedBits.set_bits())
        Mask[Idx] = ConstantInt::get(Int32Ty, NumValues + Idx);
      Acc = Insert.make<ShuffleVectorInst>(Acc, PG.Gather,
                                           ConstantVector::get(Mask));

      assert(!DefinedBits.anyCommon(PG.DefinedBits));
      DefinedBits |= PG.DefinedBits;
    }
  } else {
    assert(!SrcScalars.empty());
    Type *ScalarTy = SrcScalars.front().first->getType();
    auto *VecTy = FixedVectorType::get(ScalarTy, Values.size());
    Acc = UndefValue::get(VecTy);
  }

  // 3) Insert the scalar values
  for (const auto [V, Idx] : SrcScalars)
    Acc = Insert.CreateInsertElement(Acc, V, toInt64(Ctx, Idx));

  assert(Acc);
  return Acc;
}

static void remapOperands(Instruction *I, ValueMapper &Mapper) {
  for (Use &Op : I->operands())
    if (Value *V = Mapper.mapValue(*Op.get()))
      Op = V;
}

Value *VectorGen::gatherOperand(ArrayRef<Value *> Values, Inserter &Insert) {
  return gatherValues<Value *, Pack>(Values, ValueIdx, Insert);
}

// FIXME: maybe we need to adjust the condition under which we emit the
// condition pack?
void VectorGen::emitConditionPack(const ConditionPack *CP, Inserter &Insert) {
  assert(!ProcessedCondPacks.count(CP));
  ProcessedCondPacks.insert(CP);

  SmallVector<Value *> OperandMasks, Operands;
  for (auto Mask : CP->getOperandMasks())
    OperandMasks.push_back(gatherMask(Mask, Insert));
  for (auto O : CP->getOperands())
    Operands.push_back(gatherOperand(O, Insert));
  auto *MaskValue = CP->emit(OperandMasks, Operands, Insert);
  MaskIdx.insert(MaskValue, CP);
}

Value *VectorGen::gatherMask(ArrayRef<const ControlCondition *> Conds,
                             Inserter &Insert) {
  // Materialize the ConditionPacks that contribute to Conds
  for (auto *C : Conds) {
    auto *CP = CondToPackMap.lookup(C);
    // Skip if the condition is not packed
    // or if we've materialized the pack already
    if (!CP || ProcessedCondPacks.count(CP))
      continue;
    if (isReady(CP))
      emitConditionPack(CP, Insert);
  }

  return gatherValues<const ControlCondition *, ConditionPack>(Conds, MaskIdx,
                                                               Insert);
}

// Run the bottom-up heuristic to produce the required vector masks
static void packConditions(ArrayRef<VectorMask> Masks,
                           SmallVectorImpl<ConditionPack *> &CondPacks) {
  DenseSet<VectorMask, VectorHashInfo<VectorMask>> Visited;
  SmallVector<VectorMask> Worklist(Masks.begin(), Masks.end());

  while (!Worklist.empty()) {
    auto Mask = Worklist.pop_back_val();
    if (!Visited.insert(Mask).second)
      continue;

    // Don't bother packing identical conditions
    if (is_splat(Mask))
      continue;

    ConditionPack *CP = AndPack::tryPack(Mask);
    if (!CP)
      CP = OrPack::tryPack(Mask);
    if (CP) {
      CondPacks.push_back(CP);
      Worklist.append(CP->getOperandMasks());
    }
  }
}

void VectorGen::run(ArrayRef<Pack *> Packs, PredicatedSSA &PSSA,
                    DependenceInfo &DI) {
  // Map the packed instruction back to the pack
  DenseMap<Instruction *, Pack *> InstToPackMap;
  for (auto *P : Packs) {
    for (auto *I : P->values())
      if (I)
        InstToPackMap[I] = P;
  }

  // Do secondary packing to pack generate the vector masks
  // TODO: expose this as a decision for the user?
  SmallVector<VectorMask> Masks;
  for (auto *P : Packs) {
    auto Ms = P->masks();
    Masks.append(Ms.begin(), Ms.end());
  }
  SmallVector<ConditionPack *> CondPacks;
  DeleteGuard DeleteLater(CondPacks);

  if (!DontPackConditions) {
    packConditions(Masks, CondPacks);

    // Map each condition to the pack that produces it
    for (auto *CP : CondPacks)
      for (auto *C : CP->values())
        CondToPackMap.try_emplace(C, CP);
  }

  // Reorder the instructions so that the packed instructions appear together
  schedule(Packs, InstToPackMap, PSSA, DI);

  SmallVector<VLoop *> Worklist{&PSSA.getTopLevel()};

  SmallVector<Instruction *> DeadInsts;
  DenseSet<Pack *> Lowered;

  while (!Worklist.empty()) {
    auto *VL = Worklist.pop_back_val();
    // Copy the items to a vector to
    // avoid invalidating the iterator while we modify list of items
    SmallVector<Item> Items(VL->item_begin(), VL->item_end());
    for (auto &It : Items) {
      if (auto *SubVL = It.asLoop()) {
        Worklist.push_back(SubVL);
        continue;
      }

      auto *I = It.asInstruction();
      assert(I);
      markAsProcessed(I);
      if (Pack *P = InstToPackMap.lookup(I)) {
        DeadInsts.push_back(I);
        if (!Lowered.insert(P).second)
          continue;

        SmallVector<const ControlCondition *, 8> Conds;
        for (auto *I : P->values())
          if (I)
            Conds.push_back(VL->getInstCond(I));
        auto *C = getGreatestCommonCondition(Conds);

        auto Iterator = VL->toIterator(I);
        Inserter InsertBeforeI(VL, C, Iterator);
        Value *V = nullptr;
        if (isa<PHIPack>(P)) {
          // Special lowering path for phi pack
          SmallVector<Value *, 8> Operands;
          auto *PN = cast<PHINode>(P->values().front());
          for (auto X : enumerate(P->getOperands())) {
            auto *C = VL->getPhiCondition(PN, X.index());
            Operands.push_back(gatherOperand(X.value(), VL, C, Iterator));
          }
          V = InsertBeforeI.createPhi(Operands, VL->getPhiConditions(PN));
        } else {
          SmallVector<Value *, 8> Operands;
          for (OperandPack OP : P->getOperands())
            Operands.push_back(gatherOperand(OP, InsertBeforeI));
          // Some instructions (e.g., masked store) also require masking
          for (auto &M : P->masks())
            Operands.push_back(gatherMask(M, InsertBeforeI));
          V = P->emit(Operands, InsertBeforeI);
        }
        ValueIdx.insert(V, P);
        Extracter.remember(P, V, VL, C, Iterator);
        I = cast<Instruction>(V);
      }

      // Fix some of the operands if need to.
      // (E.g., replacing use of scalar value w/ extract)
      remapOperands(I, Remapper);

      // FIXME: also remap the use of scalar values in the predicate
    }
  }

  // Remove the instructions killed by vectorization
  for (auto *I : DeadInsts) {
    I->replaceAllUsesWith(UndefValue::get(I->getType()));
    I->dropAllReferences();
  }
  for (auto *I : DeadInsts) {
    auto InsertPt = PSSA.getInsertPoint(I);
    InsertPt.VL->erase(InsertPt.It);
    if (I->getParent())
      I->eraseFromParent();
  }
}

void lower(ArrayRef<Pack *> Packs, PredicatedSSA &PSSA, DependenceInfo &DI) {
  VectorGen Gen;
  Gen.run(Packs, PSSA, DI);
}
