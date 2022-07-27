#ifndef PSSA_VECTORHASHINFO_H
#define PSSA_VECTORHASHINFO_H

#include "llvm/ADT/DenseMapInfo.h"
#include "llvm/ADT/Hashing.h"
#include "llvm/ADT/ArrayRef.h"

template <typename VectorType> struct VectorHashInfo {
  using ElementType = typename VectorType::value_type;
  using ArrayRef = typename llvm::ArrayRef<ElementType>;
  static VectorType getEmptyKey() {
    return {llvm::DenseMapInfo<ElementType>::getEmptyKey()};
  }
  static VectorType getTombstoneKey() {
    return {llvm::DenseMapInfo<ElementType>::getTombstoneKey()};
  }
  static unsigned getHashValue(ArrayRef V) {
    return static_cast<unsigned>(llvm::hash_combine_range(V.begin(), V.end()));
  }
  static bool isEqual(ArrayRef LHS, ArrayRef RHS) {
    return LHS.equals(RHS);
  }
};

#endif // PSSA_VECTORHASHINFO_H
