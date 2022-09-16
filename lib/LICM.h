#ifndef LICM_H
#define LICM_H

#include "llvm/IR/PassManager.h"

namespace llvm {
class Function;
}

struct MyLICMPass : public llvm::PassInfoMixin<MyLICMPass> {
  llvm::PreservedAnalyses run(llvm::Function &,
                              llvm::FunctionAnalysisManager &);
};

#endif // LICM_H
