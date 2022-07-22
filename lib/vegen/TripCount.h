#ifndef VEGEN_TRIPCOUNT_H
#define VEGEN_TRIPCOUNT_H

namespace {
class Loop;
class ScalarEvolution;
} // namespace

bool haveIdenticalTripCounts(const llvm::Loop *, const llvm::Loop *,
                             llvm::ScalarEvolution &);

#endif
