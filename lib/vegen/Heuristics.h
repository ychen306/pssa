#ifndef VEGEN_HEURISTICS_H
#define VEGEN_HEURISTICS_H

#include "DependenceChecker.h"
#include "llvm/ADT/ArrayRef.h"
#include <memory> // std::unique_ptr

namespace llvm {
class DataLayout;
class LoopInfo;
class ScalarEvolution;
class TargetTransformInfo;
} // namespace llvm

class Pack;
class PredicatedSSA;
class LooseInstructionTable;
class ReductionInfo;
class Matcher;
class InstructionDescriptor;
class CachingAA;
struct VersioningPlan;

std::vector<Pack *> packBottomUp(llvm::ArrayRef<InstructionDescriptor> InstPool,
                                 VersioningPlan &VerPlan, PredicatedSSA &,
                                 ReductionInfo &, LooseInstructionTable &,
                                 Matcher &, const llvm::DataLayout &,
                                 llvm::ScalarEvolution &, llvm::DominatorTree &,
                                 llvm::LoopInfo &, CachingAA &,
                                 WrappedDependenceInfo &,
                                 llvm::TargetTransformInfo &);

// If we generate versioning phis for a packed value,
// we try to also pack those versioning phis
std::vector<Pack *> packVersioningPhis(llvm::ArrayRef<Pack *>,
                                       DependenceChecker &DepChecker,
                                       const Versioner &, PredicatedSSA &PSSA);

// Decompose a list of reductions with reducers and pack those instructions
Pack *decomposeAndPack(PredicatedSSA &PSSA, ReductionInfo &RI,
                       LooseInstructionTable &LIT,
                       llvm::ArrayRef<llvm::Instruction *> Insts);

#endif // VEGEN_HEURISTICS_H
