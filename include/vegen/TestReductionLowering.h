#ifndef VEGEN_TESTREDUCTIONLOWERING_H
#define VEGEN_TESTREDUCTIONLOWERING_H
// Pass for testing code generation algorithm involving reduction
#include "llvm/IR/PassManager.h"

namespace llvm {
class Function;
}

struct TestReductionLowering : llvm::PassInfoMixin<TestReductionLowering> {
  llvm::PreservedAnalyses run(llvm::Function &,
                              llvm::FunctionAnalysisManager &);
};
#endif // VEGEN_TESTREDUCTIONLOWERING_H
