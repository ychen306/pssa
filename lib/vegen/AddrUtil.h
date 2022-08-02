#ifndef VEGEN_ADDR_UTIL_H
#define VEGEN_ADDR_UTIL_H

#include "llvm/ADT/ArrayRef.h"
#include "llvm/ADT/SmallVector.h"
#include "llvm/ADT/Optional.h"

namespace llvm {
class Type;
class Value;
class DataLayout;
class ScalarEvolution;
class LoopInfo;
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

template <typename InstT>
bool sortByPointers(llvm::ArrayRef<InstT *> Insts,
                    llvm::ArrayRef<llvm::Value *> Ptrs,
                    llvm::SmallVectorImpl<InstT *> &SortedInsts,
                    const llvm::DataLayout &DL, llvm::ScalarEvolution &SE,
                    llvm::LoopInfo &LI) {
  using namespace llvm;
  auto *Ty = getLoadStoreType(Insts.front());
  SmallVector<unsigned, 8> SortedIdxs;
  if (!sortPointers(Ptrs, Ty, DL, SE, LI, SortedIdxs))
    return false;

  auto GetSortedIdx = [&SortedIdxs](unsigned i) {
    if (SortedIdxs.empty())
      return i;
    return SortedIdxs[i];
  };

  SortedInsts.clear();
  SortedInsts.push_back(Insts[GetSortedIdx(0)]);
  auto *FirstPtr = Ptrs[GetSortedIdx(0)];
  for (unsigned i = 1, N = Insts.size(); i < N; i++) {
    unsigned SortedIdx = GetSortedIdx(i);
    auto *Ptr = Ptrs[SortedIdx];
    auto Diff = diffPointers(Ty, FirstPtr, Ty, Ptr, DL, SE, LI);
    assert(Diff);
    if (*Diff - i != 0)
      return false;
    SortedInsts.push_back(Insts[SortedIdx]);
  }
  return true;
}

template <typename InstT>
bool sortByPointers(llvm::ArrayRef<InstT *> Insts,
                    llvm::SmallVectorImpl<InstT *> &SortedInsts,
                    const llvm::DataLayout &DL, llvm::ScalarEvolution &SE,
                    llvm::LoopInfo &LI) {
  using namespace llvm;
  SmallVector<Value *, 8> Ptrs;
  for (auto *I : Insts) {
    auto *Ptr = getLoadStorePointerOperand(I);
    if (!Ptr)
      return false;
    Ptrs.push_back(Ptr);
  }

  return sortByPointers(Insts, Ptrs, SortedInsts, DL, SE, LI);
}

#endif // VEGEN_ADDR_UTIL_H
