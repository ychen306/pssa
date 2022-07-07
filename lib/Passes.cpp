#include "pssa/ControlDependence.h"
#include "pssa/Lower.h"
#include "pssa/PSSA.h"
#include "llvm/Analysis/LoopInfo.h"
#include "llvm/Analysis/MustExecute.h" // mayContainIrreducibleControl
#include "llvm/Analysis/PostDominators.h"
#include "llvm/IR/Dominators.h"
#include "llvm/IR/Function.h"
#include "llvm/IR/LLVMContext.h"
#include "llvm/Pass.h"
#include "llvm/Passes/PassBuilder.h"
#include "llvm/Passes/PassPlugin.h"
#include "llvm/Support/CommandLine.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/Transforms/IPO/PassManagerBuilder.h"
#include "llvm/Transforms/InstCombine/InstCombine.h"
#include "llvm/Transforms/Scalar.h"
#include "llvm/Transforms/Scalar/GVN.h"
#include "llvm/Transforms/Scalar/InstSimplifyPass.h"
#include "llvm/Transforms/Scalar/LoopRotation.h"
#include "llvm/Transforms/Scalar/SimplifyCFG.h"
#include "llvm/Transforms/Utils/UnifyFunctionExitNodes.h"

using namespace llvm;

namespace {
struct PSSAEntry : public PassInfoMixin<PSSAEntry> {
  PreservedAnalyses run(Function &, FunctionAnalysisManager &);
};
} // namespace

PreservedAnalyses PSSAEntry::run(Function &F, FunctionAnalysisManager &AM) {
  errs() << "!! processing " << F.getName() << '\n';

  auto &LI = AM.getResult<LoopAnalysis>(F);
  auto &DT = AM.getResult<DominatorTreeAnalysis>(F);
  auto &PDT = AM.getResult<PostDominatorTreeAnalysis>(F);

  // Don't deal with irreducible CFG
  if (mayContainIrreducibleControl(F, &LI))
    return PreservedAnalyses::none();

  // We don't deal with things like switches or invoke
  for (auto &BB : F)
    if (!isa<ReturnInst>(BB.getTerminator()) &&
        !isa<BranchInst>(BB.getTerminator()))
      return PreservedAnalyses::none();

  // Don't deal with infinite loops or non-rotated loops
  for (auto *L : LI.getLoopsInPreorder())
    if (!L->isLoopSimplifyForm() || !L->isRotatedForm() || L->hasNoExitBlocks())
      return PreservedAnalyses::none();

  PredicatedSSA PSSA(&F, LI, DT, PDT);
  lowerPSSAToLLVM(&F, PSSA);

  return PreservedAnalyses::none();
}

extern "C" LLVM_ATTRIBUTE_WEAK ::llvm::PassPluginLibraryInfo
llvmGetPassPluginInfo() {
  return {LLVM_PLUGIN_API_VERSION, "pssa-entry", LLVM_VERSION_STRING,
          [](PassBuilder &PB) {
            PB.registerPipelineParsingCallback(
                [](StringRef Name, FunctionPassManager &FPM,
                   ArrayRef<PassBuilder::PipelineElement>) {
                  if (Name == "pssa-entry") {
                    FPM.addPass(PSSAEntry());
                    return true;
                  }
                  return false;
                });
            PB.registerScalarOptimizerLateEPCallback(
                [](FunctionPassManager &FPM, OptimizationLevel) {
                  // Preprocess
                  FPM.addPass(UnifyFunctionExitNodesPass());
                  FPM.addPass(LoopSimplifyPass());
                  FPM.addPass(
                      createFunctionToLoopPassAdaptor(LoopRotatePass()));
                  FPM.addPass(LCSSAPass());

                  FPM.addPass(PSSAEntry());

                  // Cleanup
                  FPM.addPass(SimplifyCFGPass());
                });
          }};
}
