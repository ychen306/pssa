#include "vegen/GlobalSLP.h"
#include "pssa/Lower.h"
#include "pssa/PSSA.h"
#include "Heuristics.h"
#include "vegen/Lower.h"
#include "vegen/Pack.h"
#include "llvm/Analysis/AliasAnalysis.h"
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
  auto &AA = AM.getResult<AAManager>(F);

  if (!isConvertibleToPSSA(F, LI, DT))
    return PreservedAnalyses::all();

  PredicatedSSA PSSA(&F, LI, DT, PDT, &SE);

  std::vector<Pack *> Packs = packBottomUp(PSSA, DL, SE, LI, AA, DI, TTI);
  if (Packs.empty() || !lower(Packs, PSSA, DI, AA, LI))
    return PreservedAnalyses::all();
  for (auto *P : Packs)
    delete P;
  lowerPSSAToLLVM(&F, PSSA);

  return PreservedAnalyses::none();
}
