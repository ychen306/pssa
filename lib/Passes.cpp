#include "pssa/Lower.h"
#include "pssa/PSSA.h"
#include "vegen/Pack.h"
#include "vegen/Lower.h"
#include "llvm/Analysis/DependenceAnalysis.h"
#include "llvm/Analysis/LoopInfo.h"
#include "llvm/Analysis/MustExecute.h" // mayContainIrreducibleControl
#include "llvm/Analysis/PostDominators.h"
#include "llvm/IR/Dominators.h"
#include "llvm/IR/Function.h"
#include "llvm/IR/InstIterator.h"
#include "llvm/Passes/PassBuilder.h"
#include "llvm/Passes/PassPlugin.h"
#include "llvm/Support/CommandLine.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/Transforms/InstCombine/InstCombine.h"
#include "llvm/Transforms/Scalar/ADCE.h"
#include "llvm/Transforms/Scalar/GVN.h"
#include "llvm/Transforms/Scalar/JumpThreading.h"
#include "llvm/Transforms/Scalar/LoopRotation.h"
#include "llvm/Transforms/Scalar/SimplifyCFG.h"
#include "llvm/Transforms/Utils/UnifyFunctionExitNodes.h"

using namespace llvm;

namespace {
cl::opt<bool> TestCodeGen("test-pssa-lowering", cl::desc("Test PSSA Lowering"),
                          cl::init(false));

cl::list<std::string> InstsToPack("p", cl::desc("<comma-separted list of instructions to pack>"));

struct PSSAEntry : public PassInfoMixin<PSSAEntry> {
  PreservedAnalyses run(Function &, FunctionAnalysisManager &);
};

struct TestVectorGen : public PassInfoMixin<TestVectorGen> {
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

PreservedAnalyses TestVectorGen::run(Function &F, FunctionAnalysisManager &AM) {
  DenseMap<StringRef, Instruction *> NameToInstMap;
  DenseMap<StringRef, Instruction *> NameToStoreMap;
  for (auto &I : instructions(&F)) {
    if (I.hasName())
      NameToInstMap[I.getName()] = &I;
    if (auto *SI = dyn_cast<StoreInst>(&I)) {
      auto *V = SI->getValueOperand();
      if (V->hasName())
        NameToStoreMap[V->getName()] = SI;
    }
  }

  auto &SE = AM.getResult<ScalarEvolutionAnalysis>(F);
  auto &DL = F.getParent()->getDataLayout();
  auto &LI = AM.getResult<LoopAnalysis>(F);
  auto &DT = AM.getResult<DominatorTreeAnalysis>(F);
  auto &PDT = AM.getResult<PostDominatorTreeAnalysis>(F);
  PredicatedSSA PSSA(&F, LI, DT, PDT);

  SmallVector<Pack *> Packs;
  for (StringRef Arg : InstsToPack) {
    SmallVector<StringRef> Names;
    Arg.split(Names, ',');

    SmallVector<Instruction *> Insts;
    for (StringRef Name : Names) {
      Instruction *I = nullptr;
      if (Name.startswith("storeOf:")) {
        I = NameToStoreMap.lookup(Name.drop_front(StringRef("storeOf:").size()));
      } else {
        I = NameToInstMap.lookup(Name);
      }
      assert(I);
      Insts.push_back(I);
    }

    if (auto *Pack = SIMDPack::tryPack(Insts)) {
      Packs.push_back(Pack);
    } else if (auto *PhiP = PHIPack::tryPack(Insts, PSSA)) {
      Packs.push_back(PhiP);
    } else if (auto *LoadP = LoadPack::tryPack(Insts, DL, SE, LI, PSSA)) {
      Packs.push_back(LoadP);
    } else if (auto *StoreP = StorePack::tryPack(Insts, DL, SE, LI, PSSA)) {
      Packs.push_back(StoreP);
    } else {
      errs() << "failed to pack specified insts\n";
      return PreservedAnalyses::all();
    }

    errs() << "Packing " << *Packs.back() << '\n';
  }

  lower(Packs, PSSA, AM.getResult<DependenceAnalysis>(F));
  lowerPSSAToLLVM(&F, PSSA);

  for (auto *P : Packs)
    delete P;

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

        if (Name == "test-vector-codegen") {
          FPM.addPass(TestVectorGen());
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
}

extern "C" LLVM_ATTRIBUTE_WEAK ::llvm::PassPluginLibraryInfo
llvmGetPassPluginInfo() {
  return {LLVM_PLUGIN_API_VERSION, "pssa-entry", LLVM_VERSION_STRING,
          buildPasses};
}
