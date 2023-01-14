#ifndef VEGEN_REDUCTION_H
#define VEGEN_REDUCTION_H

#include "llvm/ADT/DenseMap.h"
#include "llvm/ADT/SmallVector.h"
#include "llvm/Analysis/IVDescriptors.h"
#include <vector>

namespace llvm {
class Value;
class raw_ostream;
}

class VLoop;
class PredicatedSSA;

struct ReductionElement {
  llvm::Value *Val;
  // Parent loops; inner loops go first
  std::vector<VLoop *> Loops;

  ReductionElement(llvm::Value *V) : Val(V) {}
};

struct Reduction {
  llvm::RecurKind Kind;
  llvm::SmallVector<ReductionElement, 4> Leaves;
  llvm::SmallPtrSet<llvm::Value *, 2> Roots;
};

class ReductionInfo {
  llvm::DenseMap<llvm::Value *, Reduction *> ValueToReductionMap;
  std::vector<std::unique_ptr<Reduction>> Reductions;
  Reduction *newReduction() {
    Reductions.emplace_back(new Reduction());
    return Reductions.back().get();
  }
  void processLoop(VLoop *);
public:
  ReductionInfo(PredicatedSSA &);
  const Reduction *getReductionFor(llvm::Value *V) const {
    return ValueToReductionMap.lookup(V);
  }
};

llvm::raw_ostream &operator<<(llvm::raw_ostream &, const Reduction &);

#endif
