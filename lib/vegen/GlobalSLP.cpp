#include "vegen/GlobalSLP.h"
#include "DependenceChecker.h"
#include "Heuristics.h"
#include "LooseInstructionTable.h"
#include "Matcher.h"
#include "Reduction.h"
#include "pssa/Lower.h"
#include "pssa/PSSA.h"
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

// FIXME: add a cl::opt to config if we want to use these test instructions
extern ArrayRef<InstructionDescriptor> getTestInsts();

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
  ReductionInfo RI(PSSA);
  LooseInstructionTable LIT;
  Matcher TheMatcher(RI, LIT);

  std::vector<Pack *> Packs = packBottomUp(getTestInsts(), PSSA, RI, LIT,
                                           TheMatcher, DL, SE, LI, AA, DI, TTI);
  if (Packs.empty()) {
    LIT.destroy();
    return PreservedAnalyses::all();
  }

  SmallVector<Instruction *> LooseInsts;
  // FIXME: track dead instructions and remove them to remove false dependences
  // due to reductions
  DependenceChecker DepChecker(PSSA, DI, AA, LI);
  for (auto *P : Packs)
    P->getLooseInsts(LooseInsts, LIT);
  bool Ok = LIT.insertInto(LooseInsts, PSSA, DepChecker, RI);
  LIT.destroy();
  // FIXME: LIT may alter the IR; backup the IR and restore if somehow LIT finds
  // circular deps
  if (!Ok)
    return PreservedAnalyses::none();

  if (!lower(Packs, PSSA, DI, AA, LI))
    return PreservedAnalyses::all();

  for (auto *P : Packs)
    delete P;
  lowerPSSAToLLVM(&F, PSSA);

  return PreservedAnalyses::none();
}
