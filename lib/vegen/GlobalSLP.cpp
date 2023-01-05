#include "vegen/GlobalSLP.h"
#include "pssa/Lower.h"
#include "pssa/PSSA.h"
#include "vegen/GlobalSLP.h"
#include "vegen/Heuristics.h"
#include "vegen/Lower.h"
#include "vegen/MatchManager.h"
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
llvm::cl::opt<std::string> WrappersDir(
    "wrappers-dir",
    llvm::cl::desc("Path to the directory containing InstWrappers.*.bc"),
    llvm::cl::Required);
PreservedAnalyses GlobalSLPPass::run(Function &F, FunctionAnalysisManager &AM) {
  if (!InstWrappers) {
    std::string Wrapper;

    Wrapper = "/x86.bc";
    llvm::SMDiagnostic Err;

    errs() << "Loading inst wrappers: " << WrappersDir + Wrapper << '\n';
    InstWrappers =
        std::move(parseIRFile(WrappersDir + Wrapper, Err, F.getContext()));
    if (!InstWrappers)
      report_fatal_error(std::string("Error parsing Inst Wrappers") +
                         Err.getMessage());
  }
  if (!VectorizeOnly.empty() && F.getName() != VectorizeOnly)
    return PreservedAnalyses::all();
  errs() << "vectorizing " << F.getName() << '\n';
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
  std::vector<const InstBinding *> SupportedIntrinsics;
  for (const auto &I : X86Insts) {
    SupportedIntrinsics.push_back(&I);
  }
  errs() << "Loaded " << SupportedIntrinsics.size() << " intrinsics\n";
  MatchManager MM{SupportedIntrinsics, F};
  errs() << "packing\n";
  std::vector<Pack *> Packs =
      packBottomUp(PSSA, DL, SE, LI, AA, DI, TTI, MM, SupportedIntrinsics);
  errs() << "done packing\n";
  if (Packs.empty() || !lower(Packs, PSSA, DI, AA, LI, InstWrappers))
    return PreservedAnalyses::all();
  errs() << "lowered\n";
  for (auto *P : Packs)
    delete P;
  lowerPSSAToLLVM(&F, PSSA);
  errs() << "done\n";
  return PreservedAnalyses::none();
}
