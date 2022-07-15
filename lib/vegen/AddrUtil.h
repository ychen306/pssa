#ifndef VEGEN_ADDR_UTIL_H
#define VEGEN_ADDR_UTIL_H

#include "llvm/ADT/ArrayRef.h"
#include "llvm/ADT/Optional.h"

namespace llvm {
class Type;
class Value;
class DataLayout;
class ScalarEvolution;
class LoopInfo;
template <typename T> class SmallVectorImpl;
} // namespace llvm

// Re-implementations of llvm::getPointersDiff and llvm::sortPtrAccesses
// to support pointers coming from different loop nests (which we may fuse
// later)

llvm::Optional<int> diffPointers(llvm::Type *ElemTyA, llvm::Value *PtrA,
                                 llvm::Type *ElemTyB, llvm::Value *PtrB,
                                 const llvm::DataLayout &DL,
                                 llvm::ScalarEvolution &SE, llvm::LoopInfo &LI,
                                 bool StrictCheck = false,
                                 bool CheckType = true);

bool sortPointers(llvm::ArrayRef<llvm::Value *> VL, llvm::Type *ElemTy,
                  const llvm::DataLayout &DL, llvm::ScalarEvolution &SE,
                  llvm::LoopInfo &LI,
                  llvm::SmallVectorImpl<unsigned> &SortedIndices);

#endif // VEGEN_ADDR_UTIL_H
