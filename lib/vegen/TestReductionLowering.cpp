#include "vegen/TestReductionLowering.h"
#include "Reduction.h"
#include "pssa/PSSA.h"
#include "llvm/Analysis/AliasAnalysis.h"
#include "llvm/Analysis/DependenceAnalysis.h"
#include "llvm/Analysis/LoopInfo.h"
#include "llvm/Analysis/PostDominators.h"
#include "llvm/Analysis/ScalarEvolution.h"
#include "llvm/Analysis/TargetTransformInfo.h"
#include "llvm/IR/Dominators.h"
#include "llvm/IR/InstIterator.h"
#include "llvm/Support/CommandLine.h"

using namespace llvm;

cl::opt<std::string> ReductionToPack("rdx-to-pack",
                                     cl::desc("<reduction to pack>"));

PreservedAnalyses TestReductionLowering::run(Function &F,
                                             FunctionAnalysisManager &AM) {
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

  if (ReductionToPack.empty())
    return PreservedAnalyses::all();

  PredicatedSSA PSSA(&F, LI, DT, PDT, &SE);
  ReductionInfo RI(PSSA);

  Reduction *Rdx = nullptr;
  for (auto &I : instructions(&F)) {
    if (I.getName() == ReductionToPack) {
      Rdx = RI.getReductionFor(&I);
      break;
    }
  }

  if (!Rdx)
    return PreservedAnalyses::all();

  errs() << "Packing reduction " << *Rdx << '\n';
  return PreservedAnalyses::none();
}
