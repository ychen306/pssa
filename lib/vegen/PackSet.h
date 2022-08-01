#ifndef VEGEN_PACKSET_H
#define VEGEN_PACKSET_H

#include "llvm/ADT/ArrayRef.h"
#include "llvm/ADT/DenseMap.h"
#include <vector>

namespace llvm {
class Instruction;
class Value;
} // namespace llvm

class Pack;

// Utility to track whether any given instructions are packed
class PackSet {
  std::vector<Pack *> Packs;
  llvm::DenseMap<llvm::Instruction *, Pack *> InstToPackMap;

public:
  PackSet() = default;
  PackSet(const PackSet &) = default;
  PackSet(PackSet &&) = default;
  PackSet &operator=(const PackSet &) = default;
  PackSet &operator=(PackSet &&) = default;

  PackSet(llvm::ArrayRef<Pack *> Packs) {
    for (auto *P : Packs)
      add(P);
  }

  void add(Pack *);
  bool isPacked(llvm::Instruction *) const;
  bool isPacked(llvm::Value *) const;
  Pack *getPackForValue(llvm::Value *) const;
  operator llvm::ArrayRef<Pack *>() const { return Packs; }
  using iterator = std::vector<Pack *>::const_iterator;
  iterator begin() const { return Packs.begin(); }
  iterator end() const { return Packs.end(); }
  unsigned size() const { return Packs.size(); }
};

#endif // VEGEN_PACKSET_H
