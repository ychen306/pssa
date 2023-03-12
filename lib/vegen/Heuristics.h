#ifndef VEGEN_HEURISTICS_H
#define VEGEN_HEURISTICS_H

#include "llvm/ADT/ArrayRef.h"
#include <memory> // std::unique_ptr

namespace llvm {
class DataLayout;
class LoopInfo;
class ScalarEvolution;
class DependenceInfo;
class TargetTransformInfo;
class AAResults;
} // namespace llvm

class Pack;
class PredicatedSSA;
class LooseInstructionTable;
class ReductionInfo;
class Matcher;
class InstructionDescriptor;

std::vector<Pack *> packBottomUp(llvm::ArrayRef<InstructionDescriptor> InstPool,
                                 PredicatedSSA &, ReductionInfo &,
                                 LooseInstructionTable &, Matcher &,
                                 const llvm::DataLayout &,
                                 llvm::ScalarEvolution &, llvm::LoopInfo &,
                                 llvm::AAResults &, llvm::DependenceInfo &,
                                 llvm::TargetTransformInfo &);

// Decompose a list of reductions with reducers and pack those instructions
Pack *decomposeAndPack(PredicatedSSA &PSSA, ReductionInfo &RI,
                       LooseInstructionTable &LIT,
                       llvm::ArrayRef<llvm::Instruction *> Insts);

#endif // VEGEN_HEURISTICS_H
