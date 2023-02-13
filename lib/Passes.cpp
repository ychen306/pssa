#include "pssa/Lower.h"
#include "pssa/PSSA.h"
#include "vegen/DependenceChecker.h"
#include "vegen/GlobalSLP.h"
#include "vegen/LooseInstructionTable.h"
#include "vegen/Lower.h"
#include "vegen/Pack.h"
#include "vegen/Reducer.h"
#include "vegen/Reduction.h"
#include "llvm/Analysis/AliasAnalysis.h"
#include "llvm/Analysis/DependenceAnalysis.h"
#include "llvm/Analysis/LoopInfo.h"
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
#include "llvm/Transforms/Scalar/Scalarizer.h"
#include "llvm/Transforms/Scalar/SimplifyCFG.h"
#include "llvm/Transforms/Utils/UnifyFunctionExitNodes.h"

using namespace llvm;

namespace {
cl::opt<bool> TestCodeGen("test-pssa-lowering", cl::desc("Test PSSA Lowering"),
                          cl::init(false));

cl::opt<bool> UseGlobalSLP("enable-global-slp", cl::desc("Enable global slp"),
                           cl::init(false));

cl::list<std::string>
    InstsToPack("p", cl::desc("<comma-separted list of instructions to pack>"));

cl::opt<std::string> ReductionToPack("rdx-to-pack",
                                     cl::desc("<reduction to pack>"));

cl::opt<unsigned> ReductionWidth("rdx-width",
                                 cl::desc("<size of the horizontal reduction>"),
                                 cl::init(4));

cl::opt<bool> DisableReductionPacking(
    "disable-reduction-packing",
    cl::desc(
        "bother the operands of <rdx-to-pack> and produce them as scalar"),
    cl::init(false));

struct PSSAEntry : public PassInfoMixin<PSSAEntry> {
  PreservedAnalyses run(Function &, FunctionAnalysisManager &);
};

struct TestVectorGen : public PassInfoMixin<TestVectorGen> {
  PreservedAnalyses run(Function &, FunctionAnalysisManager &);
};

struct ReductionPrinter : public PassInfoMixin<ReductionPrinter> {
  PreservedAnalyses run(Function &, FunctionAnalysisManager &);
};

struct LiveInstsPrinter : public PassInfoMixin<LiveInstsPrinter> {
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

// Decompose a list of reductions with "real" instructions and pack those
// instructions
template <typename InstType>
static Pack *decomposeAndPack(PredicatedSSA &PSSA, ReductionInfo &RI,
                              LooseInstructionTable &LIT,
                              ArrayRef<InstType *> Insts) {
  auto *Rdx0 = dyn_cast<Reduction>(Insts.front());
  if (!Rdx0)
    return nullptr;

  auto *PN0 = RI.unwrapCondition(Rdx0, LIT);
  // See if we can unwrap the whole pack of instructions
  SmallVector<Instruction *, 4> PNs = {PN0};
  for (auto *I : drop_begin(Insts)) {
    auto *Rdx = dyn_cast<Reduction>(I);
    if (!Rdx)
      return nullptr;
    auto *PN = RI.unwrapCondition(Rdx, LIT);
    if (!PN)
      continue;
    PNs.push_back(PN);
  }
  if (PNs.size() == Insts.size())
    return BlendPack::create(PNs, true /*is one-hot*/, PSSA);

  SmallVector<Instruction *, 4> Reducers;
  for (auto *I : Insts) {
    auto *Rdx = dyn_cast<Reduction>(I);
    if (!Rdx)
      return nullptr;
    auto *R = RI.decomposeWithBinary(Rdx, LIT);
    if (!R)
      return nullptr;
    Reducers.push_back(R);
  }
  return SIMDPack::tryPack(Reducers);
}

// FIXME: move this into util
template <typename SourceTy, typename DestTy>
static Optional<SmallVector<DestTy *>> cast_many(ArrayRef<SourceTy *> Xs) {
  SmallVector<DestTy *> Ys;
  for (auto *X : Xs) {
    auto *Y = dyn_cast<DestTy>(X);
    if (!Y)
      return None;
    Ys.push_back(Y);
  }
  return Ys;
}

// Light-weight bottom-up heuristic for packing reductions
static void packReductions(ArrayRef<Reduction *> Rdxs,
                           SmallVectorImpl<Pack *> &Packs, PredicatedSSA &PSSA,
                           ReductionInfo &RI, LooseInstructionTable &LIT) {
  std::function<void(ArrayRef<Reduction *>)> PackRec =
      [&](ArrayRef<Reduction *> Rdxs) {
        auto *P = decomposeAndPack(PSSA, RI, LIT, Rdxs);
        if (!P)
          return;
        Packs.push_back(P);

        for (auto O : P->getOperands()) {
          if (all_of(O, [&](auto *V) { return LIT.isLooseMu(V); })) {
            Packs.push_back(MuPack::create(*cast_many<Value, Instruction>(O)));
            continue;
          }

          if (auto SubRdxs = cast_many<Value, Reduction>(O))
            PackRec(*SubRdxs);
        }
      };
  PackRec(Rdxs);
}

PreservedAnalyses TestVectorGen::run(Function &F, FunctionAnalysisManager &AM) {
  auto &SE = AM.getResult<ScalarEvolutionAnalysis>(F);
  auto &DL = F.getParent()->getDataLayout();
  auto &LI = AM.getResult<LoopAnalysis>(F);
  auto &DT = AM.getResult<DominatorTreeAnalysis>(F);
  auto &PDT = AM.getResult<PostDominatorTreeAnalysis>(F);
  auto &DI = AM.getResult<DependenceAnalysis>(F);
  auto &AA = AM.getResult<AAManager>(F);
  PredicatedSSA PSSA(&F, LI, DT, PDT, &SE);
  ReductionInfo RI(PSSA);

  DenseMap<StringRef, Instruction *> NameToInstMap;
  DenseMap<StringRef, Instruction *> NameToStoreMap;
  Reduction *Rdx = nullptr;
  for (auto &I : instructions(&F)) {
    if (I.hasName())
      NameToInstMap[I.getName()] = &I;
    if (auto *SI = dyn_cast<StoreInst>(&I)) {
      auto *V = SI->getValueOperand();
      if (V->hasName())
        NameToStoreMap[V->getName()] = SI;
    }
    if (I.getName() == ReductionToPack)
      Rdx = RI.getReductionFor(&I);
  }
  assert(ReductionToPack.empty() || Rdx);

  SmallVector<Pack *> Packs;
  for (StringRef Arg : InstsToPack) {
    SmallVector<StringRef> Names;
    Arg.split(Names, ',');

    SmallVector<Instruction *> Insts;
    for (StringRef Name : Names) {
      Instruction *I = nullptr;
      if (Name.startswith("storeOf:")) {
        I = NameToStoreMap.lookup(
            Name.drop_front(StringRef("storeOf:").size()));
      } else {
        I = NameToInstMap.lookup(Name);
      }
      assert(I);
      Insts.push_back(I);
    }

    if (auto *Pack = SIMDPack::tryPack(Insts)) {
      Packs.push_back(Pack);
    } else if (auto *P = GEPPack::tryPack(Insts)) {
      Packs.push_back(P);
    } else if (auto *PhiP = PHIPack::tryPack(Insts, PSSA)) {
      Packs.push_back(PhiP);
    } else if (auto *MuP = MuPack::tryPack(Insts, PSSA)) {
      Packs.push_back(MuP);
    } else if (auto *BlendP = BlendPack::tryPack(Insts, PSSA)) {
      Packs.push_back(BlendP);
    } else if (auto *LoadP = LoadPack::tryPack(Insts, DL, SE, LI, PSSA)) {
      Packs.push_back(LoadP);
    } else if (auto *StoreP = StorePack::tryPack(Insts, DL, SE, LI, PSSA)) {
      Packs.push_back(StoreP);
    } else if (auto *GatherP = GatherPack::tryPack(Insts, PSSA)) {
      Packs.push_back(GatherP);
    } else {
      errs() << "failed to pack specified insts\n";
      return PreservedAnalyses::all();
    }

    errs() << "Packing " << *Packs.back() << '\n';
  }

  if (Rdx) {
    auto DeadInsts = findDeadInsts(RI, PSSA);

    errs() << "Packing reduction " << *Rdx << '\n';
    SmallVector<Reduction *, 4> SubRdxs;
    LooseInstructionTable LIT;
    RI.split(Rdx, std::min<unsigned>(ReductionWidth, Rdx->Elements.size()),
             SubRdxs);
    // Produce the decomposed reductions as a vector
    if (!DisableReductionPacking)
      packReductions(SubRdxs, Packs, PSSA, RI, LIT);
    errs() << "!!! num packs " << Packs.size() << '\n';
    auto *RootR = LIT.getOrCreateReducer(Rdx, *cast_many<Reduction, Value>(SubRdxs));

    // Pack the final horizontal reduction
    Packs.push_back(new ReductionPack(RootR));
    std::vector<Instruction *> LooseInsts;
    for (auto *P : Packs) {
      for (auto *I : P->values())
        if (LIT.isLoose(I))
          LooseInsts.push_back(I);
    }
    DependenceChecker DepChecker(PSSA, DI, AA, LI, &DeadInsts);
    // Insert all of the loose instructions resulting from
    // matching and packing the reductions
    bool Ok = LIT.insertInto(LooseInsts, PSSA, DepChecker, RI);
    if (!Ok)
      return PreservedAnalyses::none();
    // Lower any un-decomposed reductions as scalars
    lowerReductions(RI, PSSA, LIT, DepChecker);
  }

  lower(Packs, PSSA, DI, AA, LI);
  lowerPSSAToLLVM(&F, PSSA);

  for (auto *P : Packs)
    delete P;

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

PreservedAnalyses LiveInstsPrinter::run(Function &F, FunctionAnalysisManager &AM) {
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
}

extern "C" LLVM_ATTRIBUTE_WEAK ::llvm::PassPluginLibraryInfo
llvmGetPassPluginInfo() {
  return {LLVM_PLUGIN_API_VERSION, "pssa", LLVM_VERSION_STRING, buildPasses};
}
