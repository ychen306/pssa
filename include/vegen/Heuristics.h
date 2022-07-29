#ifndef VEGEN_HEURISTICS_H
#define VEGEN_HEURISTICS_H

#include <memory> // std::unique_ptr

namespace llvm {
class DataLayout;
class LoopInfo;
class ScalarEvolution;
class TargetTransformInfo;
} // namespace llvm

class Pack;
class PredicatedSSA;

std::vector<std::unique_ptr<Pack>>
packBottomUp(PredicatedSSA &, const llvm::DataLayout &, llvm::ScalarEvolution &,
             llvm::LoopInfo &, llvm::TargetTransformInfo &);

#endif // VEGEN_HEURISTICS_H
