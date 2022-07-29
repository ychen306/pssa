#ifndef VEGEN_GLOBALSLP_H
#define VEGEN_GLOBALSLP_H

#include "llvm/IR/PassManager.h"

namespace llvm {
class Function;
}

struct GlobalSLPPass : llvm::PassInfoMixin<GlobalSLPPass> {
  llvm::PreservedAnalyses run(llvm::Function &,
                              llvm::FunctionAnalysisManager &);
};

#endif // VEGEN_GLOBALSLP_H
