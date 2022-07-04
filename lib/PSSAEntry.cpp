#include "ControlDependence.h"
#include "PSSA.h"
#include "Lower.h"
#include "llvm/Analysis/LoopInfo.h"
#include "llvm/Analysis/MustExecute.h" // mayContainIrreducibleControl
#include "llvm/Analysis/PostDominators.h"
#include "llvm/IR/Dominators.h"
#include "llvm/IR/Function.h"
#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/LegacyPassManager.h"
#include "llvm/InitializePasses.h"
#include "llvm/Pass.h"
#include "llvm/Support/CommandLine.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/Transforms/IPO/PassManagerBuilder.h"
#include "llvm/Transforms/InstCombine/InstCombine.h"
#include "llvm/Transforms/Scalar.h"
#include "llvm/Transforms/Scalar/GVN.h"
#include "llvm/Transforms/Scalar/InstSimplifyPass.h"
#include "llvm/Transforms/Utils.h"
#include "llvm/Transforms/Utils/UnifyFunctionExitNodes.h"

using namespace llvm;

namespace llvm {
void initializePSSAEntryPass(PassRegistry &);
}

namespace {
struct PSSAEntry : public FunctionPass {
  static char ID;
  PSSAEntry() : FunctionPass(ID) {
    initializePSSAEntryPass(*PassRegistry::getPassRegistry());
  }

  virtual void getAnalysisUsage(AnalysisUsage &AU) const override {
    AU.addRequired<DominatorTreeWrapperPass>();
    AU.addRequired<LoopInfoWrapperPass>();
    AU.addRequired<PostDominatorTreeWrapperPass>();
  }

  bool runOnFunction(Function &) override;
};
} // namespace

INITIALIZE_PASS_BEGIN(PSSAEntry, "pssa-entry", "pssa-entry", false, false)
INITIALIZE_PASS_DEPENDENCY(DominatorTreeWrapperPass)
INITIALIZE_PASS_DEPENDENCY(LoopInfoWrapperPass)
INITIALIZE_PASS_DEPENDENCY(PostDominatorTreeWrapperPass)
INITIALIZE_PASS_END(PSSAEntry, "pssa-entry", "pssa-entry", false, false)

char PSSAEntry::ID = 42;

bool PSSAEntry::runOnFunction(Function &F) {
  errs() << "!! processing " << F.getName() << '\n';

  auto &DT = getAnalysis<DominatorTreeWrapperPass>().getDomTree();
  auto &PDT = getAnalysis<PostDominatorTreeWrapperPass>().getPostDomTree();
  auto &LI = getAnalysis<LoopInfoWrapperPass>().getLoopInfo();

  // Don't deal with irreducible CFG
  if (mayContainIrreducibleControl(F, &LI))
    return false;

  // We don't deal with things like switches or invoke
  for (auto &BB : F)
    if (!isa<ReturnInst>(BB.getTerminator()) &&
        !isa<BranchInst>(BB.getTerminator()))
      return false;

  // Don't deal with infinite loops or non-rotated loops
  for (auto *L : LI.getLoopsInPreorder())
    if (!L->isLoopSimplifyForm() || !L->isRotatedForm() || L->hasNoExitBlocks())
      return false;

  PredicatedSSA PSSA(&F, LI, DT, PDT);
  lowerPSSAToLLVM(&F, PSSA);

  return true;
}

// Automatically enable the pass.
// http://adriansampson.net/blog/clangpass.html
static void registerPSSAEntry(const PassManagerBuilder &PMB,
                              legacy::PassManagerBase &MPM) {
  MPM.add(createUnifyFunctionExitNodesPass());
  MPM.add(createLoopSimplifyPass());
  MPM.add(createLoopRotatePass());
  MPM.add(createLCSSAPass());
  MPM.add(new PSSAEntry());

  // Clean up
  MPM.add(createCFGSimplificationPass());
  MPM.add(createJumpThreadingPass());
  MPM.add(createInstructionCombiningPass(true /*expensive combines*/));
  MPM.add(createGVNPass());
  MPM.add(createAggressiveDCEPass());
}

// Register this pass to run after all optimization,
// because we want this pass to replace LLVM SLP.
static RegisterStandardPasses
    RegisterMyPass(PassManagerBuilder::EP_ScalarOptimizerLate,
                   registerPSSAEntry);

static struct RegisterPSSAEntry {
  RegisterPSSAEntry() {
    initializePSSAEntryPass(*PassRegistry::getPassRegistry());
  }
} X;
