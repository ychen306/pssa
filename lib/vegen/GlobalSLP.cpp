#include "vegen/GlobalSLP.h"

using namespace llvm;

PreservedAnalyses GlobalSLPPass::run(Function &, FunctionAnalysisManager &AM) {
  return PreservedAnalyses::none();
}
