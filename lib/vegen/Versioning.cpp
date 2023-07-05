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
                           DependenceChecker &DepChecker,
                           IndependenceTracker &IndepTracker,
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

  // The predicate computation may use instructions that show up before
  // `InsertBefore`. In which case, we need to move those instructions before
  // `InsertBefore`
  if (InsertBefore != VL->item_end()) {
    // Find dependences of the pred computation that occur *after* InsertBefore
    SmallVector<Item> Deps;
    DependencesFinder DepFinder(Deps, *InsertBefore, VL, DepChecker,
                                nullptr /*packs*/, &IndepTracker);
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

static Value *emitOverlappingChecks(const DepCondition &DepCond, VLoop *VL,
                                    const ControlCondition *C,
                                    VLoop::ItemIterator InsertBefore,
                                    DependenceChecker &DepChecker,
                                    IndependenceTracker &IndepTracker,
                                    ScalarEvolution &SE, const DataLayout &DL) {
  assert(DepCond.isOverlapping());
  auto [R1, R2] = DepCond.getRanges();
  auto *End1 = SE.getAddExpr(R1.Base, R1.Size);
  auto *End2 = SE.getAddExpr(R2.Base, R2.Size);
  // Case 1: R1 is left of R2; i.e., End1 < Begin2. Note that we are using the
  // inverse predicate here because SCEVExpander flips the evaluation...
  auto *Left = emitSCEVPred(
      SE.getComparePredicate(CmpInst::getInversePredicate(CmpInst::ICMP_ULT),
                             End1, R2.Base),
      VL, C, InsertBefore, DepChecker, IndepTracker, SE, DL);
  // Case 2: R2 is left of R1; i.e., End2 < Begin1.
  auto *Right = emitSCEVPred(
      SE.getComparePredicate(CmpInst::getInversePredicate(CmpInst::ICMP_ULT),
                             End2, R1.Base),
      VL, C, InsertBefore, DepChecker, IndepTracker, SE, DL);
  Inserter Insert(VL, C, InsertBefore);
  return Insert.CreateBinOp(Instruction::Or, Left, Right);
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
  Callback(OrigVL, VL);
  return VL;
}

// Assuming VL is the parent of items, find the greatest common condition of the
// items
static const ControlCondition *getCommonCondition(VLoop *VL,
                                                  ArrayRef<Item> Items) {
  SmallVector<const ControlCondition *> Conds;
  for (auto &It : Items) {
    if (auto *I = It.asInstruction())
      Conds.push_back(VL->getInstCond(I));
    else
      Conds.push_back(It.asLoop()->getLoopCond());
  }
  return getGreatestCommonCondition(Conds);
}

// TODO: cache this
const ControlCondition *
Versioner::strengthenCondition(const ControlCondition *C, Value *Flag,
                               bool IsTrue) {
  auto *FlagC = PSSA.getInstCond(cast<Instruction>(Flag));
  auto *C2 = PSSA.getAnd(PSSA.getAnd(FlagC, Flag, IsTrue), C);
  if (OrigConds.count(C))
    OrigConds[C2] = OrigConds[C];
  else
    OrigConds[C2] = C;
  StrengthenedConds[C2] = {Flag, IsTrue};
  return C2;
}

bool Versioner::isExclusive(const ControlCondition *C1,
                            const ControlCondition *C2) {
  auto It1 = StrengthenedConds.find(C1);
  if (It1 == StrengthenedConds.end())
    return false;
  auto It2 = StrengthenedConds.find(C2);
  if (It2 == StrengthenedConds.end())
    return false;
  auto [Flag1, IsTrue1] = It1->second;
  auto [Flag2, IsTrue2] = It2->second;
  return Flag1 == Flag2 && (IsTrue1 ^ IsTrue2);
}

namespace {
// Utility to rewrite a condition to use a new instruction
class ConditionRewriter {
  PredicatedSSA &PSSA;
  Value *Old;
  Value *New;
  DenseMap<const ControlCondition *, const ControlCondition *> RewrittenConds;
  Value *rewrite(Value *V) { return V == Old ? New : V; }
  const ControlCondition *rewrite(const ControlCondition *C) {
    if (!C)
      return C;

    if (auto *C2 = RewrittenConds.lookup(C))
      return C2;

    if (auto *And = dyn_cast<ConditionAnd>(C))
      return RewrittenConds[C] = PSSA.getAnd(rewrite(And->Parent),
                                             rewrite(And->Cond), And->IsTrue);

    auto *Or = cast<ConditionOr>(C);
    SmallVector<const ControlCondition *> Conds;
    for (auto *C2 : Or->Conds)
      Conds.push_back(rewrite(C2));
    return RewrittenConds[C] = PSSA.getOr(Conds);
  }

public:
  ConditionRewriter(PredicatedSSA &PSSA, Value *Old, Value *New)
      : PSSA(PSSA), Old(Old), New(New) {}
  // Rewrite the conditions used by Item, return whether it's rewritten
  bool operator()(Item It) {
    if (auto *VL = It.asLoop()) {
      auto *LoopCond = rewrite(VL->getLoopCond());
      auto *BackEdgeCond = rewrite(VL->getBackEdgeCond());
      bool Changed = LoopCond != VL->getLoopCond() ||
                     BackEdgeCond != VL->getBackEdgeCond();
      VL->setLoopCond(LoopCond);
      VL->setBackEdgeCond(BackEdgeCond);
      return Changed;
    }

    auto *I = It.asInstruction();
    assert(I);
    auto *VL = PSSA.getLoopForInst(I);
    bool Changed = false;
    if (auto *PN = dyn_cast<PHINode>(I)) {
      for (unsigned i = 0, N = PN->getNumOperands(); i < N; i++) {
        auto *C = VL->getPhiCondition(PN, i);
        auto *C2 = rewrite(C);
        if (C2 != C) {
          Changed = true;
          VL->setPhiCondition(PN, i, C2);
        }
      }
    }
    auto *C = VL->getInstCond(I);
    auto *C2 = rewrite(C);
    if (C2 != C) {
      Changed = true;
      VL->setInstCond(I, C2);
    }
    return Changed;
  }
};
} // namespace

void Versioner::runOnLoop(VLoop *VL, const VersioningMapTy &VersioningMap) {
  // Put the items in a vector to avoid iterator invalidation
  std::vector<Item> Items(VL->item_begin(), VL->item_end());

  // Figure out the items we need to version in this loop and their versioning
  // conditions
  DenseMap<DepCondition, std::vector<Item>> CondToItemMap;
  std::map<std::vector<DepCondition>, std::vector<Item>> CondSetToItemMap;
  SmallVector<Item> ItemsToVersion;
  for (auto Item : Items) {
    auto It = VersioningMap.find(Item);
    if (It == VersioningMap.end())
      continue;
    ItemsToVersion.push_back(Item);
    errs() << "item = " << Item << '\n';
    auto &Conds = It->second;
    for (auto &DepCond : Conds) {
      errs() << "\t cond = " << DepCond << '\n';
      CondToItemMap[DepCond].push_back(Item);
    }
    CondSetToItemMap[Conds].push_back(Item);
  }

  auto ComesBefore = [VL](const Item &It1, const Item &It2) {
    return VL->comesBefore(It1, It2);
  };

  auto &DL = PSSA.getFunction()->getParent()->getDataLayout();

  // Emit code to compute the overlapping checks
  DenseMap<DepCondition, Value *> OverlappingChecks;
  for (auto [DepCond, Items] : CondToItemMap) {
    if (!DepCond.isOverlapping())
      continue;
    // Figure out where we can compute the checks
    // (We assume prior analyses have
    // made sure that it's indeed possible to materialize DepCond before Items)
    Item Earliest = *std::min_element(Items.begin(), Items.end(), ComesBefore);
    auto *V = emitOverlappingChecks(DepCond, VL, getCommonCondition(VL, Items),
                                    VL->toIterator(Earliest), DepChecker,
                                    IndepTracker, SE, DL);
    OverlappingChecks[DepCond] = V;
  }

  llvm::sort(ItemsToVersion, ComesBefore);

  std::map<std::vector<DepCondition>, Value *> CondSets;
  // Mapping an item to a single boolean flags indicating when it should be
  // versioned
  DenseMap<Item, Value *, ItemHashInfo> VersioningFlags;
  // Some items require multiple conditions, emit code to AND them together
  for (auto It : ItemsToVersion) {
    auto &DepConds = VersioningMap.find(It)->second;
    if (!CondSets.count(DepConds)) {
      SmallVector<Value *> Checks;
      SmallVector<const ControlCondition *> Conds;
      for (auto &DepCond : DepConds) {
        if (DepCond.isOverlapping())
          Checks.push_back(OverlappingChecks.lookup(DepCond));
        else
          Conds.push_back(DepCond.getCondition());
      }

      // We need to emit code to AND all of the checks together.
      // Before we do that, we find the dependencies of the checks that occur
      // after the item It
      SmallVector<Item> Deps;
      auto &Items = CondSetToItemMap.at(DepConds);
      Item Earliest =
          *std::min_element(Items.begin(), Items.end(), ComesBefore);
      DependencesFinder DepFinder(Deps, Earliest, VL, DepChecker,
                                  nullptr /*packs*/, &IndepTracker);
      for (auto *V : Checks) {
        if (auto *Check = dyn_cast<Instruction>(V))
          DepFinder.findDep(Check, true /*add check to Deps*/);
      }
      for (auto *C : Conds)
        DepFinder.findDep(C);
      assert(!llvm::count(Deps, It) && "can't version due to circular dep.");

      // Move the dependences before Item
      auto InsertBefore = VL->toIterator(Earliest);
      ItemMover Mover(VL);
      for (auto Dep : Deps)
        Mover.remove(Dep);
      Mover.reinsert(InsertBefore);

      Inserter Insert(VL, getCommonCondition(VL, Items), InsertBefore);
      Value *NoDep = Insert.getTrue();
      for (auto *V : Checks)
        NoDep = Insert.CreateBinOp(Instruction::And, NoDep, V);
      if (!Conds.empty()) {
        NoDep = Insert.CreateBinOp(Instruction::And, NoDep,
                                   Insert.createOneHotPhi(PSSA.getOr(Conds),
                                                          Insert.getFalse(),
                                                          Insert.getTrue()));
      }
      CondSets[DepConds] = NoDep;
    }
    VersioningFlags[It] = CondSets[DepConds];
  }

  // Mapping <original item/inst> -> <cloned item/inst>
  DenseMap<Item, Item, ItemHashInfo> OrigToCloneMap;
  auto GetClonedInst = [&OrigToCloneMap](Instruction *I) -> Instruction * {
    auto It = OrigToCloneMap.find(I);
    if (It != OrigToCloneMap.end())
      return It->second.asInstruction();
    return nullptr;
  };

  // Join the clone and original instructions with phis to deal with external
  // uses
  DenseSet<Instruction *> VersioningPhis;
  DenseMap<Instruction *, Instruction *> InstToVersioningPhiMap;
  // Mapping an item to the ancestor loop that we just versioned
  DenseMap<Item, VLoop *, ItemHashInfo> ItemToLoopMap;
  SmallVector<PHINode *> VersionedPhis;
  // Remember the sub loops that we visit
  SmallVector<VLoop *> SubLoops;
  // Clone the instructions/loops
  for (auto Item : ItemsToVersion) {
    auto It = VL->toIterator(Item);
    assert(VersioningFlags.count(Item));
    auto *Flag = VersioningFlags.lookup(Item);
    const ControlCondition *C;
    if (auto *I = Item.asInstruction())
      C = VL->getInstCond(I);
    else
      C = Item.asLoop()->getLoopCond();

    auto *Success = strengthenCondition(C, Flag, true);
    auto *Fail = strengthenCondition(C, Flag, false);

    // Create a versioning phi for the instruction I and its clone I2.
    auto CreateVersioningPhi = [&](Instruction *I, Instruction *I2) {
      if (I->hasNUsesOrMore(1)) {
        Inserter Insert(VL, C, std::next(It));
        auto *Phi = Insert.createPhi({I, I2}, {Success, Fail});
        CUT.add(Phi);
        Phi->setName(I->getName() + ".ver");
        VersioningPhis.insert(Phi);
        InstToVersioningPhiMap[I] = Phi;
      }
    };

    if (auto *I = Item.asInstruction()) {
      auto *I2 = I->clone();
      if (I->hasName())
        I2->setName(I->getName() + ".clone");
      if (auto *Orig = CloneToOrigMap.lookup(I))
        CloneToOrigMap[I2] = Orig;
      else
        CloneToOrigMap[I2] = I;
      IndepTracker.markInstAsVersioned(I, I2);
      OrigToCloneMap.try_emplace(I, I2);

      if (auto *PN = dyn_cast<PHINode>(I)) {
        VersionedPhis.push_back(PN);
        SmallVector<const ControlCondition *> NewPhiConds;
        for (auto X : llvm::enumerate(VL->getPhiConditions(PN))) {
          auto *C = X.value();
          unsigned i = X.index();
          VL->setPhiCondition(PN, i, strengthenCondition(C, Flag, true));
          NewPhiConds.push_back(strengthenCondition(C, Flag, false));
        }
        VL->insert(cast<PHINode>(I2), NewPhiConds, Fail, It);
      } else {
        VL->insert(I2, Fail, It);
      }
      VL->setInstCond(I, Success);
      CreateVersioningPhi(I, I2);
    } else {
      ValueToValueMapTy VMap;
      auto *SubVL = Item.asLoop();
      SubLoops.push_back(SubVL);
      auto *SubVL2 = cloneLoop(SubVL, VMap, [&](auto It, auto ClonedIt) {
        ItemToLoopMap[It] = SubVL;
        OrigToCloneMap.try_emplace(It, ClonedIt);
        if (auto *I = It.asInstruction()) {
          auto *ClonedI = ClonedIt.asInstruction();
          assert(ClonedI);
          CreateVersioningPhi(I, ClonedI);
          IndepTracker.markLoopInstAsVersioned(I, ClonedI, SubVL);
        }
      });
      SubVL->setLoopCond(Success);
      SubVL2->setLoopCond(Fail);
      VL->insert(SubVL2, It);
    }
  }

  // Check if DepConds are implied by the versioning conditions of It
  auto CondsAreImplied = [&](ArrayRef<DepCondition> DepConds, Item It) -> bool {
    // If It is from a  from a loop that we just versioned, we are really asking
    // if VL's versioning is implied
    if (auto *VL = ItemToLoopMap.lookup(It))
      It = VL;
    // Not implied if It is never versioned
    if (!VersioningMap.count(It))
      return false;
    auto CondsOfIt = VersioningMap.find(It)->second;
    return llvm::all_of(DepConds, [&](auto &DepCond) {
      return llvm::count(CondsOfIt, DepCond);
    });
  };

  // If I it's cloned, rewrite its uses;
  // FIXME: rename this to `UsedVersioningPhis'
  DenseSet<Instruction *> UsedInstToVersioningPhiMap;
  auto RewriteUses = [&](Instruction *I, ArrayRef<DepCondition> DepConds) {
    auto *Clone = GetClonedInst(I);
    assert(Clone);

    // Collect the uses of I in a vector first before modifying its uses
    SmallVector<Use *> Uses;
    for (auto &U : I->uses())
      Uses.push_back(&U);

    for (Use *U : Uses) {
      auto *UserI = cast<Instruction>(U->getUser());

      // Ignore uses by branches (no branches in predicated SSA)
      if (isa<BranchInst>(UserI))
        continue;

      // Ignore if the user is a clone
      if (CloneToOrigMap.count(UserI))
        continue;

      if (VersioningPhis.count(UserI))
        continue;

      auto *VL = PSSA.getLoopForInst(I);
      auto *UserVL = PSSA.getLoopForInst(UserI);
      // FIXME: instead of checking for equality, we *have* to check that the
      // versioning of UserI is *implied by* the versioning of I (i.e., <=
      // instead of ==).
      if (VL->contains(UserVL) && CondsAreImplied(DepConds, UserI)) {
        // If the use comes from another instruction that gets versioned under
        // the same condition we just change that instruction (and its clone)
        // to use (the clone of) I
        auto *ClonedUser = GetClonedInst(UserI);
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
        if (auto *ClonedUser = GetClonedInst(UserI))
          ClonedUser->getOperandUse(U->getOperandNo()).set(Phi);
      }
    }

    // Collect items that use any condition C such that C uses I
    ConditionUserTracker::UserSet CondUsers;
    CUT.getUsers(CondUsers, I);

    ConditionRewriter RewriteWithPhi(PSSA, I, InstToVersioningPhiMap.lookup(I));
    ConditionRewriter RewriteWithClone(PSSA, I, Clone);
    bool UsedPhi = false;
    for (auto It : CondUsers) {
      if (auto *UserVL = It.asLoop()) {
        if (VL->contains(UserVL->getParent()) &&
            CondsAreImplied(DepConds, UserVL)) {
          assert(OrigToCloneMap.count(UserVL));
          assert(OrigToCloneMap.count(UserVL));
          RewriteWithClone(OrigToCloneMap.find(UserVL)->second.asLoop());
        } else {
          UsedPhi |= RewriteWithPhi(UserVL);
          if (OrigToCloneMap.count(UserVL))
            UsedPhi |=
                RewriteWithPhi(OrigToCloneMap.find(UserVL)->second.asLoop());
        }
        continue;
      }

      auto *UserI = It.asInstruction();
      assert(UserI);
      auto *UserVL = PSSA.getLoopForInst(UserI);
      if (VL->contains(UserVL) && CondsAreImplied(DepConds, UserI)) {
        assert(OrigToCloneMap.count(UserI));
        RewriteWithClone(GetClonedInst(UserI));
      } else {
        UsedPhi |= RewriteWithPhi(UserI);
        if (auto *ClonedUser = GetClonedInst(UserI))
          UsedPhi |= RewriteWithPhi(ClonedUser);
      }
    }

    if (UsedPhi)
      UsedInstToVersioningPhiMap.insert(InstToVersioningPhiMap.lookup(I));
  };

  // Rewire the use of the cloned instructions
  for (auto Item : ItemsToVersion) {
    auto &DepConds = VersioningMap.find(Item)->second;
    if (auto *I = Item.asInstruction()) {
      RewriteUses(I, DepConds);
    } else {
      SmallVector Worklist{Item};
      while (!Worklist.empty()) {
        auto Item = Worklist.pop_back_val();
        if (auto *VL = Item.asLoop()) {
          Worklist.append(VL->item_begin(), VL->item_end());
          for (auto *Mu : VL->mus())
            RewriteUses(Mu, DepConds);
        } else {
          RewriteUses(Item.asInstruction(), DepConds);
        }
      }
    }
  }

  // Nuke the dead incoming operands of versioned phis
  for (auto *PN : VersionedPhis) {
    assert(VersioningMap.count(PN));
    ArrayRef<DepCondition> DepConds = VersioningMap.find(PN)->second;
    for (auto X : llvm::enumerate(VL->getPhiConditions(PN))) {
      auto *C = getOriginalCondition(X.value());
      assert(C);
      unsigned i = X.index();
      // If the incoming condition is implied by the versioning condition,
      // replace the incoming value with undef (because, by versioning, we
      // have ensured that the condition is always false)
      if (llvm::any_of(DepConds, [C](auto &DepCond) {
            return isImplied(C, DepCond.getCondition());
          }))
        PN->setOperand(i, UndefValue::get(PN->getType()));
    }
  }

  // Remove the dead versioning phis
  for (auto [I, Phi] : InstToVersioningPhiMap) {
    if (UsedInstToVersioningPhiMap.count(Phi)) {
      VersioningPhisMap[I].push_back(Phi);
      continue;
    }
    Phi->dropAllReferences();
    VL->erase(Phi);
  }

  for (auto *SubVL : SubLoops)
    runOnLoop(SubVL, VersioningMap);
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

// If an instruction/loop's has a versioning condition that's implied by its
// parent loop's versioning condition, remove it
static void removeRedundantConditions(PredicatedSSA &PSSA,
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

void Versioner::run(ArrayRef<Versioning *> Versionings,
                    const EquivalenceClasses<Item> &EC,
                    const DenseMap<DepEdge, DenseSet<DepEdge>> &InterLoopDeps,
                    bool RemoveRedundantConditions) {
  VersioningMapTy VersioningMap;
  auto MarkForVersioning = [&](const DepNode &N, ArrayRef<DepCondition> Conds) {
    if (auto *I = N.asInstruction())
      append_range(VersioningMap[I], Conds);
    else if (auto *VL = N.asLoop())
      append_range(VersioningMap[VL], Conds);
  };

  // Populate the versioning conditions for each item and figure the deps that
  // we need to ignore.
  DenseSet<DepEdge> AliasedEdgesToIgnore, DepEdgesToIgnore;
  for (auto *Ver : Versionings) {
    assert(!Ver->CutEdges.empty());

    for (auto [Edge, DepConds] : Ver->CutEdges) {
      auto [Src, Dst] = Edge;
      auto *SrcI = Src.asInstruction();
      auto *DstI = Dst.asInstruction();

      if (SrcI && DstI &&
          (DepConds.size() == 1 && DepConds.front().isOverlapping()))
        AliasedEdgesToIgnore.insert(Edge);
      else
        DepEdgesToIgnore.insert(Edge);

      MarkForVersioning(Src, DepConds);
      MarkForVersioning(Dst, DepConds);
      for (auto Node : Ver->Nodes)
        MarkForVersioning(Node, DepConds);
      if (auto It = InterLoopDeps.find(Edge); It != InterLoopDeps.end()) {
        for (auto &Edge : It->second)
          AliasedEdgesToIgnore.insert(Edge);
      }
    }
  }

  IndepTracker.ignoreDependences(DepEdgesToIgnore, AliasedEdgesToIgnore,
                                 InterLoopDeps);

  ConditionSetTracker CST(SE, PSSA);
  // Visit all of the conditions for coalescing
  for (auto &DepConds : make_second_range(VersioningMap))
    for (auto &DepCond : DepConds)
      CST.add(DepCond);

  // Merge the conditions for items in the same equivalence classes
  for (auto I = EC.begin(), E = EC.end(); I != E; ++I) {
    if (!I->isLeader())
      continue;
    auto Items = llvm::make_range(EC.member_begin(I), EC.member_end());
    DenseSet<DepCondition> CondSet;
    for (auto &It : Items) {
      if (!VersioningMap.count(It))
        continue;
      auto &DepConds = VersioningMap[It];
      CondSet.insert(DepConds.begin(), DepConds.end());
    }
    std::vector<DepCondition> MergedConds(CondSet.begin(), CondSet.end());
    if (!MergedConds.empty()) {
      for (auto &It : Items)
        VersioningMap[It] = MergedConds;
    }
  }

  // Go over the versioning map and deduplicate the conditions (after
  // coalescing)
  for (auto &Conds : make_second_range(VersioningMap)) {
    std::vector<DepCondition> NewConds;
    DenseSet<DepCondition> Inserted;
    for (const auto &DepCond : Conds) {
      auto NewCond = CST.getCoalescedCondition(DepCond);
      if (Inserted.insert(NewCond).second)
        NewConds.push_back(NewCond);
    }
    // Fix a canonical order for the conditions
    llvm::sort(NewConds);
    Conds = std::move(NewConds);
  }

  if (RemoveRedundantConditions)
    removeRedundantConditions(PSSA, VersioningMap);

  runOnLoop(&PSSA.getTopLevel(), VersioningMap);
}
