#include "vegen/Packer.h"
#include "vegen/Pack.h"
#include "llvm/IR/Instructions.h"

using namespace llvm;

SmallVector<Pack *, 2> Packer::getProducers(ArrayRef<Value *> Values) {
  SmallVector<Instruction *, 8> Insts;
  for (auto *V : Values) {
    auto *I = dyn_cast_or_null<Instruction>(V);
    if (!I)
      return {};
    Insts.push_back(I);
  }

  if (auto *P = PHIPack::tryPack(Insts, PSSA))
    return {P};
  if (auto *P = BlendPack::tryPack(Insts, PSSA))
    return {P};
  if (auto *P = MuPack::tryPack(Insts, PSSA))
    return {P};
  if (auto *P = GEPPack::tryPack(Insts))
    return {P};
  if (auto *P = LoadPack::tryPack(Insts, DL, SE, LI, PSSA))
    return {P};
  if (auto P = GatherPack::tryPack(Insts, PSSA))
    return {P};

  SmallVector<Pack *, 2> Producers;
  if (auto *P = SIMDPack::tryPack(Insts))
    Producers.push_back(P);

  return Producers;
}
