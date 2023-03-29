#include "pssa/Lower.h"
#include "pssa/PSSA.h"
#include "vegen/DependenceChecker.h"
#include "vegen/GlobalSLP.h"
#include "vegen/LooseInstructionTable.h"
#include "vegen/Lower.h"
#include "vegen/Reduction.h"
#include "llvm/Analysis/AliasAnalysis.h"
#include "llvm/Analysis/DependenceAnalysis.h"
#include "llvm/Analysis/LoopInfo.h"
#include "llvm/Analysis/PostDominators.h"
#include "llvm/IR/Dominators.h"
#include "llvm/IR/Function.h"
#include "llvm/Passes/PassBuilder.h"
#include "llvm/Passes/PassPlugin.h"
#include "llvm/Support/CommandLine.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/Transforms/InstCombine/InstCombine.h"
#include "llvm/Transforms/Scalar/ADCE.h"
#include "llvm/Transforms/Scalar/GVN.h"
#include "llvm/Transforms/Scalar/JumpThreading.h"
#include "llvm/Transforms/Scalar/LoopRotation.h"
#include "llvm/Transforms/Scalar/Scalarizer.h"
#include "llvm/Transforms/Scalar/SimplifyCFG.h"
#include "llvm/Transforms/Utils/UnifyFunctionExitNodes.h"

using namespace llvm;

namespace {
cl::opt<bool> TestCodeGen("test-pssa-lowering", cl::desc("Test PSSA Lowering"),
                          cl::init(false));

cl::opt<bool> UseGlobalSLP("enable-global-slp", cl::desc("Enable global slp"),
                           cl::init(false));

cl::opt<bool> TestReductionLowering("test-rdx-lowering",
                                    cl::desc("Test scalar reduction lowering"),
                                    cl::init(false));

struct PSSAEntry : public PassInfoMixin<PSSAEntry> {
  PreservedAnalyses run(Function &, FunctionAnalysisManager &);
};

struct ReductionPrinter : public PassInfoMixin<ReductionPrinter> {
  PreservedAnalyses run(Function &, FunctionAnalysisManager &);
};

struct LiveInstsPrinter : public PassInfoMixin<LiveInstsPrinter> {
  PreservedAnalyses run(Function &, FunctionAnalysisManager &);
};

struct ReductionLowering : public PassInfoMixin<ReductionLowering> {
  PreservedAnalyses run(Function &, FunctionAnalysisManager &);
};

} // namespace

PreservedAnalyses PSSAEntry::run(Function &F, FunctionAnalysisManager &AM) {
  errs() << "!! processing " << F.getName() << '\n';

  auto &LI = AM.getResult<LoopAnalysis>(F);
  auto &DT = AM.getResult<DominatorTreeAnalysis>(F);
  auto &PDT = AM.getResult<PostDominatorTreeAnalysis>(F);

  if (!isConvertibleToPSSA(F, LI, DT))
    return PreservedAnalyses::all();

  PredicatedSSA PSSA(&F, LI, DT, PDT);
  lowerPSSAToLLVM(&F, PSSA);

  return PreservedAnalyses::none();
}

PreservedAnalyses ReductionPrinter::run(Function &F,
                                        FunctionAnalysisManager &AM) {
  auto &LI = AM.getResult<LoopAnalysis>(F);
  auto &DT = AM.getResult<DominatorTreeAnalysis>(F);
  auto &PDT = AM.getResult<PostDominatorTreeAnalysis>(F);

  if (!isConvertibleToPSSA(F, LI, DT))
    return PreservedAnalyses::all();

  PredicatedSSA PSSA(&F, LI, DT, PDT);
  ReductionInfo RI(PSSA);

  std::function<void(VLoop *)> Print = [&](VLoop *VL) {
    for (auto &It : VL->items()) {
      if (auto *SubVL = It.asLoop()) {
        Print(SubVL);
        continue;
      }
      auto *I = It.asInstruction();
      if (auto *Rdx = RI.getReductionFor(I))
        outs() << "Reduction for " << *I << " is " << *Rdx << '\n';
    }
  };

  Print(&PSSA.getTopLevel());

  return PreservedAnalyses::all();
}

PreservedAnalyses LiveInstsPrinter::run(Function &F,
                                        FunctionAnalysisManager &AM) {
  auto &LI = AM.getResult<LoopAnalysis>(F);
  auto &DT = AM.getResult<DominatorTreeAnalysis>(F);
  auto &PDT = AM.getResult<PostDominatorTreeAnalysis>(F);

  if (!isConvertibleToPSSA(F, LI, DT))
    return PreservedAnalyses::all();

  PredicatedSSA PSSA(&F, LI, DT, PDT);
  ReductionInfo RI(PSSA);
  auto DeadInsts = findDeadInsts(RI, PSSA);

  auto PrintIfLive = [&DeadInsts](Instruction *I) {
    if (!DeadInsts.count(I))
      outs() << "Live: " << *I << '\n';
  };

  std::function<void(VLoop *)> Print = [&](VLoop *VL) {
    for (auto &It : VL->items()) {
      if (auto *SubVL = It.asLoop()) {
        llvm::for_each(SubVL->mus(), PrintIfLive);
        Print(SubVL);
        continue;
      }
      PrintIfLive(It.asInstruction());
    }
  };

  Print(&PSSA.getTopLevel());

  return PreservedAnalyses::all();
}

// Util pass to stress test reduction lowering
PreservedAnalyses ReductionLowering::run(Function &F,
                                         FunctionAnalysisManager &AM) {
  errs() << "!!! testing reduction lowering on " << F.getName() << '\n';
  auto &SE = AM.getResult<ScalarEvolutionAnalysis>(F);
  auto &LI = AM.getResult<LoopAnalysis>(F);
  auto &DT = AM.getResult<DominatorTreeAnalysis>(F);
  auto &PDT = AM.getResult<PostDominatorTreeAnalysis>(F);
  auto &DI = AM.getResult<DependenceAnalysis>(F);
  auto &AA = AM.getResult<AAManager>(F);

  if (!isConvertibleToPSSA(F, LI, DT))
    return PreservedAnalyses::all();

  PredicatedSSA PSSA(&F, LI, DT, PDT, &SE);
  ReductionInfo RI(PSSA);

  auto DeadInsts = findDeadInsts(RI, PSSA);
  DependenceChecker DepChecker(PSSA, DI, AA, LI, SE, &DeadInsts);
  removeDeadInsts(&PSSA.getTopLevel(), DeadInsts);
  LooseInstructionTable LIT;
  lowerReductions(RI, PSSA, LIT, DepChecker, true /*ReplaceInsts*/);
  lowerPSSAToLLVM(&F, PSSA);
  return PreservedAnalyses::none();
}

static void addPreprocessingPasses(FunctionPassManager &FPM) {
  FPM.addPass(UnifyFunctionExitNodesPass());
  FPM.addPass(LoopSimplifyPass());
  FPM.addPass(createFunctionToLoopPassAdaptor(LoopRotatePass()));
  FPM.addPass(LCSSAPass());
}

static void addCleanupPasses(FunctionPassManager &FPM) {
  FPM.addPass(SimplifyCFGPass());
  FPM.addPass(JumpThreadingPass());
  FPM.addPass(InstCombinePass());
  FPM.addPass(GVNPass());
  FPM.addPass(ADCEPass());
}

static void buildPasses(PassBuilder &PB) {
  PB.registerPipelineParsingCallback(
      [](StringRef Name, FunctionPassManager &FPM,
         ArrayRef<PassBuilder::PipelineElement>) {
        if (Name == "pssa-entry") {
          FPM.addPass(PSSAEntry());
          return true;
        }

        if (Name == "global-slp") {
          FPM.addPass(GlobalSLPPass());
          return true;
        }

        if (Name == "test-vector-codegen") {
          FPM.addPass(TestVectorGen());
          return true;
        }

        if (Name == "print-reductions") {
          FPM.addPass(ReductionPrinter());
          return true;
        }

        if (Name == "print-live-insts") {
          FPM.addPass(LiveInstsPrinter());
          return true;
        }

        if (Name == "test-reduction-lowering") {
          FPM.addPass(ReductionLowering());
          return true;
        }

        return false;
      });

  if (TestCodeGen)
    PB.registerScalarOptimizerLateEPCallback(
        [](FunctionPassManager &FPM, OptimizationLevel) {
          addPreprocessingPasses(FPM);
          FPM.addPass(PSSAEntry());
          addCleanupPasses(FPM);
        });

  if (UseGlobalSLP)
    PB.registerVectorizerStartEPCallback(
        [](FunctionPassManager &FPM, OptimizationLevel) {
          FPM.addPass(ScalarizerPass());
          addPreprocessingPasses(FPM);
          FPM.addPass(GlobalSLPPass());
          addCleanupPasses(FPM);
        });

  if (TestReductionLowering)
    PB.registerScalarOptimizerLateEPCallback(
        [](FunctionPassManager &FPM, OptimizationLevel) {
          addPreprocessingPasses(FPM);
          FPM.addPass(ReductionLowering());
          addCleanupPasses(FPM);
        });
}

extern "C" LLVM_ATTRIBUTE_WEAK ::llvm::PassPluginLibraryInfo
llvmGetPassPluginInfo() {
  return {LLVM_PLUGIN_API_VERSION, "pssa", LLVM_VERSION_STRING, buildPasses};
}
