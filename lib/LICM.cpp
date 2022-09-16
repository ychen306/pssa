#include "LICM.h"
#include "pssa/Lower.h"
#include "pssa/PSSA.h"

using namespace llvm;

PreservedAnalyses MyLICMPass::run(Function &F, FunctionAnalysisManager &AM) {
  errs() << "???? running my licm on " << F.getName() << '\n';
  return PreservedAnalyses::none();
}
