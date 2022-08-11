#include "vegen/GlobalSLP.h"
#include "pssa/PSSA.h"
#include "pssa/Lower.h"
#include "vegen/Lower.h"
#include "vegen/Heuristics.h"
#include "vegen/Pack.h"
#include "llvm/Analysis/LoopInfo.h"
#include "llvm/Analysis/PostDominators.h"
#include "llvm/Analysis/ScalarEvolution.h"
#include "llvm/Analysis/TargetTransformInfo.h"
#include "llvm/Analysis/DependenceAnalysis.h"
#include "llvm/Support/CommandLine.h"
#include "llvm/IR/Dominators.h"

using namespace llvm;

static cl::opt<std::string>
    VectorizeOnly("vectorize-only",
                  cl::desc("only vectorize selected function"));

PreservedAnalyses GlobalSLPPass::run(Function &F, FunctionAnalysisManager &AM) {
  if (!VectorizeOnly.empty() && F.getName() != VectorizeOnly)
    return PreservedAnalyses::all();

  auto &SE = AM.getResult<ScalarEvolutionAnalysis>(F);
  auto &DL = F.getParent()->getDataLayout();
  auto &LI = AM.getResult<LoopAnalysis>(F);
  auto &DT = AM.getResult<DominatorTreeAnalysis>(F);
  auto &PDT = AM.getResult<PostDominatorTreeAnalysis>(F);
  auto &TTI = AM.getResult<TargetIRAnalysis>(F);
  auto &DI = AM.getResult<DependenceAnalysis>(F);

  if (!isConvertibleToPSSA(F, LI))
    return PreservedAnalyses::all();

  PredicatedSSA PSSA(&F, LI, DT, PDT, &SE);

  std::vector<Pack *> Packs = packBottomUp(PSSA, DL, SE, LI, DI, TTI);
  if (Packs.empty() || !lower(Packs, PSSA, DI))
    return PreservedAnalyses::all();
  for (auto *P : Packs)
    delete P;
  lowerPSSAToLLVM(&F, PSSA);

  return PreservedAnalyses::none();
}
