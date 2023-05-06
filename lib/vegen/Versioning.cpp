#include "Versioning.h"
#include "DependenceChecker.h"
#include "pssa/Inserter.h"
#include "llvm/Analysis/ScalarEvolution.h"
#include "llvm/Transforms/Utils/ScalarEvolutionExpander.h"

using namespace llvm;

// Expand Pred before specified item
static Value *emitSCEVPred(const SCEVPredicate *Pred, VLoop *VL,
                           const ControlCondition *C,
                           VLoop::ItemIterator InsertBefore,
                           ScalarEvolution &SE, const DataLayout &DL) {
  // Create a dummy basic for the expander to emit code
  auto &Ctx = SE.getContext();
  auto *BB = BasicBlock::Create(Ctx, "", VL->getPSSA()->getFunction());
  // Create a dummy instruction in the block (expander's insert point requires
  // an existing instruction)
  auto *End = new FreezeInst(UndefValue::get(Type::getInt1Ty(Ctx)), "", BB);
  SCEVExpander Exp(SE, DL, "scev.pred");
  auto *Expanded = Exp.expandCodeForPredicate(Pred, End);
  End->eraseFromParent();
  // Move the expanded instruction into the PSSA
  SmallVector<Instruction *> Insts;
  for (auto &I : *BB) {
    VL->insert(&I, C, InsertBefore);
    Insts.push_back(&I);
  }
  for (auto *I : Insts)
    I->removeFromParent();
  BB->eraseFromParent();
  return Expanded;
}

static Value *emitCondition(const DepCondition &DepCond, VLoop *VL,
                            const ControlCondition *C,
                            VLoop::ItemIterator InsertBefore,
                            ScalarEvolution &SE, const DataLayout &DL) {
  if (DepCond.isDisjoint()) {
    auto [R1, R2] = DepCond.getRanges();
    auto *End1 = SE.getAddExpr(R1.Base, R1.Size);
    auto *End2 = SE.getAddExpr(R2.Base, R2.Size);
    // Case 1: R1 is left of R2; i.e., End1 < Begin2.
    auto *Left = emitSCEVPred(SE.getComparePredicate(ICmpInst::ICMP_ULT, End1, R2.Base), VL, C, InsertBefore, SE, DL);
    // Case 2: R2 is left of R1; i.e., End2 < Begin1.
    auto *Right = emitSCEVPred(SE.getComparePredicate(ICmpInst::ICMP_ULT, End2, R1.Base), VL, C, InsertBefore, SE, DL);
    Inserter Insert(VL, C, InsertBefore);
    return Insert.CreateBinOp(Instruction::Or, Left, Right);
  }

  llvm_unreachable("not handling control conditions right now");
}

void Versioner::runOnLoop(VLoop *VL) {
  // Put the items in a vector to avoid iterator invalidation
  std::vector<Item> Items(VL->item_begin(), VL->item_end());

  // Figure out the items we need to version in this loop and their versioning
  // conditions
  DenseMap<DepCondition, std::vector<Item>> CondToItemMap;
  SmallVector<Item> ItemsToVersion;
  for (auto Item : Items) {
    auto It = VersioningMap.find(Item);
    if (It == VersioningMap.end())
      continue;
    ItemsToVersion.push_back(Item);
    for (auto &DepCond : It->second)
      CondToItemMap[DepCond].push_back(Item);
  }

  auto GetConditionForItem = [VL](const Item &It) {
    if (auto *I = It.asInstruction())
      return VL->getInstCond(I);
    return It.asLoop()->getLoopCond();
  };
  auto ComesBefore = [VL](const Item &It1, const Item &It2) {
    return VL->comesBefore(It1, It2);
  };

  auto &DL = PSSA.getFunction()->getParent()->getDataLayout();

  // Emit code to evaluate the versioning condition (if they are not evaluated
  // already)
  DenseMap<DepCondition, Value *> MaterializedConds;
  for (auto [DepCond, Items] : CondToItemMap) {
    // Figure out where we can compute the condition.
    // (We assume prior analyses have
    // made sure that it's indeed possible to materialize DepCond before Items)
    SmallVector<const ControlCondition *> Conds;
    for (auto Item : Items)
      Conds.push_back(GetConditionForItem(Item));
    Item Earliest = *std::min_element(Items.begin(), Items.end(), ComesBefore);
    auto *V = emitCondition(DepCond, VL, getGreatestCommonCondition(Conds),
                            VL->toIterator(Earliest), SE, DL);
    MaterializedConds[DepCond] = V;
  }

  // Do the actual versioning
  for (auto Item : ItemsToVersion) {
    ArrayRef<DepCondition> DepConds = VersioningMap.find(Item)->second;
  }
}
