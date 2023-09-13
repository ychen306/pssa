#include "PackSet.h"
#include "vegen/Pack.h"
#include "llvm/IR/Instruction.h"
#include "llvm/Support/raw_ostream.h"

using namespace llvm;

void PackSet::add(Pack *P) {
  // Map the packed instruction back to the pack
  for (auto *I : P->values()) {
    if (I) {
      assert(!InstToPackMap.count(I));
      InstToPackMap[I] = P;
    }
  }
  PackIndex[P] = Packs.size();
  Packs.push_back(P);
}

void PackSet::erase(Pack *P) {
  for (auto *I : P->values()) {
    if (I) {
      assert(InstToPackMap.count(I));
      InstToPackMap.erase(I); 
    }
  }
  assert(PackIndex.count(P));
  unsigned i = PackIndex.lookup(P);
  PackIndex[Packs.back()] = i;
  std::swap(Packs[i], Packs.back());
  Packs.pop_back();
  PackIndex.erase(P);
}

Pack *PackSet::getPackForValue(Value *V) const {
  if (auto *I = dyn_cast<Instruction>(V))
    return InstToPackMap.lookup(I);
  return nullptr;
}

bool PackSet::isPacked(Instruction *I) const { return InstToPackMap.count(I); }

bool PackSet::isPacked(Value *V) const {
  auto *I = dyn_cast<Instruction>(V);
  return I && isPacked(I);
}
