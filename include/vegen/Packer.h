#ifndef VEGEN_PACKER_H
#define VEGEN_PACKER_H

#include "llvm/ADT/ArrayRef.h"
#include "llvm/ADT/SmallVector.h"
#include <memory>

namespace llvm {
class Value;
class DataLayout;
class LoopInfo;
class ScalarEvolution;
} // namespace llvm

class Pack;
class PredicatedSSA;

// A class that enumerates a list of packs
// that can produce a given vector
class Packer {
  PredicatedSSA &PSSA;
  const llvm::DataLayout &DL;
  llvm::ScalarEvolution &SE;
  llvm::LoopInfo &LI;

public:
  Packer(PredicatedSSA &PSSA, llvm::DataLayout &DL, llvm::ScalarEvolution &SE,
         llvm::LoopInfo &LI)
      : PSSA(PSSA), DL(DL), SE(SE), LI(LI) {}
  llvm::SmallVector<std::unique_ptr<Pack *>, 2>
      getProducers(llvm::ArrayRef<llvm::Value *>);
};
#endif
