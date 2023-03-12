#ifndef VEGEN_HEURISTICS_H
#define VEGEN_HEURISTICS_H

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

std::vector<Pack *> packBottomUp(PredicatedSSA &, const llvm::DataLayout &,
                                 llvm::ScalarEvolution &, llvm::LoopInfo &,
                                 llvm::AAResults &, llvm::DependenceInfo &,
                                 llvm::TargetTransformInfo &);

#endif // VEGEN_HEURISTICS_H
