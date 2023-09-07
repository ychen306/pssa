#ifndef VEGEN_WRAPPED_DEPENDENCE_INFO
#define VEGEN_WRAPPED_DEPENDENCE_INFO

#include "llvm/Analysis/AliasAnalysis.h"
#include "llvm/Analysis/BasicAliasAnalysis.h"
#include "llvm/Analysis/CallGraph.h"
#include "llvm/Analysis/DependenceAnalysis.h"
#include "llvm/Analysis/GlobalsModRef.h"
#include "llvm/Analysis/LoopInfo.h"
#include "llvm/Analysis/MemoryBuiltins.h"
#include "llvm/Analysis/PhiValues.h"
#include "llvm/Analysis/PostDominators.h"
#include "llvm/Analysis/ScalarEvolution.h"
#include "llvm/Analysis/ScopedNoAliasAA.h"
#include "llvm/Analysis/TargetLibraryInfo.h"
#include "llvm/Analysis/TypeBasedAliasAnalysis.h"
#include "llvm/Analysis/AssumptionCache.h"
#include "llvm/IR/Dominators.h"
#include "llvm/Transforms/Utils/ValueMapper.h"

class AAResultsBuilder {
  std::function<const llvm::TargetLibraryInfo &(llvm::Function &F)> GetTLI;

  // BasicAA
  llvm::PhiValues PV;
  llvm::BasicAAResult BasicResult;

  llvm::ScopedNoAliasAAResult ScopedNoAliasResult;

  llvm::TypeBasedAAResult TBAAResult;

  // Globals AA
  llvm::CallGraph CG;
  llvm::GlobalsAAResult GlobalsResult;

  llvm::AAResults Result;

public:
  AAResultsBuilder(
      llvm::Module &M, llvm::Function &F,
      std::function<const llvm::TargetLibraryInfo &(llvm::Function &F)> GetTLI,
      llvm::AssumptionCache &AC, llvm::DominatorTree &DT)
      : GetTLI(GetTLI), PV(F),
        BasicResult(M.getDataLayout(), F, GetTLI(F), AC, &DT, &PV), CG(M),
        GlobalsResult(llvm::GlobalsAAResult::analyzeModule(M, GetTLI, CG)),
        Result(GetTLI(F)) {
    Result.addAAResult(ScopedNoAliasResult);
    Result.addAAResult(TBAAResult);
    Result.addAAResult(GlobalsResult);
    Result.addAAResult(BasicResult);
  }

  llvm::AAResults &getResult() { return Result; }
};

// A wrapper over llvm::DependenceInfo that works even when you modify
// instructions after the analysis is run
// TODO: figure out a better name...
class WrappedDependenceInfo {
  llvm::ValueToValueMapTy VMap;

  llvm::Module *M;
  llvm::Function *F;

  llvm::DominatorTree DT;
  llvm::LoopInfo LI;
  llvm::TargetLibraryInfoWrapperPass TLIWrapper;
  llvm::AssumptionCache AC;
  llvm::ScalarEvolution SE;
  AAResultsBuilder AABuilder;
  llvm::DependenceInfo DI;
public:
  ~WrappedDependenceInfo();
  WrappedDependenceInfo(llvm::Function &F);
  std::unique_ptr<llvm::Dependence> depends(llvm::Instruction *, llvm::Instruction *, bool);
};

#endif
