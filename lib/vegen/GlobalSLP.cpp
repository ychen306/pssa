#include "vegen/GlobalSLP.h"
#include "pssa/PSSA.h"
#include "vegen/Heuristics.h"
#include "vegen/Pack.h"
#include "llvm/Analysis/LoopInfo.h"
#include "llvm/Analysis/PostDominators.h"
#include "llvm/Analysis/ScalarEvolution.h"
#include "llvm/Analysis/TargetTransformInfo.h"
#include "llvm/IR/Dominators.h"

using namespace llvm;

PreservedAnalyses GlobalSLPPass::run(Function &F, FunctionAnalysisManager &AM) {
  auto &SE = AM.getResult<ScalarEvolutionAnalysis>(F);
  auto &DL = F.getParent()->getDataLayout();
  auto &LI = AM.getResult<LoopAnalysis>(F);
  auto &DT = AM.getResult<DominatorTreeAnalysis>(F);
  auto &PDT = AM.getResult<PostDominatorTreeAnalysis>(F);
  auto &TTI = AM.getResult<TargetIRAnalysis>(F);

  PredicatedSSA PSSA(&F, LI, DT, PDT, &SE);

  std::vector<std::unique_ptr<Pack>> Packs =
      packBottomUp(PSSA, DL, SE, LI, TTI);

  return PreservedAnalyses::none();
}
