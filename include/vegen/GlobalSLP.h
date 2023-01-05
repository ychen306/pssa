#ifndef VEGEN_GLOBALSLP_H
#define VEGEN_GLOBALSLP_H

#include "llvm/IR/PassManager.h"
#include "llvm/IRReader/IRReader.h"
#include "llvm/Support/CommandLine.h"
#include "llvm/Support/SourceMgr.h"

namespace llvm {
class Function;
}

struct GlobalSLPPass : llvm::PassInfoMixin<GlobalSLPPass> {
  std::shared_ptr<llvm::Module> InstWrappers;
  llvm::PreservedAnalyses run(llvm::Function &,
                              llvm::FunctionAnalysisManager &);
};

#endif // VEGEN_GLOBALSLP_H
