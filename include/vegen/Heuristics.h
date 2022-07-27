#ifndef VEGEN_HEURISTICS_H
#define VEGEN_HEURISTICS_H

namespace llvm {
class DataLayout;
class LoopInfo;
class ScalarEvolution;
} // namespace llvm

class Pack;

std::vector<Pack *> packBottomUp(PredicatedSSA &PSSA, llvm::DataLayout &DL,
                                 llvm::ScalarEvolution &SE, llvm::LoopInfo &LI);

#endif // VEGEN_HEURISTICS_H
