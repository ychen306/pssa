#ifndef VEGEN_SCALARIZER_H
#define VEGEN_SCALARIZER_H

#include "llvm/ADT/Optional.h"
#include "llvm/IR/PassManager.h"

namespace llvm {
class Function;
class FunctionPass;
}

struct ScalarizerPassOptions {
  // These optional booleans correspond 1:1 to cl::opt<bool> options defined in
  // Scalarizer.cpp. When the cl::opt are specified, they take precedence.
  // When the cl::opt are not specified, the present optional booleans allow to
  // override the cl::opt's default values.
  llvm::Optional<bool> ScalarizeVariableInsertExtract;
  llvm::Optional<bool> ScalarizeLoadStore;
};

class VeGenScalarizerPass : public llvm::PassInfoMixin<VeGenScalarizerPass> {
  ScalarizerPassOptions Options;

public:
  llvm::PreservedAnalyses run(llvm::Function &F, llvm::FunctionAnalysisManager &AM);

  void setScalarizeVariableInsertExtract(bool Value) {
    Options.ScalarizeVariableInsertExtract = Value;
  }
  void setScalarizeLoadStore(bool Value) { Options.ScalarizeLoadStore = Value; }
};
#endif // VEGEN_SCALARIZER_H
