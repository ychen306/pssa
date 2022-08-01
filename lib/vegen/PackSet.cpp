#include "PackSet.h"
#include "vegen/Pack.h"
#include "llvm/IR/Instruction.h"

using namespace llvm;

void PackSet::add(Pack *P) {
  // Map the packed instruction back to the pack
  for (auto *I : P->values()) {
    if (I)
      InstToPackMap[I] = P;
  }
  Packs.push_back(P);
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
