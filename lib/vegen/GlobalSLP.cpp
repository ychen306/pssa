#include "vegen/GlobalSLP.h"
#include "DependenceChecker.h"
#include "Heuristics.h"
#include "LoopUnrolling.h"
#include "LooseInstructionTable.h"
#include "Matcher.h"
#include "Reducer.h"
#include "Reduction.h"
#include "UnrollFactor.h"
#include "Versioning.h"
#include "pssa/Inserter.h"
#include "pssa/Lower.h"
#include "pssa/PSSA.h"
#include "vegen/Lower.h"
#include "vegen/Pack.h"
#include "llvm/Analysis/AliasAnalysis.h"
#include "llvm/Analysis/AssumptionCache.h"
#include "llvm/Analysis/DependenceAnalysis.h"
#include "llvm/Analysis/LoopInfo.h"
#include "llvm/Analysis/PostDominators.h"
#include "llvm/Analysis/ScalarEvolution.h"
#include "llvm/Analysis/TargetTransformInfo.h"
#include "llvm/IR/Dominators.h"
#include "llvm/Support/CommandLine.h"

using namespace llvm;

static cl::opt<std::string>
    VectorizeOnly("vectorize-only",
                  cl::desc("only vectorize selected function"));

static cl::opt<bool> DoUnroll("unroll-loops",
                              cl::desc("don't unroll before vectorize"),
                              cl::init(false));

static cl::opt<bool>
    DumpModuleAfterUnroll("dump-module",
                          cl::desc("Dump module after unrolling in global slp"),
                          cl::init(false));

// FIXME: add a cl::opt to config if we want to use these test instructions
extern ArrayRef<InstructionDescriptor> getTestInsts();

PreservedAnalyses GlobalSLPPass::run(Function &F, FunctionAnalysisManager &AM) {
  if (!VectorizeOnly.empty() && F.getName() != VectorizeOnly)
    return PreservedAnalyses::all();

  auto &SE = AM.getResult<ScalarEvolutionAnalysis>(F);
  auto &DL = F.getParent()->getDataLayout();
  auto &LI = AM.getResult<LoopAnalysis>(F);
  auto &DT = AM.getResult<DominatorTreeAnalysis>(F);
  auto &TTI = AM.getResult<TargetIRAnalysis>(F);
  auto &DI = AM.getResult<DependenceAnalysis>(F);
  auto &AA = AM.getResult<AAManager>(F);

  CachingAA CAA(AA);

  if (!isConvertibleToPSSA(F, LI, DT))
    return PreservedAnalyses::none();

  if (DoUnroll) {
    DenseMap<Loop *, UnrolledLoopTy> DupToOrigLoopMap;
    DenseMap<Instruction *, UnrolledInstruction> UnrolledIterations;
    AssumptionCache AC(F);
    DenseMap<Loop *, unsigned> UFs;
    computeUnrollFactor(getTestInsts(), &TTI, &F, LI, UFs);
    unrollLoops(SE, LI, AC, DT, &TTI, UFs, DupToOrigLoopMap,
                &UnrolledIterations);
  }

  if (DumpModuleAfterUnroll)
    F.getParent()->dump();

  PostDominatorTree PDT(F);
  PredicatedSSA PSSA(&F, LI, DT, PDT, &SE);
  ReductionInfo RI(PSSA);
  LooseInstructionTable LIT;
  Matcher TheMatcher(RI, LIT);

  VersioningPlan VerPlan;
  std::vector<Pack *> Packs =
      packBottomUp(getTestInsts(), VerPlan, PSSA, RI, LIT, TheMatcher, DL, SE,
                   DT, LI, CAA, DI, TTI);
  if (Packs.empty()) {
    LIT.destroy();
    return PreservedAnalyses::none();
  }

  SmallVector<Instruction *> LooseInsts;
  // FIXME: track dead instructions and remove them to remove false dependences
  // due to reductions
  DependenceChecker DepChecker(PSSA, DI, CAA, LI, SE);
  for (auto *P : Packs)
    P->getLooseInsts(LooseInsts, LIT);

  // FIXME: LIT may alter the IR; backup the IR and restore if somehow LIT finds
  // circular deps
  bool Ok = LIT.insertInto(LooseInsts, PSSA, DepChecker, RI);
  if (!Ok) {
    LIT.destroy();
    return PreservedAnalyses::none();
  }
  lowerReductions(RI, PSSA, LIT, DepChecker, false /*replace insts*/);
  LIT.destroy();

  weakenAddressConditions(Packs, PSSA);

  Versioner TheVersioner(PSSA, DI, CAA, LI, SE);
  bool DoVersioning = !VerPlan.Versionings.empty();
  // Lower the versioning plan
  if (DoVersioning) {
    // Group the items into equivalence classes according to the packing
    // decisions. If a pack of instructions come from the same loop, then they
    // should be in the same class. If a pack of instructions come from
    // different loops, then those loops should be in the same class.
    EquivalenceClasses<Item> EC;
    for (auto *P : Packs) {
      SmallVector<Instruction *> Insts;
      P->getKilledInsts(Insts);
      auto *I0 = Insts.front();
      for (auto *I : drop_begin(Insts))
        EC.unionSets(I0, I);
    }

    lowerVersioningPlan(VerPlan, TheVersioner, EC, PSSA, SE);

    // Pack the versioning phis
    DependenceChecker DepChecker(PSSA, DI, CAA, LI, SE, nullptr /*dead insts*/,
                                 &TheVersioner);
    auto NewPacks = packVersioningPhis(Packs, DepChecker, TheVersioner, PSSA);
    append_range(Packs, NewPacks);

    // Replace the cloned reducers with proper llvm compute instructions
    for (auto *R : TheVersioner.getClonedReducers()) {
      auto *VL = PSSA.getLoopForInst(R);
      Inserter Insert(VL, VL->getInstCond(R), VL->toIterator(R));
      auto *Acc = R->getOperand(0);
      for (auto *X : drop_begin(R->operand_values()))
        Acc = emitBinaryReduction(R->getKind(), Acc, X, Insert);
      R->replaceAllUsesWith(Acc);
      VL->erase(R);
      delete R;
    }
  }

  if (!lower(Packs, PSSA, DI, CAA, LI, SE,
             DoVersioning ? &TheVersioner : nullptr)) {
    llvm_unreachable("failed to lower to pssa");
    return PreservedAnalyses::none();
  }

  for (auto *P : Packs)
    delete P;
  lowerPSSAToLLVM(&F, PSSA);

  return PreservedAnalyses::none();
}
