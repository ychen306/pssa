#include "DependenceChecker.h"
#include "pssa/PSSA.h"
#include "llvm/Analysis/DependenceAnalysis.h"

using namespace llvm;

bool mayReadOrWriteMemory(Instruction *I) {
  return isa<ReturnInst>(I) || I->mayReadOrWriteMemory();
}

bool mayReadOrWriteMemory(const Item &It) {
  if (auto *I = It.asInstruction())
    return mayReadOrWriteMemory(I);
  return true;
}

void DependenceChecker::processLoop(VLoop *VL) {
  if (Summaries.count(VL))
    return;

  auto &Summary = Summaries[VL];
  for (auto &It : VL->items()) {
    if (auto *SubVL = It.asLoop()) {
      processLoop(SubVL);
      auto &SubSummary = Summaries[SubVL];
      Summary.MemoryInsts.append(SubSummary.MemoryInsts);
      // FIXME: also consider control deps
      for (auto *I : SubSummary.LiveIns)
        if (!VL->contains(I))
          Summary.LiveIns.push_back(I);
    } else {
      assert(It.asInstruction());
      for (Value *O : It.asInstruction()->operand_values()) {
        auto *OI = dyn_cast<Instruction>(O);
        if (OI && !VL->contains(OI))
          Summary.LiveIns.push_back(OI);
      }
    }

    for (auto *Mu : VL->mus())
      if (auto *I = dyn_cast<Instruction>(Mu->getIncomingValue(0)))
        Summary.LiveIns.push_back(I);
  }
}

ArrayRef<Instruction *> DependenceChecker::getMemoryInsts(VLoop *VL) {
  processLoop(VL);
  assert(Summaries.count(VL));
  return Summaries[VL].MemoryInsts;
}

bool DependenceChecker::depends(const Item &It1, const Item &It2) {
  auto *I1 = It1.asInstruction();
  auto *I2 = It2.asInstruction();
  auto *VL1 = It1.asLoop();
  auto *VL2 = It2.asLoop();
  if (I1 && I2) {
    // TODO: directly query AA for better precision,
    // if I1 and I2 are in the same loop?
    auto Dep = DI.depends(I1, I2, true);
    return Dep && Dep->isOrdered();
  }

  assert((I1 && VL2) || (VL1 && I2));

  // Collapse the two cases.
  // We just want to find out if there's any ordered (non-input)
  // dependences between the instruction and loop.
  if (VL1 && I2) {
    I1 = I2;
    VL2 = VL1;
  }
  assert(I1 && VL2);

  // Don't bother if I1 doesn't touch memory
  if (!mayReadOrWriteMemory(I1))
    return false;

  // Figure out the memory instructions in VL2
  processLoop(VL2);

  return any_of(Summaries[VL2].MemoryInsts, [&](Instruction *I) {
    auto Dep = DI.depends(I1, I, true);
    return Dep && Dep->isOrdered();
  });
}

ArrayRef<Instruction *> DependenceChecker::getLiveIns(VLoop *VL) {
  processLoop(VL);
  assert(Summaries.count(VL));
  return Summaries[VL].LiveIns;
}
