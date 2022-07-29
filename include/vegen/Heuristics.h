#ifndef VEGEN_HEURISTICS_H
#define VEGEN_HEURISTICS_H

#include <memory> // std::unique_ptr

namespace llvm {
class DataLayout;
class LoopInfo;
class ScalarEvolution;
} // namespace llvm

class Pack;
class PredicatedSSA;

std::vector<std::unique_ptr<Pack>> packBottomUp(PredicatedSSA &PSSA,
                                                const llvm::DataLayout &DL,
                                                llvm::ScalarEvolution &SE,
                                                llvm::LoopInfo &LI);

#endif // VEGEN_HEURISTICS_H
