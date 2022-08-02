#include "DependenceChecker.h"
#include "PackSet.h"
#include "pssa/PSSA.h"
#include "vegen/Pack.h"
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

void findInBetweenDeps(SmallVectorImpl<Item> &Deps, ArrayRef<Item> Items,
                       VLoop *VL, PredicatedSSA &PSSA,
                       DependenceChecker &DepChecker, const PackSet *Packs) {
  auto ComesBefore = [VL](const Item &It1, const Item &It2) {
    return VL->comesBefore(It1, It2);
  };

  assert(all_of(Items,
                [&](const Item &It) { return PSSA.getLoopForItem(It) == VL; }));
  Item Earliest = *std::min_element(Items.begin(), Items.end(), ComesBefore);

  DenseSet<Item, ItemHashInfo> Visited;
  DenseSet<const ControlCondition *> VisitedConds;
  // Do DFS on a given item
  std::function<void(Item)> Visit;
  auto VisitValue = [&Visit](Value *V) {
    if (auto *I = dyn_cast<Instruction>(V))
      Visit(I);
  };
  std::function<void(const ControlCondition *)> VisitCond =
      [&](const ControlCondition *C) {
        if (!C)
          return;
        if (!VisitedConds.insert(C).second)
          return;

        if (auto *And = dyn_cast<ConditionAnd>(C)) {
          VisitCond(And->Parent);
          VisitValue(And->Cond);
          return;
        }

        auto *Or = cast<ConditionOr>(C);
        for_each(Or->Conds, VisitCond);
      };

  // FIXME: check circular dependencies
  Visit = [&](Item It) {
    auto *ParentVL = PSSA.getLoopForItem(It);
    if (!VL->contains(It))
      return;

    while (ParentVL != VL) {
      It = ParentVL;
      ParentVL = ParentVL->getParent();
    }

    // Only consider items that come after Earliest
    if (!VL->contains(It) || !VL->comesBefore(Earliest, It))
      return;
    if (!Visited.insert(It).second)
      return;

    SmallVector<Item, 8> Coupled;
    // Process (register) data and control dependences
    if (auto *I = It.asInstruction()) {
      Pack *P = Packs ? Packs->getPackForValue(I) : nullptr;
      // If I is packed with other instructions,
      // we also need to check their dependences
      ArrayRef<Instruction *> Insts = P ? P->values() : I;
      for (auto *I : Insts) {
        for_each(I->operand_values(), VisitValue);
        VisitCond(VL->getInstCond(I));
        Coupled.emplace_back(I);
      }
    } else {
      Coupled = {It};
      auto *SubVL = It.asLoop();
      for_each(DepChecker.getLiveIns(SubVL), VisitValue);
      VisitCond(SubVL->getLoopCond());
    }

    // Scan the memory dependences between Earliest and It
    if (mayReadOrWriteMemory(It)) {
      for (auto I = std::next(VL->toIterator(Earliest)), E = VL->toIterator(It);
           I != E; ++I) {
        for (auto &It2 : Coupled)
          if (DepChecker.depends(*I, It2))
            Visit(*I);
      }
    }

    Deps.push_back(It);
  };

  // Do DFS to find out dependences of the Items that appear after Earliest
  for_each(Items, Visit);
}
