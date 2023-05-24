#include "Versioning.h"
#include "DependenceChecker.h"
#include "ItemMover.h"
#include "pssa/Inserter.h"
#include "pssa/VectorHashInfo.h"
#include "llvm/Analysis/ScalarEvolution.h"
#include "llvm/Transforms/Utils/ScalarEvolutionExpander.h"

using namespace llvm;

// Expand Pred before specified item
static Value *emitSCEVPred(const SCEVPredicate *Pred, VLoop *VL,
                           const ControlCondition *C,
                           VLoop::ItemIterator InsertBefore,
                           DependenceChecker &DepChecker, ScalarEvolution &SE,
                           const DataLayout &DL) {
  // Create a dummy basic for the expander to emit code
  auto &Ctx = SE.getContext();
  auto *BB = BasicBlock::Create(Ctx, "", VL->getPSSA()->getFunction());
  // Create a dummy instruction in the block (expander's insert point requires
  // an existing instruction)
  auto *End = new FreezeInst(UndefValue::get(Type::getInt1Ty(Ctx)), "", BB);
  SCEVExpander Exp(SE, DL, "scev.pred");
  auto *Expanded = Exp.expandCodeForPredicate(Pred, End);
  End->eraseFromParent();

  // The predicate computation may use instructions that show up before
  // `InsertBefore`. In which case, we need to move those instructions before
  // `InsertBefore`
  if (InsertBefore != VL->item_end()) {
    // Find dependences of the pred computation that occur *after* InsertBefore
    SmallVector<Item> Deps;
    DependencesFinder DepFinder(Deps, *InsertBefore, VL, DepChecker);
    for (auto &I : *BB) {
      for (auto *O : I.operand_values()) {
        auto *OI = dyn_cast<Instruction>(O);
        if (!OI || OI->getParent() == BB)
          continue;
        bool FoundCycle = DepFinder.findDep(OI, true /*add OI as a dep*/);
        (void)FoundCycle;
        assert(!FoundCycle);
      }
    }
    // Move the deps before InsertBefore
    ItemMover Mover(VL);
    for (auto Dep : Deps)
      Mover.remove(Dep);
    Mover.reinsert(InsertBefore);
  }

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
                            DependenceChecker &DepChecker, ScalarEvolution &SE,
                            const DataLayout &DL) {
  if (DepCond.isDisjoint()) {
    auto [R1, R2] = DepCond.getRanges();
    auto *End1 = SE.getAddExpr(R1.Base, R1.Size);
    auto *End2 = SE.getAddExpr(R2.Base, R2.Size);
    // Case 1: R1 is left of R2; i.e., End1 < Begin2. Note that we are using the
    // inverse predicate here because SCEVExpander flips the evaluation...
    auto *Left = emitSCEVPred(
        SE.getComparePredicate(CmpInst::getInversePredicate(CmpInst::ICMP_ULT),
                               End1, R2.Base),
        VL, C, InsertBefore, DepChecker, SE, DL);
    // Case 2: R2 is left of R1; i.e., End2 < Begin1.
    auto *Right = emitSCEVPred(
        SE.getComparePredicate(CmpInst::getInversePredicate(CmpInst::ICMP_ULT),
                               End2, R1.Base),
        VL, C, InsertBefore, DepChecker, SE, DL);
    Inserter Insert(VL, C, InsertBefore);
    return Insert.CreateBinOp(Instruction::Or, Left, Right);
  }

  llvm_unreachable("not handling control conditions right now");
}

VLoop *Versioner::cloneLoop(VLoop *OrigVL, ValueToValueMapTy &VMap,
                            CallbackTy Callback) {
  ValueMapper Mapper(VMap, RF_IgnoreMissingLocals);
  DenseMap<const ControlCondition *, const ControlCondition *> RemappedConds;
  std::function<const ControlCondition *(const ControlCondition *)>
      RemapCondition = [&](auto *C) {
        if (!C)
          return C;
        if (auto It = RemappedConds.find(C); It != RemappedConds.end())
          return It->second;
        if (auto *And = dyn_cast<ConditionAnd>(C)) {
          auto *V = Mapper.mapValue(*And->Cond);
          if (!V)
            V = And->Cond;
          return RemappedConds[C] =
                     PSSA.getAnd(RemapCondition(And->Parent), V, And->IsTrue);
        }
        SmallVector<const ControlCondition *> Conds;
        for (auto *C2 : cast<ConditionOr>(C)->Conds)
          Conds.push_back(RemapCondition(C2));
        return RemappedConds[C] = PSSA.getOr(Conds);
      };

  auto *LoopCond = RemapCondition(OrigVL->getLoopCond());
  auto *VL = new VLoop(&PSSA, LoopCond, OrigVL->getBackEdgeCond(),
                       OrigVL->getParent());

  auto Clone = [&](Instruction *I) {
    auto *I2 = I->clone();
    VMap[I] = I2;
    if (auto *Orig = CloneToOrigMap.lookup(I))
      CloneToOrigMap[I2] = Orig;
    else
      CloneToOrigMap[I2] = I;
    Callback(I, I2);
    if (I->hasName())
      I2->setName(I->getName() + ".clone");
    return I2;
  };

  // Clone the mu nodes
  for (auto *Mu : OrigVL->mus()) {
    VL->addMu(cast<PHINode>(Clone(Mu)));
  }

  // Clone the loop body
  for (auto Item : OrigVL->items()) {
    if (auto *SubVL = Item.asLoop()) {
      VL->insert(cloneLoop(SubVL, VMap, Callback));
      continue;
    }

    auto *I = Item.asInstruction();
    auto *C = RemapCondition(OrigVL->getInstCond(I));
    auto *ClonedI = Clone(I);
    Mapper.remapInstruction(*ClonedI);
    if (auto *PN = dyn_cast<PHINode>(ClonedI)) {
      SmallVector<const ControlCondition *> PhiConds;
      for (auto *IncomingC : VL->getPhiConditions(PN))
        PhiConds.push_back(RemapCondition(IncomingC));
      VL->insert(PN, PhiConds, C);
    } else {
      VL->insert(ClonedI, C);
    }
  }

  // Remap the mus at last when we've cloned everything
  // (coulddn't remap when they were first cloned due to circular dep)
  for (auto *Mu : VL->mus())
    Mapper.remapInstruction(*Mu);

  // Remap the continue/back-edge cond. (couldn't do it before cloning)
  VL->setBackEdgeCond(RemapCondition(VL->getBackEdgeCond()));

  return VL;
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
                            VL->toIterator(Earliest), DepChecker, SE, DL);
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
    if (Inserted) {
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
  // Join the clone and original instructions with phis to deal with external
  // uses
  DenseSet<Instruction *> VersioningPhis;
  DenseMap<Instruction *, Instruction *> InstToVersioningPhiMap;
  // Remember the sub loops that we visit
  SmallVector<VLoop *> SubLoops;
  for (auto Item : ItemsToVersion) {
    auto It = VL->toIterator(Item);
    assert(VersioningFlags.count(Item));
    auto *Flag = VersioningFlags.lookup(Item);
    const ControlCondition *C;
    if (auto *I = Item.asInstruction())
      C = VL->getInstCond(I);
    else
      C = Item.asLoop()->getLoopCond();
    auto *Success = PSSA.getAnd(C, Flag, true);
    auto *Fail = PSSA.getAnd(C, Flag, false);

    // Create a versioning phi for the instruction I and its clone I2.
    auto CreateVersioningPhi = [&](Instruction *I, Instruction *I2) {
      if (I->hasNUsesOrMore(1)) {
        Inserter Insert(VL, C, std::next(It));
        auto *Phi = Insert.createPhi({I, I2}, {Success, Fail});
        Phi->setName(I->getName() + ".ver");
        VersioningPhis.insert(Phi);
        InstToVersioningPhiMap[I] = Phi;
      }
    };

    if (auto *I = Item.asInstruction()) {
      auto *I2 = I->clone();
      if (auto *Orig = CloneToOrigMap.lookup(I))
        CloneToOrigMap[I2] = Orig;
      else
        CloneToOrigMap[I2] = I;
      IndepTracker.markInstAsVersioned(I, I2);
      OrigToCloneMap[I] = I2;
      VL->insert(I2, Fail, It);
      VL->setInstCond(I, Success);
      CreateVersioningPhi(I, I2);
    } else {
      ValueToValueMapTy VMap;
      auto *SubVL = Item.asLoop();
      SubLoops.push_back(SubVL);
      auto *SubVL2 =
          cloneLoop(SubVL, VMap, [&](Instruction *I, Instruction *ClonedI) {
            VersioningFlags[I] = Flag;
            OrigToCloneMap[I] = ClonedI;
            CreateVersioningPhi(I, ClonedI);
            IndepTracker.markLoopInstAsVersioned(I, ClonedI, SubVL);
          });
      SubVL->setLoopCond(Success);
      SubVL2->setLoopCond(Fail);
      VL->insert(SubVL2, It);
    }
  }

  // If I it's cloned, rewrite its uses;
  DenseSet<Instruction *> UsedInstToVersioningPhiMap;
  auto RewriteUses = [&](Instruction *I, Value *Flag) {
    auto *Clone = OrigToCloneMap.lookup(I);
    assert(Clone);

    // Collect the uses of I in a vector first before modifying its uses
    SmallVector<Use *> Uses;
    for (auto &U : I->uses())
      Uses.push_back(&U);

    for (Use *U : Uses) {
      auto *UserI = cast<Instruction>(U->getUser());

      // Ignore uses by branches (no branches in predicated SSA)
      if (UserI->isTerminator())
        continue;

      // Ignore if the user is a clone
      if (CloneToOrigMap.count(UserI))
        continue;

      if (VersioningPhis.count(UserI))
        continue;

      auto *VL = PSSA.getLoopForInst(I);
      auto *UserVL = PSSA.getLoopForInst(UserI);
      if (UserVL == VL && VersioningFlags.lookup(UserI) == Flag) {
        // If the use comes from another instruction that gets versioned under
        // the same condition we just change that instruction (and its clone)
        // to use (the clone of) I
        auto *ClonedUser = OrigToCloneMap.lookup(UserI);
        assert(ClonedUser);
        ClonedUser->getOperandUse(U->getOperandNo()).set(Clone);
      } else {
        // Otherwise, we should change it to use the verioning phi
        auto *Phi = InstToVersioningPhiMap.lookup(I);
        errs() << "!!! using versioning phi for " << *I << "\n";
        assert(Phi);
        U->set(Phi);
        UsedInstToVersioningPhiMap.insert(Phi);
        // If the user is cloned, change the clone to also use the phi
        if (auto *ClonedUser = OrigToCloneMap.lookup(UserI))
          ClonedUser->getOperandUse(U->getOperandNo()).set(Phi);
      }
    }
  };

  // Rewire the use of the cloned instructions
  for (auto Item : ItemsToVersion) {
    auto *Flag = VersioningFlags.lookup(Item);
    if (auto *I = Item.asInstruction()) {
      RewriteUses(I, Flag);
    } else {
      SmallVector Worklist{Item};
      while (!Worklist.empty()) {
        auto Item = Worklist.pop_back_val();
        if (auto *VL = Item.asLoop()) {
          Worklist.append(VL->item_begin(), VL->item_end());
          for (auto *Mu : VL->mus())
            RewriteUses(Mu, Flag);
        } else {
          RewriteUses(Item.asInstruction(), Flag);
        }
      }
    }
  }

  // Remove the dead versioning phis
  for (auto *Phi : llvm::make_second_range(InstToVersioningPhiMap)) {
    if (UsedInstToVersioningPhiMap.count(Phi))
      continue;
    Phi->dropAllReferences();
    VL->erase(Phi);
  }

  for (auto *SubVL : SubLoops)
    runOnLoop(SubVL);
}

// Xs -= Ys
namespace {
template <typename T>
void setSubtraction(std::vector<T> &Xs, const DenseSet<T> &Ys) {
  std::vector<T> NewXs;
  for (auto &X : Xs)
    if (!Ys.count(X))
      NewXs.push_back(X);
  Xs = std::move(NewXs);
}
} // namespace

void removeRedundantConditions(PredicatedSSA &PSSA,
                               VersioningMapTy &VersioningMap) {
  DenseSet<DepCondition> ActiveConds;
  DenseSet<Item, ItemHashInfo> RemoveFromVersioning;
  std::function<void(VLoop *)> VisitLoop = [&](VLoop *VL) {
    // Set of conditions that are not *previously* active but are brought into
    // scope by versioning VL
    DenseSet<DepCondition> NewConds;
    if (auto It = VersioningMap.find(VL); It != VersioningMap.end()) {
      auto &DepConds = It->second;
      for (auto &DepCond : DepConds)
        if (ActiveConds.insert(DepCond).second)
          NewConds.insert(DepCond);
    }

    for (auto &Item : VL->items()) {
      if (auto *SubVL = Item.asLoop())
        VisitLoop(SubVL);

      auto It = VersioningMap.find(Item);
      if (It != VersioningMap.end()) {
        auto &DepConds = It->second;
        setSubtraction(DepConds, ActiveConds);
        // If an item's versioning conditions are all implied by its parent
        // loop's versioning conds, we don't need to version it.
        if (DepConds.empty())
          RemoveFromVersioning.insert(Item);
      }
    }

    // Deactiate the conditions brought into scope by versioning VL
    for (auto &DepCond : NewConds)
      ActiveConds.erase(DepCond);
  };
  VisitLoop(&PSSA.getTopLevel());

  for (auto &Item : RemoveFromVersioning)
    VersioningMap.erase(Item);
}
