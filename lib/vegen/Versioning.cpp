#include "Versioning.h"
#include "DependenceChecker.h"
#include "pssa/Inserter.h"
#include "pssa/VectorHashInfo.h"
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
    auto *Left =
        emitSCEVPred(SE.getComparePredicate(ICmpInst::ICMP_ULT, End1, R2.Base),
                     VL, C, InsertBefore, SE, DL);
    // Case 2: R2 is left of R1; i.e., End2 < Begin1.
    auto *Right =
        emitSCEVPred(SE.getComparePredicate(ICmpInst::ICMP_ULT, End2, R1.Base),
                     VL, C, InsertBefore, SE, DL);
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

  llvm::sort(ItemsToVersion, ComesBefore);

  std::map<std::vector<DepCondition>, Value *> CondSets;
  // Mapping an item to a single boolean flags indicating when it should be
  // versioned
  DenseMap<Item, Value *, ItemHashInfo> VersioningFlags;
  // Some items require multiple conditions, emit code to AND them together
  for (auto Item : ItemsToVersion) {
    auto &DepConds = VersioningMap.find(Item)->second;
    auto [It, Inserted] = CondSets.try_emplace(DepConds);
    if (!Inserted) {
      if (DepConds.size() == 1) {
        It->second = MaterializedConds.lookup(DepConds.front());
      } else {
        llvm_unreachable("not handling multiple conditions *right now*");
      }
    }
    VersioningFlags[Item] = It->second;
  }

  // Clone the instructions/loops
  DenseMap<Instruction *, Instruction *> OrigToCloneMap;
  // Join the clone and original instructions with a phi to deal with external uses
  DenseMap<Instruction *, PHINode *> VersioningPhis;
  for (auto Item : ItemsToVersion) {
    if (auto *I = Item.asInstruction()) {
      auto *I2 = I->clone();
      CloneToOrigMap[I2] = I;
      OrigToCloneMap[I] = I2;
      auto *C = VL->getInstCond(I);
      auto *Flag = VersioningFlags.lookup(Item);
      auto *Success = PSSA.getAnd(C, Flag, true);
      auto *Fail = PSSA.getAnd(C, Flag, false);
      auto It = VL->toIterator(I);
      VL->insert(I2, Fail, It);
      VL->setInstCond(I, Success);
      Inserter Insert(VL, C, std::next(It));
      Insert.createPhi({I, I2}, {Success, Fail});
    } else {
      llvm_unreachable("not versioning loops for now");
    }
  }

  // Rewrire the use of the cloned instructions
  DenseSet<PHINode *> UsedVersioningPhis;
  for (auto Item : ItemsToVersion) {
    auto *Flag = VersioningFlags.lookup(Item);
    if (auto *I = Item.asInstruction()) {
      auto *Clone = OrigToCloneMap.lookup(I);
      assert(Clone);
      for (Use &U : I->uses()) {
        auto *UserI = cast<Instruction>(U.getUser());
        auto *UserVL = PSSA.getLoopForInst(UserI);

        // Ignore if the user is a clone
        if (CloneToOrigMap.count(UserI))
          continue;

        if (UserVL == VL && VersioningFlags.lookup(UserI) == Flag) {
          // If the use comes from another instruction that gets versioned under
          // the same condition we just change that instruction (and its clone) to use (the clone of) I
          auto *ClonedUser = OrigToCloneMap.lookup(UserI);
          assert(ClonedUser);
          ClonedUser->getOperandUse(U.getOperandNo()).set(Clone);
        } else {
          // Otherwise, we should change it to use the verioning phi
          auto *Phi = VersioningPhis.lookup(I);
          U.set(Phi);
          UsedVersioningPhis.insert(Phi);
          // If the user is cloned, change the clone to also use the phi
          if (auto *ClonedUser = OrigToCloneMap.lookup(UserI))
            ClonedUser->getOperandUse(U.getOperandNo()).set(Phi);
        }
      }
    } else {
      llvm_unreachable("not versioning loops for now");
    }
  }
}
