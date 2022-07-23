#ifndef PSSA_VECTORHASHINFO_H
#define PSSA_VECTORHASHINFO_H

#include "llvm/ADT/DenseMapInfo.h"
#include "llvm/ADT/Hashing.h"

template <typename VectorType> struct VectorHashInfo {
  using ElementType = typename VectorType::value_type;
  static VectorType getEmptyKey() {
    return {llvm::DenseMapInfo<ElementType>::getEmptyKey()};
  }
  static VectorType getTombstoneKey() {
    return {llvm::DenseMapInfo<ElementType>::getTombstoneKey()};
  }
  static unsigned getHashValue(const VectorType &V) {
    return static_cast<unsigned>(llvm::hash_combine_range(V.begin(), V.end()));
  }
  static bool isEqual(const VectorType &LHS, const VectorType &RHS) {
    return LHS == RHS;
  }
};

#endif // PSSA_VECTORHASHINFO_H
