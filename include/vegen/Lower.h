#ifndef VEGEN_LOWER_H
#define VEGEN_LOWER_H

#include "llvm/ADT/ArrayRef.h"
#include "llvm/ADT/DenseSet.h"
#include "llvm/IR/PassManager.h"

namespace llvm {
class DependenceInfo;
class AAResults;
class LoopInfo;
class Instruction;
class Value;
class ScalarEvolution;
} // namespace llvm

class Pack;
class PredicatedSSA;
class ControlCondition;
class Versioner;

// Lower a set of packs to vector instructions.
// May bail out due to circular deps introduced by the packs.
// Return true if succeeded.
bool lower(llvm::ArrayRef<Pack *>, PredicatedSSA &, llvm::DependenceInfo &,
           llvm::AAResults &, llvm::LoopInfo &, llvm::ScalarEvolution &,
           Versioner *TheVersioner = nullptr);

const ControlCondition *
findSpeculativeCond(llvm::Instruction *I,
                    llvm::ArrayRef<llvm::Instruction *> Users,
                    PredicatedSSA &PSSA);

bool canSpeculateAt(llvm::Value *V, const ControlCondition *C,
                    PredicatedSSA &PSSA);

struct TestVectorGen : public llvm::PassInfoMixin<TestVectorGen> {
  llvm::PreservedAnalyses run(llvm::Function &,
                              llvm::FunctionAnalysisManager &);
};

#endif // end VEGEN_LOWER_H
