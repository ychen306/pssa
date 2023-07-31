#include "Versioning.h"
#include "DependenceChecker.h"
#include "ItemMover.h"
#include "pssa/Inserter.h"
#include "pssa/VectorHashInfo.h"
#include "llvm/Analysis/LoopInfo.h"
#include "llvm/Analysis/ScalarEvolution.h"
#include "llvm/Transforms/Utils/ScalarEvolutionExpander.h"

using namespace llvm;

// Add a canonical induction variable for VL.
// In an ideal world we only need to do this in PredicatedSSA.
// We also need to insert these instructions in LLVM IR because SCEVExpander
// still uses it.
static void addIndvar(Loop *L, PredicatedSSA &PSSA) {
  auto *VL = PSSA.getVLoop(L);
  assert(VL);
  auto &DL = PSSA.getFunction()->getParent()->getDataLayout();
  auto *Ty = DL.getIndexType(PointerType::get(PSSA.getContext(), 0));
  if (L->getCanonicalInductionVariable() &&
      L->getCanonicalInductionVariable()->getType()->getScalarSizeInBits() >=
          Ty->getScalarSizeInBits())
    return;

  auto *Header = L->getHeader();
  auto *Preheader = L->getLoopPreheader();
  auto *Latch = L->getLoopLatch();
  assert(Preheader && Latch && "loop should have been canonicalized");
  auto *Indvar = PHINode::Create(Ty, 2, "indvar", &Header->front());
  auto *Add = BinaryOperator::CreateAdd(Indvar, ConstantInt::get(Ty, 1),
                                        "indvar.next", Latch->getTerminator());
  // By our convention, the first incoming must be the init value
  Indvar->addIncoming(Constant::getNullValue(Ty), Preheader);
  Indvar->addIncoming(Add, Latch);
  VL->addMu(Indvar);
  VL->insert(Add, nullptr);
  assert(L->getCanonicalInductionVariable() &&
         L->getCanonicalInductionVariable()->getType()->getScalarSizeInBits() >=
             Ty->getScalarSizeInBits() &&
         "failed to create indvar");
}

namespace {
class AddRecLoopCollector : public SCEVRewriteVisitor<AddRecLoopCollector> {
  DenseSet<Loop *> &Loops;

public:
  const SCEV *visitAddRecExpr(const SCEVAddRecExpr *AddRec) {
    Loops.insert(const_cast<Loop *>(AddRec->getLoop()));
    return AddRec;
  }
  AddRecLoopCollector(DenseSet<Loop *> &Loops, ScalarEvolution &SE)
      : SCEVRewriteVisitor<AddRecLoopCollector>(SE), Loops(Loops) {}
};
} // namespace

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
  SCEVExpander Exp(SE, DL, "scev.pred", false /*preserve lcssa*/);
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

static Value *emitOverlappingChecks(const DepCondition &DepCond, VLoop *VL,
                                    const ControlCondition *C,
                                    VLoop::ItemIterator InsertBefore,
                                    DependenceChecker &DepChecker,
                                    ScalarEvolution &SE, PredicatedSSA &PSSA,
                                    const DataLayout &DL) {
  assert(DepCond.isOverlapping());
  auto [R1, R2] = DepCond.getRanges();
  auto *End1 = SE.getAddExpr(R1.Base, R1.Size);
  auto *End2 = SE.getAddExpr(R2.Base, R2.Size);

  // In case any of the SCEV expressions involve addrec, we need to insert
  // indvars for the involving loops.
  DenseSet<Loop *> Loops;
  AddRecLoopCollector LoopCollector(Loops, SE);
  LoopCollector.visit(End1);
  LoopCollector.visit(End2);
  for (auto *L : Loops)
    addIndvar(L, PSSA);

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
      for (auto *IncomingC : OrigVL->getPhiConditions(cast<PHINode>(I)))
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

void Versioner::registerNewCondition(const ControlCondition *C,
                                     const ControlCondition *C2) {
  if (OrigConds.count(C))
    OrigConds[C2] = OrigConds[C];
  else
    OrigConds[C2] = C;
}

// TODO: cache this
const ControlCondition *
Versioner::strengthenCondition(const ControlCondition *C, Value *Flag,
                               bool IsTrue) {
  auto *FlagC = PSSA.getInstCond(cast<Instruction>(Flag));
  auto *C2 = PSSA.getAnd(PSSA.getAnd(FlagC, Flag, IsTrue), C);
  registerNewCondition(C, C2);
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

  const decltype(RewrittenConds) &getRewrittenConds() const {
    return RewrittenConds;
  }
};
} // namespace

void Versioner::runOnLoop(VLoop *VL, const VersioningMapTy &VersioningMap) {
  // Put the items in a vector to avoid iterator invalidation
  std::vector<Item> Items(VL->item_begin(), VL->item_end());

  // Remember the *original* sub loops, which we will visit recursively
  SmallVector<VLoop *> SubLoops;
  for (auto It : Items) {
    if (auto *SubVL = It.asLoop())
      SubLoops.push_back(SubVL);
  }

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
                                    VL->toIterator(Earliest), DepChecker, SE,
                                    PSSA, DL);
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
      DependencesFinder DepFinder(Deps, Earliest, VL, DepChecker);
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

    for (auto [OldC, NewC] : RewriteWithPhi.getRewrittenConds()) {
      if (OldC != NewC)
        registerNewCondition(OldC, NewC);
    }
    for (auto [OldC, NewC] : RewriteWithClone.getRewrittenConds()) {
      if (OldC != NewC)
        registerNewCondition(OldC, NewC);
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
                    const DenseMap<DepEdge, DenseSet<DepEdge>> &InterLoopDeps) {
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

    std::vector<DepCondition> GlobalDepConds;
    for (auto [Edge, DepConds] : Ver->CutEdges) {
      llvm::append_range(GlobalDepConds, DepConds);
      auto [Src, Dst] = Edge;
      auto *SrcI = Src.asInstruction();
      auto *DstI = Dst.asInstruction();
      if (SrcI && DstI &&
          (DepConds.size() == 1 && DepConds.front().isOverlapping()))
        AliasedEdgesToIgnore.insert(Edge);
      else
        DepEdgesToIgnore.insert(Edge);

      if (auto It = InterLoopDeps.find(Edge); It != InterLoopDeps.end()) {
        for (auto &Edge : It->second)
          AliasedEdgesToIgnore.insert(Edge);
      }
    }

    for (auto [Src, Dst] : make_first_range(Ver->CutEdges)) {
      MarkForVersioning(Src, GlobalDepConds);
      MarkForVersioning(Dst, GlobalDepConds);
      for (auto Node : Ver->Nodes)
        MarkForVersioning(Node, GlobalDepConds);
    }
  }

  IndepTracker.ignoreDependences(DepEdgesToIgnore, AliasedEdgesToIgnore,
                                 InterLoopDeps);

#if 0
  ConditionSetTracker CST(SE, PSSA);
  // Visit all of the conditions for coalescing
  for (auto &DepConds : make_second_range(VersioningMap))
    for (auto &DepCond : DepConds)
      CST.add(DepCond);
#endif

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
      auto NewCond = DepCond;//CST.getCoalescedCondition(DepCond);
      if (Inserted.insert(NewCond).second)
        NewConds.push_back(NewCond);
    }
    // Fix a canonical order for the conditions
    llvm::sort(NewConds);
    Conds = std::move(NewConds);
  }

  removeRedundantConditions(PSSA, VersioningMap);

  runOnLoop(&PSSA.getTopLevel(), VersioningMap);
}

IndependenceTracker::IndependenceTracker(Versioner &TheVersioner,
                                         PredicatedSSA &PSSA)
    : TheVersioner(TheVersioner), PSSA(PSSA) {}

void IndependenceTracker::ignoreDependences(
    const DenseSet<DepEdge> &DepEdgesToIgnore,
    const DenseSet<DepEdge> &AliasedEdgesToIgnore,
    const DenseMap<DepEdge, DenseSet<DepEdge>> &InterLoopDeps) {
  Whitelist.insert(DepEdgesToIgnore.begin(), DepEdgesToIgnore.end());

  for (auto [Src, Dst] : AliasedEdgesToIgnore) {
    // Memory independence is reflexive (e.g., if ptr1 and
    // ptr2 don't alias, then the independence goes both ways)
    NodeToDepsMap[Src].insert(Dst);
    NodeToDepsMap[Dst].insert(Src);
  }

  for (auto [LoopPairs, Edges] : InterLoopDeps) {
    for (auto [Src, Dst] : Edges) {
      NodeToDepsMap[Src].insert(Dst);
      auto *VL = LoopPairs.first.asLoop();
      LoopToDepsMap[{VL, Src}].insert(Dst);
    }
  }

  errs() << "Dumping node to deps map\n";
  for (auto [Src, Dsts] : NodeToDepsMap)
    for (auto Dst : Dsts)
      errs() << '\t' << Src << " -> " << Dst << '\n';
}

void IndependenceTracker::markInstAsVersioned(Instruction *Orig,
                                              Instruction *Cloned) {
  // The cloned instruction inherit the "independence" of the original
  // instruction
  // FIXME: this can make unnecessary allocation... We avoid putting empty
  // entries in the map
  IndependentFrom[Cloned] = IndependentFrom[Orig];
  IndependentFrom[Orig] = NodeToDepsMap[Orig];
}

void IndependenceTracker::markLoopInstAsVersioned(Instruction *Orig,
                                                  Instruction *Cloned,
                                                  VLoop *VL) {
  IndependentFrom[Cloned] = IndependentFrom[Orig];
  auto It = LoopToDepsMap.find({VL, Orig});
  if (It == LoopToDepsMap.end())
    return;
  auto &Nodes = It->second;
  IndependentFrom[Orig].insert(Nodes.begin(), Nodes.end());
}

bool IndependenceTracker::checkIndependence(const DepNode &Src,
                                            const DepNode &Dst) const {
  auto *DstI = Dst.asInstruction();
  if (auto It = NodeToDepsMap.find(Src);
      It != NodeToDepsMap.end() &&
      (It->second.count(Dst) ||
       (TheVersioner.getOriginalIfCloned(DstI) &&
        It->second.count(TheVersioner.getOriginalIfCloned(DstI)))))
    return true;
  // Try again if Dst is a cloned instruction
  if (!DstI)
    return false;
  auto *OrigDst = TheVersioner.getOriginalIfCloned(DstI);
  if (!OrigDst)
    OrigDst = DstI;
  if (auto It = IndependentFrom.find(Src);
      It != IndependentFrom.end() && It->second.count(OrigDst))
    return true;
  return false;
}

bool IndependenceTracker::isIndependent(const DepNode &Src,
                                        const DepNode &Dst) const {
  // Check the white list first, which doesn't take cloning into account.
  if (Whitelist.count({Src, Dst}))
    return true;
  auto *SrcI = Src.asInstruction();
  auto *DstI = Dst.asInstruction();
  // FIXME: also support inst-to-loop dep
  if (SrcI && DstI) {
    if (TheVersioner.isExclusive(PSSA.getInstCond(SrcI),
                                 PSSA.getInstCond(DstI)))
      return true;
  }
  return checkIndependence(Src, Dst) || checkIndependence(Dst, Src);
}

// Find the outermost versioning plan
static Versioning *getOutermostVersioning(Versioning *Ver) {
  auto *OutermostVer = Ver;
  while (OutermostVer->Secondary)
    OutermostVer = OutermostVer->Secondary.get();
  return OutermostVer;
}

// Fix up a chain of nested versionings.
static void finalizeVersioning(Versioning *PrimaryVer) {
  DenseSet<DepNode> Nodes(PrimaryVer->Nodes.begin(), PrimaryVer->Nodes.end());
  DenseSet<DepCondition> ImpliedConds;
#ifndef NDEBUG
  DenseSet<DepNode> Removed;
#endif
  auto RemoveFromNodes = [&](ArrayRef<DepNode> ToRemove) {
    for (auto &Node : ToRemove) {
      //assert(Nodes.count(Node) || Removed.count(Node));
      Nodes.erase(Node);
#ifndef NDEBUG
      Removed.insert(Node);
#endif
    }
  };

  for (auto *Ver = getOutermostVersioning(PrimaryVer); Ver;
       Ver = Ver->Primary) {
    auto OldNodes = std::move(Ver->Nodes);
    llvm::append_range(Ver->Nodes, Nodes);
    RemoveFromNodes(OldNodes);
    DenseSet<DepEdge> ImpliedCutEdges;
    for (auto [Edge, DepConds] : Ver->CutEdges) {
      setSubtraction(DepConds, ImpliedConds);
      // If a cut edge's conditions are all implied, we don't need to cut it.
      if (DepConds.empty())
        ImpliedCutEdges.insert(Edge);
    }
    for (auto &DepConds : llvm::make_second_range(Ver->CutEdges))
      ImpliedConds.insert(DepConds.begin(), DepConds.end());
    // Remove the implied cut edges
    for (auto &Edge : ImpliedCutEdges)
      Ver->CutEdges.erase(Edge);
  }
}

// Do loop-unswitching for loop-invariant versioning conditions
static void hoistConditions(Versioning *Ver) {
  if (Ver->Secondary)
    hoistConditions(Ver->Secondary.get());

  auto *VL = Ver->ParentLoop;

  decltype(Versioning::CutEdges) InvariantEdges;
  SmallVector<DepEdge> RemoveFromVersioning;
  for (auto [Edge, DepConds] : Ver->CutEdges) {
    for (auto &DepCond : DepConds)
      if (DepCond.isLoopInvariant(VL))
        InvariantEdges[Edge].push_back(DepCond);
    // If all of the conditions of an edge are loop-invariant,
    // remove that edge from this level of versioning
    if (InvariantEdges.count(Edge) &&
        InvariantEdges[Edge].size() == DepConds.size()) {
      RemoveFromVersioning.push_back(Edge);
    }
  }

  if (InvariantEdges.empty())
    return;

  auto OuterVer = std::make_unique<Versioning>();
  assert(VL->isLoop());
  OuterVer->ParentLoop = VL->getParent();
  OuterVer->Nodes.push_back(Item(VL));
  OuterVer->CutEdges = InvariantEdges;

  for (auto Edge : RemoveFromVersioning)
    Ver->CutEdges.erase(Edge);

  if (Ver->CutEdges.empty()) {
    // If all of the cut edges are implied, then the versioning plan is empty.
    // In this case, we just replace the original versioning plan with the
    // "outer" one.
    *Ver = std::move(*OuterVer);
  } else {
    OuterVer->Secondary = std::move(Ver->Secondary);
    OuterVer->Primary = Ver;
    Ver->Secondary = std::move(OuterVer);
  }
}

void lowerVersioningPlan(VersioningPlan &VerPlan, Versioner &TheVersioner,
                         const EquivalenceClasses<Item> &EC,
                         PredicatedSSA &PSSA, ScalarEvolution &SE) {
  // Visit all of the conditions and coalesce them
  ConditionSetTracker CST(SE, PSSA);
  // Add the conditions to tracker
  for (auto &PrimaryVer : VerPlan.Versionings) {
    for (auto *Ver = PrimaryVer.get(); Ver; Ver = Ver->Secondary.get())
      for (auto DepConds : make_second_range(Ver->CutEdges))
        for (auto &DepCond : DepConds)
          CST.add(DepCond);
  }
  // Use the coalesced conditions
  for (auto &PrimaryVer : VerPlan.Versionings) {
    for (auto *Ver = PrimaryVer.get(); Ver; Ver = Ver->Secondary.get()) {
      for (auto &DepConds : make_second_range(Ver->CutEdges)) {
        std::vector<DepCondition> NewConds;
        DenseSet<DepCondition> Inserted;
        for (auto &DepCond : DepConds) {
          auto NewCond = CST.getCoalescedCondition(DepCond);
          if (Inserted.insert(NewCond).second)
            NewConds.push_back(NewCond);
        }
        DepConds = NewConds;
      }
    }
  }

  for (auto &Ver : VerPlan.Versionings) {
    finalizeVersioning(Ver.get());
    hoistConditions(Ver.get());
  }

  // Lower the versionings from the secondaries to primaries.
  // Collect the outermost versionings first.
  SmallVector<Versioning *> Frontier;
  for (auto &Ver : VerPlan.Versionings)
    Frontier.push_back(getOutermostVersioning(Ver.get()));

  while (!Frontier.empty()) {
    TheVersioner.run(Frontier, EC, VerPlan.InterLoopDeps);
    SmallVector<Versioning *> NewFrontier;
    for (auto *Ver : Frontier) {
      if (Ver->Primary)
        NewFrontier.push_back(Ver->Primary);
    }
    Frontier = std::move(NewFrontier);
  }
}
