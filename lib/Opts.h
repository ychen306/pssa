#ifndef OPTS_H
#define OPTS_H

#include "llvm/IR/PassManager.h"

namespace llvm {
class Function;
}

struct RedundantLoadEliminationPass : public llvm::PassInfoMixin<RedundantLoadEliminationPass> {
  llvm::PreservedAnalyses run(llvm::Function &,
                              llvm::FunctionAnalysisManager &);
};

#endif // OPTS_H
