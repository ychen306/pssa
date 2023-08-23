#include "vegen/Lower.h"
#include "DependenceChecker.h"
#include "ItemMover.h"
#include "PackSet.h"
#include "TripCount.h"
#include "Versioning.h"
#include "pssa/Inserter.h"
#include "pssa/PSSA.h"
#include "pssa/VectorHashInfo.h"
#include "vegen/Pack.h"
#include "llvm/ADT/EquivalenceClasses.h"
#include "llvm/Analysis/ValueTracking.h" // isSafeToSpeculativelyExecute
#include "llvm/IR/Constants.h"
#include "llvm/IR/PatternMatch.h"
#include "llvm/Support/CommandLine.h"
#include "llvm/Support/Timer.h"
#include "llvm/Transforms/Utils/ValueMapper.h"

using namespace llvm;

namespace {

cl::opt<bool>
    DontPackConditions("disable-cond-packing",
                       cl::desc("disable secondary (condition) packing"),
                       cl::init(false));

cl::opt<bool> TimeVectorLowering("time-vector-lowering",
                                 cl::desc("time vector lowering"),
                                 cl::init(false));

// Keep track of the values produced by a lowered pack
template <typename ValueType, typename PackType> class ValueIndex {
public:
  struct Lane {
    unsigned Idx;
    Value *Vec;
    // When is `Vec` available
    const ControlCondition *C;
    Lane(unsigned Idx, Value *Vec, const ControlCondition *C)
        : Idx(Idx), Vec(Vec), C(C) {}
  };

private:
  // Mapping a scalar value to the vector lane that contains the value
  DenseMap<ValueType, Lane> Lanes;

public:
  void insert(Value *VecVal, const PackType *P,
              const ControlCondition *C = nullptr) {
    auto *Ty = VecVal->getType();
    (void)Ty;
    assert(!Ty->isVectorTy() || !Ty->isVoidTy() || P->values().size() == 1);
    for (auto X : enumerate(P->values()))
      if (X.value())
        Lanes.try_emplace(X.value(), (unsigned)X.index(), VecVal, C);
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
    ExtractInfo(Value *Vec, unsigned Idx, Value *Val, VLoop *VL,
                const ControlCondition *C, VLoop::ItemIterator InsertBefore)
        : Vec(Vec), Idx(Idx), Val(Val), VL(VL), C(C),
          InsertBefore(InsertBefore) {}
  };
  // mapping scalar value -> the vector (and index) that contains it
  DenseMap<Value *, ExtractInfo> Infos;

public:
  // Remember a materialized vector
  void remember(Pack *P, Value *Vec, VLoop *VL, const ControlCondition *C,
                VLoop::ItemIterator InsertBefore) {
    // Don't need to extract from a ReductionPack,
    // which readily produces a scalar value
    if (isa<ReductionPack>(P)) {
      assert(P->values().size() == 1);
      Infos.try_emplace(P->values().front(), Vec, 0, Vec, VL, C, InsertBefore);
      return;
    }

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
  PackSet Packs;
  PredicatedSSA &PSSA;
  DependenceInfo &DI;
  CachingAA &AA;
  LoopInfo &LI;
  ScalarEvolution &SE;
  Versioner *TheVersioner;

  ValueIndex<Value *, Pack> ValueIdx;
  ValueIndex<const ControlCondition *, ConditionPack> MaskIdx;

  // Set unordered is don't care about order of the elements
  template <typename ValueType, typename PackType>
  Value *gatherValues(ArrayRef<ValueType>,
                      const ValueIndex<ValueType, PackType> &, Inserter &Insert,
                      bool Unordered);
  Value *gatherOperand(ArrayRef<Value *>, Inserter &, bool Unordered = false);
  Value *gatherMask(ArrayRef<const ControlCondition *>, Inserter &,
                    bool Unordered = false);

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

  void remapInstruction(Instruction *I) {
    for (Use &Op : I->operands())
      if (Value *V = Remapper.mapValue(*Op.get()))
        Op = V;
  }

  DenseMap<const ControlCondition *, const ControlCondition *> RemappedConds;
  const ControlCondition *remapCondition(const ControlCondition *C) {
    // true -> true
    if (!C)
      return nullptr;

    if (auto *RemappedC = RemappedConds.lookup(C))
      return RemappedC;

    if (auto *And = dyn_cast<ConditionAnd>(C)) {
      auto *RemappedC = PSSA.getAnd(remapCondition(And->Parent),
                                    Remapper.mapValue(*And->Cond), And->IsTrue);
      return RemappedConds[C] = RemappedC;
    }

    SmallVector<const ControlCondition *, 4> Conds;
    for (auto *C2 : cast<ConditionOr>(C)->Conds)
      Conds.push_back(remapCondition(C2));
    return RemappedConds[C] = PSSA.getOr(Conds);
  }

  Value *materializeValue(Value *);
  // Keep a uniform interface together with `materialize(const ControlCondition
  // *, Inserter)` This is needed to make gatherValues work.
  Value *materializeValue(Value *V, Inserter &) { return materializeValue(V); }
  Value *materializeValue(const ControlCondition *, Inserter &);

  SmallVector<Instruction *> DeadInsts;
  std::map<Pack *, SmallVector<OperandPack, 2>> VecOperands;
  ArrayRef<OperandPack> getVectorOperands(Pack *P) const {
    auto It = VecOperands.find(P);
    assert(It != VecOperands.end());
    return It->second;
  }
  DenseSet<Pack *> Lowered;
  void runOnLoop(VLoop *);

public:
  VectorGen(ArrayRef<Pack *> Packs, PredicatedSSA &PSSA, DependenceInfo &DI,
            CachingAA &AA, LoopInfo &LI, ScalarEvolution &SE,
            Versioner *TheVersioner)
      : Packs(Packs), PSSA(PSSA), DI(DI), AA(AA), LI(LI), SE(SE),
        TheVersioner(TheVersioner), Remapper(VM, RF_None, nullptr, &Extracter) {
  }
  bool run();
};

template <typename ValueT> using ItemMap = DenseMap<Item, ValueT, ItemHashInfo>;

// Utility to help rewrite the use of loop exit values for co-iteration
class ExitsRemapper {
  PredicatedSSA &PSSA;
  const DenseMap<Instruction *, const ControlCondition *> &OrigInstConds;
  const DenseMap<VLoop *, const ControlCondition *> &OrigLoopConds;
  const ItemMap<Value *> &ItemToActiveMap;
  DenseMap<Value *, Value *> &ExitGuards;

  DenseSet<VLoop *> LoopsWithExits;
  DenseMap<std::pair<VLoop *, const ControlCondition *>,
           const ControlCondition *>
      RemappedConds;

  // Mapping <loop, value exiting the loop> -> <the new value>
  DenseMap<std::pair<VLoop *, Value *>, Value *> RemappedExits;
  DenseMap<std::pair<VLoop *, Value *>, Value *> RemappedSubLoopExits;

  Value *guardExitValue(VLoop *VL, Value *V, const Item &It,
                        const ControlCondition *OrigC);
  Value *remapLoopExit(VLoop *DefVL, Instruction *I);
  Value *remapSubLoopExit(VLoop *SubVL, Value *V);
  Value *remapValue(VLoop *UserVL, Value *V);

public:
  ExitsRemapper(
      PredicatedSSA &PSSA,
      const DenseMap<Instruction *, const ControlCondition *> &OrigInstConds,
      const DenseMap<VLoop *, const ControlCondition *> &OrigLoopConds,
      const ItemMap<Value *> &ItemToActiveMap,
      DenseMap<Value *, Value *> &ExitGuards)
      : PSSA(PSSA), OrigInstConds(OrigInstConds), OrigLoopConds(OrigLoopConds),
        ItemToActiveMap(ItemToActiveMap), ExitGuards(ExitGuards) {}
  void trackLoop(VLoop *VL) {
    assert(VL->getParent());
    LoopsWithExits.insert(VL);
  }
  void remapInstruction(VLoop *UserVL, Instruction *I) {
    for (Use &Op : I->operands())
      if (auto *V = remapValue(UserVL, Op.get()))
        Op = V;
  }
  const ControlCondition *remapCondition(VLoop *UserVL,
                                         const ControlCondition *C);
};

const char LoweringTimerGroup[] = "vectorgen";
const char LoweringTimerGroupDesc[] = "Vector Lowering";

}; // namespace

// Move the items together while still preserving dependences
static bool merge(PredicatedSSA &PSSA, ArrayRef<Item> Items,
                  DependenceChecker &DepChecker,
                  const PackSet *Packs = nullptr) {
  NamedRegionTimer T("scheduling", "moving instructions together",
                     LoweringTimerGroup, LoweringTimerGroupDesc,
                     TimeVectorLowering);
  if (Items.size() <= 1)
    return true;

  auto *VL = PSSA.getLoopForItem(Items.front());
  SmallVector<Item> Deps;
  errs() << "Trying to merge: {\n";
  for (auto it : Items)
    errs() << '\t' << it << '\n';
  errs() << "}\n";
  bool FoundCycle = findInBetweenDeps(Deps, Items, VL, PSSA, DepChecker, Packs);
  if (FoundCycle) {
    errs() << "Found cycle while trying to merge: {\n";
    for (auto it : Items)
      errs() << '\t' << it << '\n';
    errs() << "}\n";
    return false;
  }

  // The items should be independent
  SmallDenseSet<Item, 8, ItemHashInfo> ItemSet(Items.begin(), Items.end());
  for (auto It : Deps)
    if (ItemSet.count(It))
      return false;

  ItemMover Mover(VL);

  // Remove the depended values,
  // and after which the items will look like
  // [before earliest][earliest][items and non deps between earliest and latest]
  for (auto Dep : Deps)
    Mover.remove(Dep);

  // Insert the removed items before the earliest so we have
  // [before earliest][depended][items and non deps]
  Item Earliest = *std::min_element(Items.begin(), Items.end(),
                                    [VL](const Item &It1, const Item &It2) {
                                      return VL->comesBefore(It1, It2);
                                    });
  auto InsertPt = VL->toIterator(Earliest);
  Mover.reinsert(InsertPt);

  // Separate the items from the rest so we have
  // [before earliest][depended][earliest][ non deps]
  for (const auto &It : Items) {
    if (It != Earliest)
      Mover.remove(It);
  }

  Mover.reinsert(InsertPt);
  return true;
}

static EquivalenceClasses<VLoop *> partitionLoops(ArrayRef<Pack *> Packs,
                                                  PredicatedSSA &PSSA) {

  EquivalenceClasses<VLoop *> LoopsToFuse;
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
#if 0
      auto *Parent = VL->getParent();
      if (Parent && Parent != TopVL)
        ParentLoops.push_back(VL->getParent());
#else
      if (VL->isLoop())
        ParentLoops.push_back(VL);
      PrevVL = VL;
#endif
    }
    if (Fused)
      Worklist.push_back(ParentLoops);
  }

  return LoopsToFuse;
}

// Given an item `It` nested inside `VL` and that `It` produces `V`.
// Insert a one-hot phi to select `V` only if `NewC` is true.
// Assuming OrigC is implied by NewC (weaker).
Value *ExitsRemapper::guardExitValue(VLoop *VL, Value *V, const Item &It,
                                     const ControlCondition *OrigC) {
  auto *Mu = VL->createMu(UndefValue::get(V->getType()));
  Inserter InsertAfter(VL, OrigC, std::next(VL->toIterator(It)));
  auto *Guarded = InsertAfter.createOneHotPhi(
      PSSA.getAnd(OrigC, ItemToActiveMap.lookup(It), true), V /*if true*/,
      Mu /*if false*/);
  Guarded->setName(V->getName() + ".guard");
  Mu->setIncomingValue(1, Guarded);
  Mu->setName(V->getName() + ".guard");
  ExitGuards.try_emplace(Guarded, Mu);
  return Guarded;
}

Value *ExitsRemapper::remapLoopExit(VLoop *DefVL, Instruction *I) {
  if (auto *Remapped = RemappedExits.lookup({DefVL, I}))
    return Remapped;

  auto *Guarded = guardExitValue(DefVL, I, I /*producer of I is I*/,
                                 OrigInstConds.lookup(I));
  return RemappedExits[{DefVL, I}] = Guarded;
}

Value *ExitsRemapper::remapSubLoopExit(VLoop *SubVL, Value *V) {
  if (auto *Remapped = RemappedSubLoopExits.lookup({SubVL, V}))
    return Remapped;

  assert(SubVL->getParent());
  auto *Guarded =
      guardExitValue(SubVL->getParent(), V, SubVL, OrigLoopConds.lookup(SubVL));
  return RemappedSubLoopExits[{SubVL, V}] = Guarded;
}

Value *ExitsRemapper::remapValue(VLoop *UserVL, Value *V) {
  if (LoopsWithExits.empty())
    return nullptr;

  auto *I = dyn_cast<Instruction>(V);
  if (!I)
    return nullptr;

  auto *DefVL = PSSA.getLoopForInst(I);
  if (DefVL->contains(UserVL))
    return nullptr;

  assert(DefVL->getParent());

  UserVL = nearestCommonParent(UserVL, DefVL);
  assert(UserVL && UserVL != DefVL && UserVL->contains(DefVL));

  if (LoopsWithExits.count(DefVL))
    V = remapLoopExit(DefVL, I);
  // Scan the loop nest bottom-up and apply the guards
  for (auto *VL = DefVL->getParent(); VL != UserVL; VL = VL->getParent())
    if (LoopsWithExits.count(VL->getParent()))
      V = remapSubLoopExit(VL, V);
  return V;
}

const ControlCondition *
ExitsRemapper::remapCondition(VLoop *UserVL, const ControlCondition *C) {
  if (!C)
    return nullptr;

  if (auto *Remapped = RemappedConds.lookup({UserVL, C}))
    return Remapped;

  if (auto *And = dyn_cast<ConditionAnd>(C)) {
    auto *NewCond = remapValue(UserVL, And->Cond);
    auto *Remapped = PSSA.getAnd(remapCondition(UserVL, And->Parent),
                                 NewCond ? NewCond : And->Cond, And->IsTrue);
    return RemappedConds[{UserVL, C}] = Remapped;
  }

  auto *Or = cast<ConditionOr>(C);
  SmallVector<const ControlCondition *, 4> Conds;
  for (auto *C : Or->Conds)
    Conds.push_back(remapCondition(UserVL, C));
  return RemappedConds[{UserVL, C}] = PSSA.getOr(Conds);
}

// Fuse loops and return the final loop
static VLoop *fuse(VLoop *ParentVL, ArrayRef<VLoop *> Loops) {
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
          if (VL->isOneHotPhi(PN))
            Leader->markOneHot(PN);
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

// Assuming VL1 and VL2 are *independent* check if it's safe to fuse them
static bool fusible(VLoop *VL1, VLoop *VL2, PredicatedSSA &PSSA) {
  auto *L1 = PSSA.getOrigLoop(VL1);
  auto *L2 = PSSA.getOrigLoop(VL2);
  auto *SE = PSSA.getSE();
  assert(SE);
  return PSSA.isEquivalent(VL1->getLoopCond(), VL2->getLoopCond()) &&
         haveIdenticalTripCounts(L1, L2, *SE);
}

static VLoop *
coIterate(VLoop *ParentVL, ArrayRef<VLoop *> Loops,
          DenseMap<Instruction *, const ControlCondition *> &OrigInstConds,
          DenseMap<VLoop *, const ControlCondition *> &OrigLoopConds,
          ItemMap<Value *> &ItemToActiveMap, DenseSet<PHINode *> &ActiveFlags,
          PredicatedSSA &PSSA) {
  SmallVector<const ControlCondition *> LoopConds, BackEdgeConds;
  for (auto *CoVL : Loops)
    LoopConds.push_back(CoVL->getLoopCond());

  Inserter InsertBefore(ParentVL, getGreatestCommonCondition(LoopConds),
                        ParentVL->toIterator(Loops.front()));

  auto &Ctx = PSSA.getContext();
  auto *True = ConstantInt::getTrue(Ctx);
  auto *False = ConstantInt::getFalse(Ctx);

  for (auto *CoVL : Loops) {
    Inserter InsertAtEnd(CoVL, nullptr, CoVL->item_end());

    ///////// Compute the active flag for CoVL //////////
    auto *ShouldEnter =
        InsertBefore.createOneHotPhi(CoVL->getLoopCond(), True, False);
    auto *Active = CoVL->createMu(ShouldEnter);
    ActiveFlags.insert(Active);
    Active->setName("active");

    auto *ContCond = PSSA.getAnd(CoVL->getBackEdgeCond(), Active, true);
    auto *ShouldCont = InsertAtEnd.createOneHotPhi(ContCond, True, False);
    BackEdgeConds.push_back(ContCond);
    Active->setIncomingValue(1, ShouldCont);
    ////////////////////////////////////////////////////

    // Strengthen the conds so the items only execute when CoVL is active
    for (auto &It : CoVL->items()) {
      // FIXME: also strenghten the gating condition of gated phis
      if (auto *I = It.asInstruction()) {
        auto *C = CoVL->getInstCond(I);
        OrigInstConds[I] = C;
        CoVL->setInstCond(I, PSSA.getAnd(C, Active, true));
        ItemToActiveMap[I] = Active;
      } else {
        auto *SubVL = It.asLoop();
        assert(SubVL);
        auto *C = SubVL->getLoopCond();
        OrigLoopConds[SubVL] = C;
        SubVL->setLoopCond(PSSA.getAnd(C, Active, true));
        ItemToActiveMap[SubVL] = Active;
      }
    }
    for (auto *Mu : CoVL->mus())
      ItemToActiveMap[Mu] = Active;
  }

  // Fuse the body of the loops together
  auto *Fused = fuse(ParentVL, Loops);

  SmallPtrSet<const ControlCondition *, 8> Seen;
  decltype(LoopConds) UniqueLoopConds;
  for (auto *C : LoopConds)
    if (Seen.insert(C).second)
      UniqueLoopConds.push_back(C);

  Fused->setLoopCond(PSSA.getOr(UniqueLoopConds));
  Fused->setBackEdgeCond(PSSA.getOr(BackEdgeConds));

  return Fused;
}

static bool mergeLoops(const EquivalenceClasses<VLoop *> &LoopsToFuse,
                       PredicatedSSA &PSSA, DependenceChecker &DepChecker,
                       DenseMap<Value *, Value *> &ExitGuards,
                       DenseSet<PHINode *> &ActiveFlags) {
  DenseMap<Instruction *, const ControlCondition *> OrigInstConds;
  DenseMap<VLoop *, const ControlCondition *> OrigLoopConds;
  ItemMap<Value *> ItemToActiveMap;
  ExitsRemapper Remapper(PSSA, OrigInstConds, OrigLoopConds, ItemToActiveMap,
                         ExitGuards);

  std::function<bool(VLoop *)> FuseRec = [&](VLoop *VL) {
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
      llvm::sort(Loops, [&](auto *VL1, auto *VL2) {
        return VL->comesBefore(VL1, VL2);
      });
      // Move the loops together first
      if (!merge(PSSA, toItems(Loops), DepChecker, nullptr))
        return false;
      VLoop *Fused = nullptr;
      auto *LeaderVL = Loops.front();
      bool Fusible = all_of(drop_begin(Loops), [&](auto *VL2) {
        return fusible(LeaderVL, VL2, PSSA);
      });
      if (Fusible) {
        Fused = fuse(VL, Loops);
      } else {
        Fused = coIterate(VL, Loops, OrigInstConds, OrigLoopConds,
                          ItemToActiveMap, ActiveFlags, PSSA);
        // Remember to rewrite use of values live across bounary of Fused
        Remapper.trackLoop(Fused);
      }
      DepChecker.invalidate(Fused);
    }

    // Recursively fuse any of the inner loops
    for (auto &It : VL->items())
      if (auto *SubVL = It.asLoop())
        if (!FuseRec(SubVL))
          return false;

    // Rewrite the use of values exiting co-iterating loops
    for (auto &It : VL->items()) {
      if (auto *I = It.asInstruction()) {
        Remapper.remapInstruction(VL, I);
        VL->setInstCond(I, Remapper.remapCondition(VL, VL->getInstCond(I)));
        if (auto *PN = dyn_cast<PHINode>(I)) {
          auto PhiConds = VL->getPhiConditions(PN);
          for (auto X : enumerate(PhiConds)) {
            VL->setPhiCondition(PN, X.index(),
                                Remapper.remapCondition(VL, X.value()));
          }
        }
      } else {
        auto *SubVL = It.asLoop();
        assert(SubVL);
        SubVL->setLoopCond(Remapper.remapCondition(VL, SubVL->getLoopCond()));
      }
    }
    for (auto *Mu : VL->mus())
      Remapper.remapInstruction(VL, Mu);
    VL->setBackEdgeCond(Remapper.remapCondition(VL, VL->getBackEdgeCond()));
    return true;
  };

  return FuseRec(&PSSA.getTopLevel());
}

Value *VectorGen::materializeValue(Value *V) { return Remapper.mapValue(*V); }

Value *VectorGen::materializeValue(const ControlCondition *C,
                                   Inserter &Insert) {
  C = remapCondition(C);
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

static bool isPermutationMask(ArrayRef<Constant *> Consts) {
  SmallVector<int, 8> Idxs(map_range(Consts, [](auto *C) -> int {
    if (isa<UndefValue>(C))
      return -1;
    return cast<ConstantInt>(C)->getZExtValue();
  }));
  sort(Idxs);
  return ShuffleVectorInst::isIdentityMask(Idxs);
}

template <typename ValueType, typename PackType>
Value *VectorGen::gatherValues(ArrayRef<ValueType> Values,
                               const ValueIndex<ValueType, PackType> &ValueIdx,
                               Inserter &Insert, bool Unordered) {
  struct GatherEdge {
    unsigned SrcIndex;
    unsigned DestIndex;
  };

  // Mapping vector -> subset of its elements that we are gathering
  MapVector<Value *, SmallVector<GatherEdge, 4>> SrcPacks;
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
      if (!L->Vec->getType()->isVectorTy()) {
        // Special case: reduction pack creates a scalar
        assert(L->Idx == 0);
        SrcScalars.emplace_back(L->Vec, i);
      } else {
        auto *Vec = L->Vec;
        // Sometimes the conditions are reified at a stronger condition
        // E.g., if we reify ([c /\ x, c /\ y]), we will reify them at the
        // condition c. In this case, we need to reify again with
        if (std::is_same<ValueType, const ControlCondition *>::value) {
          Vec = Insert.createOneHotPhi(L->C, Vec,
                                       Constant::getNullValue(Vec->getType()));
        }
        // Remember we need to gather from this vector to the `i`th element
        SrcPacks[Vec].push_back({L->Idx, i});
      }
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
    unsigned SrcSize = cast<FixedVectorType>(Src->getType())->getNumElements();
    if (SrcSize == NumValues && ((Unordered && isPermutationMask(MaskValues)) ||
                                 ShuffleVectorInst::isIdentityMask(Mask))) {
      Gather = Src;
    } else {
      Gather = Insert.make<ShuffleVectorInst>(
          Src, UndefValue::get(Src->getType()), Mask);
    }

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
  for (const auto &[V, Idx] : SrcScalars)
    Acc = Insert.CreateInsertElement(Acc, V, toInt64(Ctx, Idx));

  assert(Acc);
  return Acc;
}

Value *VectorGen::gatherOperand(ArrayRef<Value *> Values, Inserter &Insert,
                                bool Unordered) {
  return gatherValues(Values, ValueIdx, Insert, Unordered);
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
  MaskIdx.insert(MaskValue, CP, Insert.getCondition());
}

Value *VectorGen::gatherMask(ArrayRef<const ControlCondition *> Conds,
                             Inserter &Insert, bool Unordered) {
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

  return gatherValues(Conds, MaskIdx, Insert, Unordered);
}

static Value *getLoadStorePointer(Pack *P) {
  if (isa<StorePack>(P) || isa<LoadPack>(P) || isa<SplatPack>(P))
    return getLoadStorePointerOperand(P->values().front());
  return nullptr;
}

// Find a weaker condition C for I so that C *is implied by* the condition of
// Users
const ControlCondition *findSpeculativeCond(Instruction *I,
                                            ArrayRef<Instruction *> Users,
                                            PredicatedSSA &PSSA) {

  auto *VL = PSSA.getLoopForInst(I);

  // Collect the conditions for all the users instructions
  SmallVector<const ControlCondition *, 8> Conds{VL->getInstCond(I)};
  for (auto *UserI : Users) {
    // Easy case the defs and uses in the same loop
    auto *UserVL = PSSA.getLoopForInst(UserI);
    if (UserVL == VL || PSSA.getLoopDepth(UserVL) == PSSA.getLoopDepth(VL)) {
      Conds.push_back(UserVL->getInstCond(UserI));
      continue;
    }

    if (!VL->contains(UserVL))
      return nullptr;

    // Tougher case: the def is in an outer loop that contains the uses.
    // In this case, we want the loop condition of
    // the immediate child loop that containes the use.
    while (UserVL && UserVL->getParent() != VL)
      UserVL = UserVL->getParent();
    assert(UserVL && UserVL->getParent() == VL);
    Conds.push_back(UserVL->getLoopCond());
  }

  return getGreatestCommonCondition(Conds);
}

// Check if it's safe for us to produce V at a weaker condition C
bool canSpeculateAt(Value *V, const ControlCondition *C, PredicatedSSA &PSSA) {
  auto *I = dyn_cast<Instruction>(V);
  if (!I)
    return true;

  if (!isSafeToSpeculativelyExecute(I))
    return false;

  auto *VL = PSSA.getLoopForInst(I);
  // It's always safe to strengthen a condition
  if (isImplied(VL->getInstCond(I), C))
    return true;

  // Check if the operands of I are always available at condition C
  for (auto *O : I->operand_values()) {
    auto *OI = dyn_cast<Instruction>(O);
    if (!OI)
      continue;
    auto *VL2 = PSSA.getLoopForInst(OI);

    bool Available = (VL == VL2 && isImplied(VL2->getInstCond(OI), C)) ||
                     (VL != VL2 && VL2->contains(VL));
    if (!Available)
      return false;
  }
  return true;
}

void VectorGen::runOnLoop(VLoop *VL) {
  auto IsPacked = [&](auto *C) -> bool { return CondToPackMap.count(C); };

  auto *LoopCond = VL->getLoopCond();
  if (auto *Or = dyn_cast_or_null<ConditionOr>(LoopCond);
      Or && any_of(Or->Conds, IsPacked)) {
    auto *ParentVL = VL->getParent();
    assert(ParentVL);
    Inserter InsertBefore(ParentVL, nullptr, ParentVL->toIterator(VL));
    auto *Vec = gatherMask(Or->Conds, InsertBefore, true /*unordered*/);
    auto *Rdx = InsertBefore.createOrReduce(Vec);
    VL->setLoopCond(PSSA.getAnd(nullptr, Rdx, true));
  } else {
    VL->setLoopCond(remapCondition(VL->getLoopCond()));
  }

  // Start by lowering the mu packs
  DenseMap<PHINode *, Pack *> MusToPatch;
  SmallVector<PHINode *> ScalarMusToPatch;
  SmallVector<PHINode *> Mus(VL->mus());
  for (auto *Mu : Mus) {
    markAsProcessed(Mu);
    Pack *P = Packs.getPackForValue(Mu);
    if (!P) {
      ScalarMusToPatch.push_back(Mu);
      continue;
    }

    DeadInsts.push_back(Mu);
    if (!Lowered.insert(P).second)
      continue;

    assert(isa<MuPack>(P));
    auto Operands = getVectorOperands(P);
    auto *ParentVL = VL->getParent();
    // Gather the inititial vector before entering the loop
    auto *Init = gatherOperand(Operands[0], ParentVL, VL->getLoopCond(),
                               ParentVL->toIterator(VL));
    auto *VecMu = VL->createMu(Init);
    VecMu->setName(Mu->getName() + ".mu.vec");
    // We will patch up the mu with the recursive def. later.
    MusToPatch.try_emplace(VecMu, P);

    ValueIdx.insert(VecMu, P);
    Extracter.remember(P, VecMu, VL, nullptr, VL->item_begin());
  }

  // Lower the loop items
  SmallVector<Item> Items(VL->item_begin(), VL->item_end());
  for (auto &It : Items) {
    if (auto *SubVL = It.asLoop()) {
      runOnLoop(SubVL);
      continue;
    }

    auto *I = It.asInstruction();
    assert(I);
    markAsProcessed(I);
    if (Pack *P = Packs.getPackForValue(I)) {
      if (!Lowered.insert(P).second)
        continue;

      P->getKilledInsts(DeadInsts);

      SmallVector<const ControlCondition *, 8> Conds;
      for (auto *I : P->values())
        if (I) {
          Conds.push_back(VL->getInstCond(I));
          markAsProcessed(I);
        }
      auto *C = remapCondition(getGreatestCommonCondition(Conds));

      auto Iterator = VL->toIterator(I);
      Inserter InsertBeforeI(VL, C, Iterator);
      Value *V = nullptr;
      if (isa<PHIPack>(P)) {
        // Special lowering path for phi pack
        SmallVector<Value *, 8> Operands;
        auto *PN = cast<PHINode>(P->values().front());
        for (auto X : enumerate(getVectorOperands(P))) {
          auto *C = remapCondition(VL->getPhiCondition(PN, X.index()));
          Operands.push_back(gatherOperand(X.value(), VL, C, Iterator));
        }
        V = InsertBeforeI.createPhi(Operands, VL->getPhiConditions(PN));
      } else {
        SmallVector<Value *, 8> Operands;
        for (OperandPack OP : getVectorOperands(P))
          Operands.push_back(gatherOperand(OP, InsertBeforeI));
        // Some instructions (e.g., masked store) also require masking
        for (auto &M : P->masks())
          Operands.push_back(gatherMask(M, InsertBeforeI));
        V = P->emit(Operands, InsertBeforeI);
      }
      ValueIdx.insert(V, P);
      Extracter.remember(P, V, VL, C, Iterator);
      auto OrigName = I->getName();
      I = dyn_cast<Instruction>(V);
      if (!I) {
        assert(isa<Constant>(V));
        continue;
      }
      if (!OrigName.empty())
        I->setName(OrigName + ".vec");

      // In some rare cases the packs gets constant-folded
      // and takes the value of one of its operands,
      // which can be one of the vec mu nodes.
      // In this case, we won't bother remapping the instruction
      if (auto *PN = dyn_cast<PHINode>(I); PN && MusToPatch.count(PN))
        continue;

      // When we emit code for a exit-phi (from lcssa form),
      // the result gets const folded away as a no-op,
      // taking the value from the loop that we are exiting.
      if (PSSA.getLoopForInst(I) != VL)
        continue;
    } else {
      using namespace PatternMatch;
      if (m_Intrinsic<Intrinsic::experimental_noalias_scope_decl>(m_Value())
              .match(I) ||
          m_Intrinsic<Intrinsic::lifetime_start>(m_Value()).match(I) ||
          m_Intrinsic<Intrinsic::lifetime_end>(m_Value()).match(I))
        DeadInsts.push_back(I);

      auto *PN = dyn_cast<PHINode>(I);
      if (PN && VL->isOneHotPhi(PN)) {
        auto &Ctx = PSSA.getContext();
        auto *IfFalse = PN->getOperand(0);
        auto *IfTrue = PN->getOperand(1);
        auto *True = ConstantInt::getTrue(Ctx);
        auto *False = ConstantInt::getFalse(Ctx);
        bool IsNone = IfTrue == False && IfFalse == True;
        bool IsAll = IfTrue == True && IfFalse == False;

        auto *Or = dyn_cast<ConditionOr>(VL->getPhiCondition(PN, 1));
        if (Or && (IsNone || IsAll) && any_of(Or->Conds, IsPacked)) {
          auto BeforePN = VL->toIterator(PN);
          Inserter Insert(VL, nullptr, BeforePN);
          auto *Vec = gatherMask(Or->Conds, Insert, true /*unordered*/);
          auto *Or = Insert.createOrReduce(Vec);
          if (IsAll)
            VM[PN] = Or;
          else
            VM[PN] = Insert(BinaryOperator::CreateNot(Or));
          DeadInsts.push_back(PN);
        }
      }
    }

    // Fix some of the operands if need to.
    // (E.g., replacing use of scalar value w/ extract)
    remapInstruction(I);

    // Similarly remap the condition
    // (e.g., the control condition may need to use a extracted value)
    VL->setInstCond(I, remapCondition(VL->getInstCond(I)));

    // Also remap the conditions of (gated) phis
    if (auto *PN = dyn_cast<PHINode>(I)) {
      auto Conds = VL->getPhiConditions(PN);
      for (auto X : enumerate(Conds))
        VL->setPhiCondition(PN, X.index(), remapCondition(X.value()));
    }
  }

  if (!VL->isLoop())
    return;

  auto *BackEdgeC = VL->getBackEdgeCond();
  if (auto *Or = dyn_cast_or_null<ConditionOr>(BackEdgeC);
      Or && any_of(Or->Conds, IsPacked)) {
    Inserter InsertAtEnd(VL, nullptr, VL->item_end());
    auto *Vec = gatherMask(Or->Conds, InsertAtEnd, true /*unordered*/);
    auto *Rdx = InsertAtEnd.createOrReduce(Vec);
    VL->setBackEdgeCond(PSSA.getAnd(nullptr, Rdx, true));
  } else {
    VL->setBackEdgeCond(remapCondition(BackEdgeC));
  }

  // Gather the recursive def. of the mu nodes at the end of the loop
  for (auto [Mu, P] : MusToPatch)
    Mu->setIncomingValue(
        1, gatherOperand(getVectorOperands(P)[1], VL, nullptr, VL->item_end()));

  for (auto *Mu : ScalarMusToPatch)
    remapInstruction(Mu);
};

namespace {
template <typename ContainerT> ContainerT dedup(const ContainerT &Xs) {
  ContainerT Ys;
  SmallDenseSet<typename ContainerT::value_type, 8> Visited;
  for (auto X : Xs) {
    if (Visited.insert(X).second)
      Ys.push_back(X);
  }
  return Ys;
}
} // namespace

// If any of the values are guarded, pack the exit guards
static std::pair<BlendPack *, MuPack *>
packExitGuard(ArrayRef<Value *> Values,
              const DenseMap<Value *, Value *> &ExitGuards, PackSet &Packs,
              PredicatedSSA &PSSA) {
  SmallVector<Instruction *> Guards;
  SmallVector<Instruction *> Mus;
  for (auto *V : Values) {
    auto *Mu = ExitGuards.lookup(V);
    if (!Mu)
      break;
    // Don't pack instructions more than once
    if (Packs.isPacked(V) || Packs.isPacked(Mu))
      break;
    Guards.push_back(cast<Instruction>(V));
    Mus.push_back(cast<Instruction>(Mu));
  }
  if (Guards.size() != Values.size())
    return {nullptr, nullptr};
  auto *BlendP = BlendPack::tryPack(dedup(Guards), PSSA);
  auto *MuP = MuPack::tryPack(dedup(Mus), PSSA);
  if (BlendP)
    Packs.add(BlendP);
  if (MuP)
    Packs.add(MuP);
  return {BlendP, MuP};
}

// Run the bottom-up heuristic but only pack exit guards
static void packExitGuards(PackSet &Packs,
                           const DenseMap<Value *, Value *> &ExitGuards,
                           PredicatedSSA &PSSA) {
  SmallVector<Pack *> Worklist(Packs.begin(), Packs.end());
  while (!Worklist.empty()) {
    auto *P = Worklist.pop_back_val();
    for (const OperandPack &O : P->getOperands()) {
      auto [P1, P2] = packExitGuard(O, ExitGuards, Packs, PSSA);
      if (P1)
        Worklist.push_back(P1);
      if (P2)
        Worklist.push_back(P2);
    }
  }
}

// Try to produce a list of values w/ a blend pack
static BlendPack *packAsBlends(ArrayRef<Value *> Values, PackSet &Packs,
                               PredicatedSSA &PSSA) {
  SmallVector<Instruction *> Insts;
  for (auto *V : Values) {
    auto *I = dyn_cast<Instruction>(V);
    if (!I || Packs.isPacked(I))
      return nullptr;
    Insts.push_back(I);
  }
  auto *P = BlendPack::tryPack(dedup(Insts), PSSA);
  if (P)
    Packs.add(P);
  return P;
}

// Run the bottom-up heuristic to produce the required vector masks
// Also pack any of the active flags encountered along the way
static void
packConditions(ArrayRef<VectorMask> Masks,
               const DenseMap<Value *, Value *> &ExitGuards,
               const DenseSet<PHINode *> &ActiveFlags,
               SmallVectorImpl<std::unique_ptr<ConditionPack>> &CondPacks,
               PackSet &Packs, PredicatedSSA &PSSA) {
  DenseSet<VectorMask, VectorHashInfo<VectorMask>> Visited;
  SmallVector<VectorMask> Worklist(Masks.begin(), Masks.end());
  while (!Worklist.empty()) {
    auto Mask = Worklist.pop_back_val();
    if (!Visited.insert(Mask).second)
      continue;

    // Don't bother packing identical conditions
    if (is_splat(Mask))
      continue;

    Mask = dedup(Mask);

    ConditionPack *CP = AndPack::tryPack(Mask);
    if (!CP)
      CP = OrPack::tryPack(Mask);
    if (!CP)
      continue;

    CondPacks.emplace_back(CP);
    Worklist.append(CP->getOperandMasks());

    for (const OperandPack &O : CP->getOperands()) {
      // If the conditions use any of guarded loop exit values,
      // pack the guards
      auto [BlendP, MuP] = packExitGuard(O, ExitGuards, Packs, PSSA);
      (void)MuP;
      if (BlendP)
        Worklist.append(BlendP->masks());

      // If the conditions uses any of the active flags,
      // pack those active flags together
      SmallVector<Instruction *> ActiveMus;
      for (auto *V : O) {
        auto *PN = dyn_cast<PHINode>(V);
        if (!PN || !ActiveFlags.count(PN) || Packs.isPacked(PN))
          break;
        ActiveMus.push_back(PN);
      }

      if (ActiveMus.size() != O.size())
        continue;

      auto *P = MuPack::tryPack(dedup(ActiveMus), PSSA);
      if (!P)
        continue;
      Packs.add(P);
      for (auto &O : P->getOperands()) {
        if (auto *P2 = packAsBlends(O, Packs, PSSA))
          Worklist.append(P2->masks());
      }
    }
  }
}

void weakenAddressConditions(ArrayRef<Pack *> Packs, PredicatedSSA &PSSA) {
  for (auto *P : Packs) {
    auto *Ptr = dyn_cast_or_null<Instruction>(getLoadStorePointer(P));
    if (!Ptr || (!isa<SplatPack>(P) && P->masks().empty()))
      continue;
    auto *C = findSpeculativeCond(Ptr, P->values(), PSSA);
    assert(canSpeculateAt(Ptr, C, PSSA));
    auto *VL = PSSA.getLoopForInst(Ptr);
    VL->setInstCond(Ptr, C);
  }
}

bool VectorGen::run() {
  //==== Begin Scheduling ====//
  DependenceChecker DepChecker(PSSA, DI, AA, LI, SE, nullptr /*dead insts*/,
                               TheVersioner);
  // Figure out the loops that we need to fuse.
  EquivalenceClasses<VLoop *> LoopsToFuse = partitionLoops(Packs, PSSA);
  // Fuse the loops top-down
  DenseMap<Value *, Value *> ExitGuards;
  DenseSet<PHINode *> ActiveFlags;
  if (!mergeLoops(LoopsToFuse, PSSA, DepChecker, ExitGuards, ActiveFlags))
    return false;
  // Move the packed instructions together
  for (auto *P : llvm::reverse(Packs)) {
    if (isa<MuPack>(P))
      continue;
    if (!merge(PSSA, toItems(P->values()), DepChecker, &Packs))
      return false;
  }
  //==== End scheduling ====//

  //==== Begin secondary packing ====//
  // Pack the exit guards
  packExitGuards(Packs, ExitGuards, PSSA);
  // Pack the conditions
  // TODO: expose this as a decision for the user?
  SmallVector<VectorMask> Masks;
  for (auto *P : Packs)
    Masks.append(P->masks());
  SmallVector<std::unique_ptr<ConditionPack>> CondPacks;
  if (!DontPackConditions) {
    // When we do versioning, we sometimes strengthen some conditions.
    // If we pack a strengthend conditions, we also should pack the original
    // conditions. This allows us to vectorize some of the versioning checks.
    if (TheVersioner) {
      auto NewMasks = Masks;
      for (auto &M : Masks) {
        auto &M2 = NewMasks.emplace_back();
        for (auto *C : M) {
          if (auto *C2 = TheVersioner->getOriginalCondition(C))
            M2.push_back(C2);
          else
            M2.push_back(C);
        }
      }
      Masks.swap(NewMasks);
    }

    packConditions(Masks, ExitGuards, ActiveFlags, CondPacks, Packs, PSSA);
    // Map each condition to the pack that produces it
    for (auto &CP : CondPacks)
      for (auto *C : CP->values())
        CondToPackMap.try_emplace(C, CP.get());
  }
  //==== End secondary packing ====//

  //==== Finalize the operands of the packs ====//
  for (auto *P : Packs)
    VecOperands[P] = P->getOperands();

  //==== Generate vector code from the packs ====//
  runOnLoop(&PSSA.getTopLevel());

  //==== Remove the instructions killed by vectorization ====//
  for (auto *I : DeadInsts) {
    I->replaceAllUsesWith(UndefValue::get(I->getType()));
    I->dropAllReferences();
  }
  for (auto *I : DeadInsts) {
    if (auto *PN = dyn_cast<PHINode>(I); PN && PSSA.isMu(PN)) {
      PSSA.getLoopForInst(PN)->eraseMu(PN);
    } else {
      auto InsertPt = PSSA.getInsertPoint(I);
      InsertPt.VL->erase(InsertPt.It);
    }

    if (I->getParent())
      I->eraseFromParent();
  }
  return true;
}

bool lower(ArrayRef<Pack *> Packs, PredicatedSSA &PSSA, DependenceInfo &DI,
           CachingAA &AA, LoopInfo &LI, ScalarEvolution &SE,
           Versioner *TheVersioner) {
  VectorGen Gen(Packs, PSSA, DI, AA, LI, SE, TheVersioner);
  return Gen.run();
}
