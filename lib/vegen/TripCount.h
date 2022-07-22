#ifndef VEGEN_TRIPCOUNT_H
#define VEGEN_TRIPCOUNT_H

namespace llvm {
class Loop;
class ScalarEvolution;
} // namespace llvm

bool haveIdenticalTripCounts(const llvm::Loop *, const llvm::Loop *,
                             llvm::ScalarEvolution &);

#endif
