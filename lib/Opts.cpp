#include "Opts.h"
#include "pssa/Inserter.h"
#include "pssa/Lower.h"
#include "pssa/PSSA.h"
#include "vegen/Versioning.h"
#include "llvm/Analysis/AliasAnalysis.h"
#include "llvm/Analysis/AssumptionCache.h"
#include "llvm/Analysis/DependenceAnalysis.h"
#include "llvm/Analysis/LoopInfo.h"
#include "llvm/Analysis/PostDominators.h"
#include "llvm/Analysis/ScalarEvolution.h"
#include "llvm/Analysis/TargetTransformInfo.h"
#include "llvm/IR/Dominators.h"
#include "llvm/IR/InstIterator.h"
#include "llvm/Support/CommandLine.h"
#include "llvm/Transforms/Utils/ValueMapper.h"

using namespace llvm;

// Return whether the Insts are independent
static bool isIndependent(ArrayRef<Instruction *> Insts, PredicatedSSA &PSSA,
                          DependenceChecker &DepChecker,
                          IndependentItemsTracker &IndependentItems,
                          const PackSet *Packs = nullptr) {
  SmallVector<Item> Items;

  auto *ParentVL = PSSA.getLoopForInst(Insts.front());
  if (all_of(Insts, [ParentVL, &PSSA](auto *I) {
        return ParentVL == PSSA.getLoopForInst(I);
      })) {
    Items.assign(Insts.begin(), Insts.end());
  } else {
    return false;
  }

  if (IndependentItems.contains(Items))
    return true;

  SmallVector<Item> Deps;
  bool FoundCycle =
      findInBetweenDeps(Deps, Items, ParentVL, PSSA, DepChecker, Packs);
  if (FoundCycle)
    return false;
  SmallDenseSet<Item, 8, ItemHashInfo> ItemSet(Items.begin(), Items.end());
  for (auto &Dep : Deps)
    if (ItemSet.count(Dep))
      return false;

  IndependentItems.add(Items);
  return true;
}

PreservedAnalyses
RedundantLoadEliminationPass::run(Function &F, FunctionAnalysisManager &AM) {
  errs() << "[redundant load eliminization] optimizing " << F.getName() << '\n';
  auto &SE = AM.getResult<ScalarEvolutionAnalysis>(F);
  auto &DL = F.getParent()->getDataLayout();
  auto &LI = AM.getResult<LoopAnalysis>(F);
  auto &DT = AM.getResult<DominatorTreeAnalysis>(F);
  auto &TTI = AM.getResult<TargetIRAnalysis>(F);
  auto &AA = AM.getResult<AAManager>(F);
  auto &PDT = AM.getResult<PostDominatorTreeAnalysis>(F);
  WrappedDependenceInfo DI(F);

  CachingAA CAA(AA);

  if (!isConvertibleToPSSA(F, LI, DT))
    return PreservedAnalyses::none();


  PredicatedSSA PSSA(&F, LI, DT, PDT, &SE);
  DependenceChecker DepChecker(PSSA, DI, CAA, LI, SE);

  IndependentItemsTracker IndependentItems;

  VersioningPlan VerPlan;

  std::vector<std::pair<const ControlCondition *, std::vector<Instruction *>>> RedundantLoads;

  std::function<void (VLoop *)> OptimizeLoop = [&](VLoop *VL) {
    std::vector<VLoop *> SubLoops;
    DenseMap<Value *, std::vector<Instruction *>> PointersToLoadsMap;
    for (auto It : VL->items()) {
      if (auto *VL = It.asLoop()) {
        SubLoops.push_back(VL);
        continue;
      }
      if (auto *Load = dyn_cast<LoadInst>(It.asInstruction()))
        PointersToLoadsMap[Load->getPointerOperand()].push_back(Load);
    }
    for (auto &[Ptr, Insts] : PointersToLoadsMap) {
      if (Insts.size() <= 1)
        continue;
      if (isIndependent(Insts, PSSA, DepChecker, IndependentItems))
        continue;
      if (!findNecessaryDeps(VerPlan, Insts, PSSA, DepChecker, nullptr/*packs*/, &IndependentItems))
        continue;
      errs() << "Found redundant loads: {\n";
      for (auto *I : Insts)
        errs() << *I
          << ", cond = " << *VL->getInstCond(I) 
          << '\n';
      errs() << "}\n";

      SmallVector<const ControlCondition *> Conds;
      for (auto *I : Insts)
        Conds.push_back(VL->getInstCond(I));
      auto *C = *std::min_element(Conds.begin(), Conds.end(), isImplied);
      if (all_of(Conds, [C](auto *C2) { return isImplied(C, C2); }))
        RedundantLoads.emplace_back(C, Insts);
    }

    llvm::for_each(SubLoops, OptimizeLoop);
  };

  OptimizeLoop(&PSSA.getTopLevel());

  EquivalenceClasses<Item> EC;
#if 0
  for (auto &Insts : make_second_range(RedundantLoads)) {
    for (auto *I : Insts) {
      auto *VL = PSSA.getLoopForInst(I);
      auto *C = PSSA.getInstCond(I);
      SmallVector<User *> Worklist(I->user_begin(), I->user_end());
      while (!Worklist.empty()) {
        auto *I2 = cast<Instruction>(Worklist.pop_back_val());
        if (I2->isTerminator())
          continue;
        if (PSSA.getLoopForInst(I2) != VL)
          continue;
        auto *PN = dyn_cast<PHINode>(I2);
        if (PN && PSSA.isMu(PN))
          continue;
        if (isImplied(C, PSSA.getInstCond(I2)))
          continue;
        EC.unionSets(I, I2);
        Worklist.append(I2->user_begin(), I2->user_end());
      }
    }
  }
#endif
  //if (!isVersioningPlanFeasible(VerPlan, EC, DepChecker, PSSA, SE))
  //  return {};

  Versioner TheVersioner(PSSA, DI, CAA, LI, SE);
  lowerVersioningPlan(VerPlan, TheVersioner, EC, PSSA, SE);
  for (auto &[C, Insts] : RedundantLoads) {
    auto *VL = PSSA.getLoopForInst(Insts.front());
    auto *Leader = Insts.front();
    assert(all_of(drop_begin(Insts), [&](auto *I) { return VL->comesBefore(Leader, I); }));
    auto InsertPt = VL->toIterator(Leader);
    for (auto *I : drop_begin(Insts)) {
      VL->erase(I);
      VL->insert(I, C, InsertPt);
    }
  }

  SmallVector<Item> Worklist {&PSSA.getTopLevel()};
  DenseSet<Instruction *> DeadInsts;
  while (!Worklist.empty()) {
    auto It = Worklist.pop_back_val();
    // TODO: kill dead loops
    if (auto *VL = It.asLoop()) {
      Worklist.append(VL->item_begin(), VL->item_end());
      continue;
    }
    auto *I = It.asInstruction();
    //if (TheVersioner.isFalse(PSSA.getInstCond(I)))
    //  DeadInsts.insert(I);
  }

  lowerPSSAToLLVM(&F, PSSA);

  //for (auto *I : DeadInsts) {
  //  I->dropAllReferences();
  //  I->replaceAllUsesWith(UndefValue::get(I->getType()));
  //  I->eraseFromParent();
  //}

  return PreservedAnalyses::none();
}
