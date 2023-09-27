#include "Versioning.h"
#include "DependenceChecker.h"
#include "ItemMover.h"
#include "Reducer.h"
#include "pssa/Inserter.h"
#include "pssa/VectorHashInfo.h"
#include "llvm/Analysis/LoopInfo.h"
#include "llvm/Analysis/ScalarEvolution.h"
#include "llvm/Analysis/ValueTracking.h"
#include "llvm/IR/MDBuilder.h"
#include "llvm/Transforms/Utils/ScalarEvolutionExpander.h"

using namespace llvm;

void Versioner::undo() const {
  for (auto [U, V] : OldUses)
    U->set(V);
}

void Versioner::redo() const {
  for (auto [U, V] : NewUses)
    U->set(V);
}

Instruction *Versioner::cloneInst(Instruction *I) {
  if (auto *R = dyn_cast<Reducer>(I))
    return ClonedReducers.emplace_back(Reducer::clone(R));
  return I->clone();
}

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
    for (auto *Op : AddRec->operands())
      visit(Op);
    Loops.insert(const_cast<Loop *>(AddRec->getLoop()));
    return AddRec;
  }
  AddRecLoopCollector(DenseSet<Loop *> &Loops, ScalarEvolution &SE)
      : SCEVRewriteVisitor<AddRecLoopCollector>(SE), Loops(Loops) {}
};

class SCEVEmitter {
  VLoop *VL;
  const ControlCondition *C;
  VLoop::ItemIterator InsertBefore;
  DependenceChecker &DepChecker;
  ScalarEvolution &SE;
  SCEVExpander Exp;

  BasicBlock *BB;
  Instruction *End;

  void emitProlog() {
    // Create a dummy basic for the expander to emit code
    auto &Ctx = SE.getContext();
    BB = BasicBlock::Create(Ctx, "", VL->getPSSA()->getFunction());
    // Create a dummy instruction in the block (expander's insert point requires
    // an existing instruction)
    End = new FreezeInst(UndefValue::get(Type::getInt1Ty(Ctx)), "", BB);
  }

  void emitEpilog() {
    End->eraseFromParent();

    // The computation may use instructions that show up before
    // `InsertBefore`. In which case, we need to move those instructions before
    // `InsertBefore`
    if (InsertBefore != VL->item_end()) {
      // Find dependences of the pred computation that occur *after*
      // InsertBefore
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
      assert(!llvm::count(Deps, *InsertBefore));
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
  }

public:
  SCEVEmitter(VLoop *VL, const ControlCondition *C,
              VLoop::ItemIterator InsertBefore, DependenceChecker &DepChecker,
              ScalarEvolution &SE, const DataLayout &DL)
      : VL(VL), C(C), InsertBefore(InsertBefore), DepChecker(DepChecker),
        SE(SE), Exp(SE, DL, "scev.pred", false /*preserve lcssa*/),
        BB(nullptr) {}
  Value *emitPredicate(const SCEVPredicate *Pred) {
    emitProlog();
    auto *Expanded = Exp.expandCodeForPredicate(Pred, End);
    emitEpilog();
    return Expanded;
  }
  Value *emitSCEV(const SCEV *S) {
    emitProlog();
    auto *Expanded = Exp.expandCodeFor(S, S->getType(), End);
    emitEpilog();
    return Expanded;
  }
};

struct AddRecNarrower : public SCEVRewriteVisitor<AddRecNarrower> {
  VLoop *VL;
  const ControlCondition *C;
  VLoop::ItemIterator InsertBefore;
  DependenceChecker &DepChecker;
  const DataLayout &DL;

  PredicatedSSA &PSSA;

  DenseMap<const SCEV *, const SCEV *> Memo;

  AddRecNarrower(VLoop *VL, const ControlCondition *C,
                 VLoop::ItemIterator InsertBefore,
                 DependenceChecker &DepChecker, ScalarEvolution &SE,
                 const DataLayout &DL)
      : SCEVRewriteVisitor<AddRecNarrower>(SE), VL(VL), C(C),
        InsertBefore(InsertBefore), DepChecker(DepChecker), DL(DL),
        PSSA(*VL->getPSSA()) {}

  const SCEV *visitUnknown(const SCEVUnknown *Unknown) {
    auto *V = Unknown->getValue();
    if (isa<Instruction>(V)) {
      SE.forgetValue(V);
    } else {
      for (auto *U : V->users())
        SE.forgetValue(U);
    }
    return Unknown;
  }

  const SCEV *visitAddRecExpr(const SCEVAddRecExpr *AddRec) {
    if (auto *Rewritten = Memo.lookup(AddRec))
      return Rewritten;

    SmallVector<const SCEV *> Operands;
    for (auto *Op : AddRec->operands())
      Operands.push_back(visit(Op));

    auto *L = AddRec->getLoop();
    auto *CanonicalIV = L->getCanonicalInductionVariable();
    auto *Ty = AddRec->getType();
    bool IsNarrower = SE.getTypeSizeInBits(CanonicalIV->getType()) >
                          SE.getTypeSizeInBits(Ty) &&
                      !AddRec->getType()->isPointerTy();
    if (!IsNarrower)
      return Memo[AddRec] =
                 SE.getAddRecExpr(Operands, L, AddRec->getNoWrapFlags());
    for (unsigned i = 0; i < Operands.size(); i++)
      Operands[i] = SE.getAnyExtendExpr(Operands[i], CanonicalIV->getType());
    SCEVEmitter Emitter(VL, C, InsertBefore, DepChecker, SE, DL);
    auto *V = Emitter.emitSCEV(
        SE.getAddRecExpr(Operands, L, AddRec->getNoWrapFlags(SCEV::FlagNW)));
    Inserter Insert(VL, C, InsertBefore);
    return Memo[AddRec] =
               SE.getUnknown(Insert.make<TruncInst>(V, AddRec->getType()));
  }

  const SCEV *visitPtrToIntExpr(const SCEVPtrToIntExpr *PTI) {
    SCEVEmitter Emitter(VL, C, InsertBefore, DepChecker, SE, DL);
    auto *V = Emitter.emitSCEV(visit(PTI->getOperand()));
    Inserter Insert(VL, C, InsertBefore);
    return Memo[PTI] =
               SE.getUnknown(Insert.make<PtrToIntInst>(V, PTI->getType()));
  }
};

} // namespace

// Expand Pred before specified item
static Value *emitSCEVPred(const SCEVPredicate *Pred, VLoop *VL,
                           const ControlCondition *C,
                           VLoop::ItemIterator InsertBefore,
                           DependenceChecker &DepChecker, ScalarEvolution &SE,
                           const DataLayout &DL) {
  SCEVEmitter Emitter(VL, C, InsertBefore, DepChecker, SE, DL);
  return Emitter.emitPredicate(Pred);
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
  LoopCollector.visit(R1.Base);
  LoopCollector.visit(R1.Size);
  LoopCollector.visit(R2.Base);
  LoopCollector.visit(R2.Size);
  for (auto *L : Loops)
    addIndvar(L, PSSA);

  // Rewrite add rec narrower than the canonical indvar as trunc
  // SCEVExpander actually does this, but it inserts the trunc instruction
  // implicitly (and sometimes not in the specified block)
  AddRecNarrower Narrower(VL, C, InsertBefore, DepChecker, SE, DL);
#if 0
  End1 = Narrower.visit(End1);
  End2 = Narrower.visit(End2);
  auto *Base1 = Narrower.visit(R1.Base);
  auto *Base2 = Narrower.visit(R2.Base);
  if (End1 == Base2 || End2 == Base1)
    return Insert.
#endif

  // Case 1: R1 is left of R2; i.e., End1 < Begin2. Note that we are using the
  // inverse predicate here because SCEVExpander flips the evaluation...
  auto *Left = emitSCEVPred(
      SE.getComparePredicate(CmpInst::getInversePredicate(CmpInst::ICMP_ULT),
                             Narrower.visit(End1), Narrower.visit(R2.Base)),
      VL, C, InsertBefore, DepChecker, SE, DL);
  // Case 2: R2 is left of R1; i.e., End2 < Begin1.
  auto *Right = emitSCEVPred(
      SE.getComparePredicate(CmpInst::getInversePredicate(CmpInst::ICMP_ULT),
                             Narrower.visit(End2), Narrower.visit(R1.Base)),
      VL, C, InsertBefore, DepChecker, SE, DL);
  Inserter Insert(VL, C, InsertBefore);
  return Insert.CreateBinOp(Instruction::Or, Left, Right);
}

VLoop *Versioner::cloneLoop(VLoop *OrigVL, ValueToValueMapTy &VMap,
                            CallbackTy Callback) {
  ValueMapper Mapper(VMap, RF_IgnoreMissingLocals);
  auto RemapInstruction = [&Mapper](Instruction *I) {
    // Not calling Mapper.remapInstruction because it also tries to remap the
    // incoming blocks of the phi (and mu) nodes, which can be empty in our IR
    for (Use &Op : I->operands())
      if (auto *V = Mapper.mapValue(*Op.get()))
        Op.set(V);
  };
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
    auto *I2 = cloneInst(I);
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
    RemapInstruction(ClonedI);
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
  llvm::for_each(VL->mus(), RemapInstruction);

  // Remap the continue/back-edge cond. (couldn't do it before cloning)
  VL->setBackEdgeCond(RemapCondition(VL->getBackEdgeCond()));
  Callback(OrigVL, VL);
  VL->setName(OrigVL->getName() + ".clone");
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

  auto It = StrengthenedConds.find(C);
  if (It == StrengthenedConds.end())
    return;

  // If C is a strengthened version of something then C2 should also be
  auto Tmp = It->second;
  StrengthenedConds[C2] = Tmp;

  if (FalseConds.count(C))
    FalseConds.insert(C2);
}

// TODO: cache this
const ControlCondition *
Versioner::strengthenCondition(const ControlCondition *C, Value *Flag,
                               ArrayRef<DepCondition> DepConds, bool IsTrue) {
  auto *FlagC = PSSA.getInstCond(cast<Instruction>(Flag));
  auto *C2 = PSSA.getAnd(PSSA.getAnd(FlagC, Flag, IsTrue), C);
  registerNewCondition(C, C2);
  StrengthenedConds[C2].emplace_back(Flag, IsTrue);
  // A strengthened, false condition is still false;
  if (FalseConds.count(C)) {
    FalseConds.insert(C);
  } else {
    for (auto &DepCond : DepConds) {
      if (DepCond.isOverlapping())
        continue;
      auto *OrigC = getOriginalCondition(C);
      if (!OrigC)
        OrigC = C;
      // Is OrigC implies any of the dependence conditions,
      // because the flag is only true when all of the conditions are false,
      // OrigC is therefore false by contraposition
      if (isImplied(DepCond.getCondition(), OrigC)) {
        FalseConds.insert(C2);
        break;
      }
    }
  }
  return C2;
}

static bool isExclusiveAux(const ControlCondition *C1,
                           const ControlCondition *C2) {
  // If any one is true then it's definitely not exclusive
  if (!C1 || !C2)
    return false;

  auto *And1 = dyn_cast<ConditionAnd>(C1);
  if (And1 && And1->Complement == C2)
    return true;

  auto *And2 = dyn_cast<ConditionAnd>(C2);
  if (And1 && And2)
    return isExclusiveAux(And1->Parent, And2->Parent);

  return false;
}

void Versioner::recordCloning(Item It, Item ClonedIt) {
  auto [Iterator, Inserted] = OrigToCloneMap.try_emplace(It, ClonedIt);
  if (!Inserted)
    Iterator->second = ClonedIt;
}

bool Versioner::isExclusive(const ControlCondition *C1,
                            const ControlCondition *C2) {
  auto GetOriginalCond = [&](auto *C) {
    auto It = OrigConds.find(C);
    if (It != OrigConds.end())
      return It->second;
    return C;
  };
  if (isExclusiveAux(GetOriginalCond(C1), GetOriginalCond(C2)))
    return true;

  auto It1 = StrengthenedConds.find(C1);
  if (It1 == StrengthenedConds.end())
    return false;
  auto It2 = StrengthenedConds.find(C2);
  if (It2 == StrengthenedConds.end())
    return false;
  // auto [Flag1, IsTrue1] = It1->second;
  // auto [Flag2, IsTrue2] = It2->second;
  // return Flag1 == Flag2 && (IsTrue1 ^ IsTrue2);
  for (auto [Flag1, IsTrue1] : It1->second)
    for (auto [Flag2, IsTrue2] : It2->second)
      if (Flag1 == Flag2 && (IsTrue1 ^ IsTrue2))
        return true;
  return false;
}

namespace {
// Utility to rewrite a condition to use a new instruction
class ConditionRewriter {
  PredicatedSSA &PSSA;
  Value *Old;
  Value *New;
  DenseMap<const ControlCondition *, const ControlCondition *> RewrittenConds;
  Value *rewrite(Value *V) {
    auto *V2 = V == Old ? New : V;
    assert(V2);
    return V2;
  }
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
  MapVector<DepCondition, std::vector<Item>> CondToItemMap;
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
    DenseMap<Use *, Value *> UseToValueMap;
    undo();
    auto *V = emitOverlappingChecks(DepCond, VL, getCommonCondition(VL, Items),
                                    VL->toIterator(Earliest), DepChecker, SE,
                                    PSSA, DL);
    redo();
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
      // NoDep = Insert.create<BinaryOperator>(Instruction::Or,
      // Insert.getTrue(), Insert.getTrue());
      CondSets[DepConds] = NoDep;
      // static int counter;
      // NoDep->setName("flag." + std::to_string(counter++));
    }
    VersioningFlags[It] = CondSets[DepConds];
  }

  reset();
  // Mapping <original item/inst> -> <cloned item/inst>
  auto GetClonedInst = [&](Instruction *I) -> Instruction * {
    auto It = OrigToCloneMap.find(I);
    if (It != OrigToCloneMap.end())
      return It->second.asInstruction();
    return nullptr;
  };

  // Join the clone and original instructions with phis to deal with external
  // uses
  llvm::DenseSet<llvm::Instruction *> VersioningPhis;
  llvm::DenseMap<llvm::Instruction *, llvm::Instruction *>
      InstToVersioningPhiMap;
  // Mapping an item to the ancestor loop that we just versioned
  llvm::DenseMap<Item, VLoop *, ItemHashInfo> ItemToLoopMap;
  llvm::SmallVector<llvm::PHINode *> VersionedPhis;
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

    ArrayRef DepConds = VersioningMap.find(Item)->second;
    auto *Success = strengthenCondition(C, Flag, DepConds, true);
    auto *Fail = strengthenCondition(C, Flag, DepConds, false);

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
      auto *I2 = cloneInst(I);
      if (I->hasName())
        I2->setName(I->getName() + ".clone");
      if (auto *Orig = CloneToOrigMap.lookup(I))
        CloneToOrigMap[I2] = Orig;
      else
        CloneToOrigMap[I2] = I;
      IndepTracker.markInstAsVersioned(I, I2);
      recordCloning(I, I2);

      if (auto *PN = dyn_cast<PHINode>(I)) {
        VersionedPhis.push_back(PN);
        SmallVector<const ControlCondition *> NewPhiConds;
        for (auto X : llvm::enumerate(VL->getPhiConditions(PN))) {
          auto *C = X.value();
          unsigned i = X.index();
          VL->setPhiCondition(PN, i,
                              strengthenCondition(C, Flag, DepConds, true));
          NewPhiConds.push_back(strengthenCondition(C, Flag, DepConds, false));
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
        recordCloning(It, ClonedIt);
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

      if (CondsAreImplied(DepConds, UserI)) {
        // If the use comes from another instruction that gets versioned under
        // the same condition we just change that instruction (and its clone)
        // to use (the clone of) I
        auto *ClonedUser = GetClonedInst(UserI);
        assert(ClonedUser);
        ClonedUser->getOperandUse(U->getOperandNo()).set(Clone);
      } else {
        // Otherwise, we should change it to use the verioning phi
        auto *Phi = InstToVersioningPhiMap.lookup(I);
        errs() << "!!! using versioning phi for " << *I << '\n';
        assert(Phi);
        OldUses.try_emplace(U, U->get());
        NewUses.try_emplace(U, Phi);
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

    if (CondUsers.empty())
      return;

    ConditionRewriter RewriteWithPhi(PSSA, I, InstToVersioningPhiMap.lookup(I));
    ConditionRewriter RewriteWithClone(PSSA, I, Clone);
    bool UsedPhi = false;
    for (auto It : CondUsers) {
      if (auto *UserVL = It.asLoop()) {
        if (/*VL->contains(UserVL->getParent()) &&*/
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
      if (VersioningPhis.count(UserI))
        continue;
      auto *UserVL = PSSA.getLoopForInst(UserI);

      if (/*VL->contains(UserVL) &&*/ CondsAreImplied(DepConds, UserI)) {
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
    // Ignore tirvial phis
    if (PN->getNumOperands() == 1)
      continue;
    ArrayRef<DepCondition> DepConds = VersioningMap.find(PN)->second;
    for (auto X : llvm::enumerate(VL->getPhiConditions(PN))) {
      assert(OrigConds.count(X.value()));
      auto *C = getOriginalCondition(X.value());
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
    CUT.markInstAsDeleted(Phi);
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

template <typename T> std::pair<T, T> reorder(std::pair<T, T> Pair) {
  auto [A, B] = Pair;
  return {B, A};
}

static void addScopeForInst(Instruction *I, Metadata *Scope) {
  I->setMetadata(
      LLVMContext::MD_alias_scope,
      MDNode::concatenate(I->getMetadata(LLVMContext::MD_alias_scope),
                          MDNode::get(I->getContext(), Scope)));
}

static void addNoAliasForInst(Instruction *I, Metadata *Scope) {
  I->setMetadata(LLVMContext::MD_noalias,
                 MDNode::concatenate(I->getMetadata(LLVMContext::MD_noalias),
                                     MDNode::get(I->getContext(), Scope)));
}

static void annotateWithNoAlias(LLVMContext &Ctx,
                                const DenseSet<DepEdge> &AliasedEdgesToIgnore,
                                ConditionSetTracker &CST) {
  MDBuilder MDB(Ctx);

  using ValueSet = ConditionSetTracker::ValueSet;
  DenseMap<std::pair<ValueSet *, ValueSet *>, std::pair<MDNode *, MDNode *>>
      SetsToScopesMap;
  auto GetScopesForSets = [&](ValueSet *SetA, ValueSet *SetB) {
    auto Key = std::make_pair(SetA, SetB);
    if (SetA > SetB)
      Key = reorder(Key);
    auto [It, Inserted] = SetsToScopesMap.try_emplace(Key, nullptr, nullptr);
    if (!Inserted) {
      return (SetA > SetB) ? reorder(It->second) : It->second;
    }

#if 0
    errs() << "Set a { \n";
    for (auto *x : *SetA)
      errs() << '\t' << *x << '\n';
    errs() << "}\n";
    errs() << "Set b { \n";
    for (auto *x : *SetB)
      errs() << '\t' << *x << '\n';
    errs() << "}\n";
#endif

    MDNode *Domain = MDB.createAnonymousAliasScopeDomain();
    auto *ScopeA = MDB.createAnonymousAliasScope(Domain);
    auto *ScopeB = MDB.createAnonymousAliasScope(Domain);
    auto Result = std::make_pair(ScopeA, ScopeB);
    It->second = (SetA > SetB) ? reorder(Result) : Result;
    return Result;
  };

  for (auto [Src, Dst] : AliasedEdgesToIgnore) {
    auto *SrcI = Src.asInstruction();
    auto *DstI = Dst.asInstruction();
    if (!SrcI || !DstI)
      continue;
    auto [SrcSet, DstSet] = CST.getMergedObjects(SrcI, DstI);
    auto [SrcScope, DstScope] = GetScopesForSets(SrcSet, DstSet);
    assert(SrcSet->contains(SrcI));
    assert(DstSet->contains(DstI));
    addNoAliasForInst(SrcI, DstScope);
    addScopeForInst(DstI, DstScope);
    addNoAliasForInst(DstI, SrcScope);
    addScopeForInst(SrcI, SrcScope);
  }
}

void Versioner::run(ArrayRef<Versioning *> Versionings,
                    const EquivalenceClasses<Item> &EC,
                    const DenseMap<DepEdge, DenseSet<DepEdge>> &InterLoopDeps,
                    ConditionSetTracker &CST) {
  reset();
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
    DenseSet<DepCondition> UniqueConds;
    std::vector<DepCondition> GlobalDepConds;
    for (auto [Edge, DepConds] : Ver->CutEdges) {
      for (auto &DepCond : DepConds)
        if (UniqueConds.insert(DepCond).second)
          GlobalDepConds.push_back(DepCond);
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
    for (auto Edge : Ver->ImpliedCutEdges) {
      AliasedEdgesToIgnore.insert(Edge);
      if (auto It = InterLoopDeps.find(Edge); It != InterLoopDeps.end()) {
        for (auto &Edge : It->second)
          AliasedEdgesToIgnore.insert(Edge);
      }
    }

    DenseSet<DepNode> Nodes(Ver->Nodes.begin(), Ver->Nodes.end());
    for (auto [Src, Dst] : make_first_range(Ver->CutEdges)) {
      Nodes.insert(Src);
      Nodes.insert(Dst);
    }
    for (auto Node : Nodes)
      MarkForVersioning(Node, GlobalDepConds);
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
      auto NewCond = DepCond; // CST.getCoalescedCondition(DepCond);
      if (Inserted.insert(NewCond).second)
        NewConds.push_back(NewCond);
    }
    // Fix a canonical order for the conditions
    llvm::sort(NewConds);
    Conds = std::move(NewConds);
  }

  removeRedundantConditions(PSSA, VersioningMap);

  runOnLoop(&PSSA.getTopLevel(), VersioningMap);
  annotateWithNoAlias(PSSA.getContext(), AliasedEdgesToIgnore, CST);
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
  auto Tmp = IndependentFrom[Orig];
  IndependentFrom[Cloned] = Tmp;
  IndependentFrom[Orig] = NodeToDepsMap[Orig];
}

void IndependenceTracker::markLoopInstAsVersioned(Instruction *Orig,
                                                  Instruction *Cloned,
                                                  VLoop *VL) {
  auto Tmp = IndependentFrom[Orig];
  IndependentFrom[Cloned] = Tmp;
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
  auto GetCond = [&](DepNode N) {
    if (auto *I = N.asInstruction())
      return PSSA.getInstCond(I);
    auto *VL = N.asLoop();
    assert(VL);
    return VL->getLoopCond();
  };
#if 0
  errs() << "checking independence: " << Src << ", " << Dst
         << " CONDS = " << *GetCond(Src) << ", " << *GetCond(Dst)
         << "\n\t exclusive? "
         << TheVersioner.isExclusive(GetCond(Src), GetCond(Dst)) << '\n';
#endif
  if (TheVersioner.isExclusive(GetCond(Src), GetCond(Dst)))
    return true;
  if (TheVersioner.isFalse(GetCond(Src)) || TheVersioner.isFalse(GetCond(Dst)))
    return true;
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
  auto RemoveFromNodes = [&](ArrayRef<DepNode> ToRemove) {
    for (auto &Node : ToRemove)
      Nodes.erase(Node);
  };

  DenseSet<DepNode> Versioned;
  for (auto *Ver = getOutermostVersioning(PrimaryVer); Ver;
       Ver = Ver->Primary) {

#if 0
    auto OldNodes = std::move(Ver->Nodes);
    llvm::append_range(Ver->Nodes, Nodes);
    RemoveFromNodes(OldNodes);
#endif

    DenseSet<DepNode> NewNodes = Nodes;
    NewNodes.insert(Ver->Nodes.begin(), Ver->Nodes.end());
    for (auto N : Versioned)
      NewNodes.erase(N);

    Versioned.insert(Ver->Nodes.begin(), Ver->Nodes.end());
    Ver->Nodes.clear();
    llvm::append_range(Ver->Nodes, NewNodes);

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
    for (auto &Edge : ImpliedCutEdges) {
      Ver->CutEdges.erase(Edge);
      Ver->ImpliedCutEdges.insert(Edge);
    }
  }
}

// Do loop-unswitching for loop-invariant versioning conditions
static std::unique_ptr<Versioning> hoistConditions(Versioning *Ver) {
  auto *VL = Ver->ParentLoop;

  decltype(Versioning::CutEdges) InvariantEdges;
  SmallVector<DepEdge> RemoveFromVersioning;
  for (auto &[Edge, DepConds] : Ver->CutEdges) {
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

  // idea: only bother hoisting if we can hoist everything
  if (Ver->CutEdges.size() != InvariantEdges.size())
    return nullptr;

  auto OuterVer = std::make_unique<Versioning>();
  assert(VL->isLoop());
  OuterVer->ParentLoop = VL->getParent();
  OuterVer->Nodes.push_back(Item(VL));
  OuterVer->CutEdges = InvariantEdges;

  for (auto Edge : RemoveFromVersioning)
    Ver->CutEdges.erase(Edge);

  // Transfer the primary versioning to the outer versioning
  // so that we will remember to lower the primary versioning later
  OuterVer->Primary = Ver->Primary;
  Ver->Primary = nullptr;
  return OuterVer;
}

static DepCondition promoteCondition(const DepCondition &DepCond,
                                     ScalarEvolution &SE, PredicatedSSA &PSSA) {
  if (!DepCond.isOverlapping())
    return DepCond;
  auto [R1, R2] = DepCond.getRanges();
  if (!R1.ParentLoop->isLoop())
    return DepCond;

  // Don't promote with the overlapping checks are for the same objects.
  // For checks around the same objects, it's plausible that the conditions
  // are only true for some iterations but not others, and promotion can disable
  // vectorization for *all* iterations.
  auto *Obj1 = getUnderlyingObject(getLoadStorePointerOperand(R1.Access));
  auto *Obj2 = getUnderlyingObject(getLoadStorePointerOperand(R2.Access));
  if (Obj1 == Obj2)
    return DepCond;

  auto PromotedR1 = R1.promote(SE, PSSA);
  if (!PromotedR1)
    return DepCond;
  auto PromotedR2 = R2.promote(SE, PSSA);
  if (!PromotedR2)
    return DepCond;

  return DepCondition::ifOverlapping(*PromotedR1, *PromotedR2, SE, PSSA);
}

namespace {
// Utility to assign a arbitrary, deterministic order for the edges in Versioning:CutEdges
class CutEdgesOrderer {
  DenseMap<Item, unsigned, ItemHashInfo> ItemNumbers;
  int getNumber(const DepNode &N) {
    if (auto *I = N.asInstruction())
      return ItemNumbers.lookup(I);
    if (auto *VL = N.asLoop())
      return ItemNumbers.lookup(VL);
    return -1;
  }

public:
  CutEdgesOrderer(PredicatedSSA &PSSA) {
    SmallVector<Item> Worklist{&PSSA.getTopLevel()};
    while (!Worklist.empty()) {
      auto It = Worklist.pop_back_val();
      ItemNumbers.try_emplace(It, ItemNumbers.size());
      if (auto *VL = It.asLoop()) {
        Worklist.append(VL->item_begin(), VL->item_end());
      }
    }
  }

  std::vector<std::pair<DepEdge, std::vector<DepCondition>>>
  orderEdges(const DenseMap<DepEdge, std::vector<DepCondition>> &Edges) {
    std::vector<std::pair<DepEdge, std::vector<DepCondition>>> OrderedEdges(
        Edges.begin(), Edges.end());
    llvm::sort(OrderedEdges, [&](const auto &KV1, const auto &KV2) {
      auto [Src1, Dst1] = KV1.first;
      auto [Src2, Dst2] = KV2.first;
      return std::make_pair(getNumber(Src1), getNumber(Dst1)) <
             std::make_pair(getNumber(Src2), getNumber(Dst2));
    });
    return OrderedEdges;
  }
};
}

void lowerVersioningPlan(VersioningPlan &VerPlan, Versioner &TheVersioner,
                         EquivalenceClasses<Item> EC, PredicatedSSA &PSSA,
                         ScalarEvolution &SE) {
  CutEdgesOrderer Orderer(PSSA);
  // Visit all of the conditions and coalesce them
  ConditionSetTracker CST(SE, PSSA);
  // Add the conditions to tracker
  for (auto &PrimaryVer : VerPlan.Versionings) {
    for (auto *Ver = PrimaryVer.get(); Ver; Ver = Ver->Secondary.get()) {
      auto OrderedEdges = Orderer.orderEdges(Ver->CutEdges);
      for (auto DepConds : make_second_range(OrderedEdges))
        for (auto &DepCond : DepConds)
          CST.add(DepCond);
    }
  }
  // Use the coalesced conditions
  for (auto &PrimaryVer : VerPlan.Versionings) {
    for (auto *Ver = PrimaryVer.get(); Ver; Ver = Ver->Secondary.get()) {
      for (auto &DepConds : make_second_range(Ver->CutEdges)) {
        std::vector<DepCondition> NewConds;
        DenseSet<DepCondition> Inserted;
        for (auto &DepCond : DepConds) {
          auto NewCond = CST.getCoalescedCondition(DepCond);
          // Try to promote the condition so that it's loop invariant
          NewCond = promoteCondition(NewCond, SE, PSSA);
          if (Inserted.insert(NewCond).second)
            NewConds.push_back(NewCond);
        }
        DepConds = NewConds;
      }
    }
  }

  for (auto &Ver : VerPlan.Versionings)
    finalizeVersioning(Ver.get());

  // Lower the versionings from the secondaries to primaries.
  // Collect the outermost versionings first.
  SmallVector<Versioning *> Frontier;
  for (auto &Ver : VerPlan.Versionings)
    Frontier.push_back(getOutermostVersioning(Ver.get()));

  while (!Frontier.empty()) {
    // For each versioning in the frontier, try to hoist any loop invariant
    // conditions
    SmallVector<Versioning *> TempFrontier;
    std::vector<std::unique_ptr<Versioning>> OuterFrontiers;
    for (auto *Ver : Frontier) {
      auto OuterVer = hoistConditions(Ver);
      if (!Ver->CutEdges.empty())
        TempFrontier.push_back(Ver);
      if (OuterVer) {
        TempFrontier.push_back(OuterVer.get());
        OuterFrontiers.push_back(std::move(OuterVer));
      }
    }
    Frontier = std::move(TempFrontier);

    // Union the conditions for nodes in the same versioning
    auto OldEC = EC;
    for (auto *Ver : Frontier) {
      SmallVector<Item> Items;
      for (auto N : Ver->Nodes) {
        if (auto *I = N.asInstruction())
          Items.push_back(I);
        else if (auto *VL = N.asLoop())
          Items.push_back(VL);
      }
      if (Items.empty())
        continue;
      auto I0 = Items.front();
      for (auto I : Items)
        EC.unionSets(I, I0);
    }

    TheVersioner.run(Frontier, EC, VerPlan.InterLoopDeps, CST);
    SmallVector<Versioning *> NewFrontier;
    for (auto *Ver : Frontier) {
      if (Ver->Primary)
        NewFrontier.push_back(Ver->Primary);
    }
    Frontier = std::move(NewFrontier);
    EC = std::move(OldEC);
  }
}

// Return the control condition under which `DepCond` is available
static Optional<const ControlCondition *>
getControlCondition(DepCondition &DepCond, ScalarEvolution &SE) {
  if (!DepCond.isOverlapping())
    return nullptr;

  auto [R1, R2] = DepCond.getRanges();
  auto *VL = R1.ParentLoop;
  SmallVector<DepNode> SCEVDeps;
  SCEVDepFinder SDF(SE, VL, SCEVDeps);
  SDF.visit(R1.Base);
  SDF.visit(R1.Size);
  SDF.visit(R2.Base);
  SDF.visit(R2.Size);
  auto &PSSA = *VL->getPSSA();
  const ControlCondition *C = nullptr;
  for (auto N : SCEVDeps) {
    if (auto *I = N.asInstruction()) {
      auto *VL2 = PSSA.getLoopForInst(I);
      if (VL2->contains(VL) && VL2 != VL)
        continue;
      assert(VL2 == VL);
      auto *C2 = VL->getInstCond(I);
      // If C and C2 aren't comparable (by implication),
      // then we can't guarantee that the dependent values are simultaneously
      // available, and therefore can't produce the check.
      if (!isImplied(C, C2) && !isImplied(C2, C))
        return None;
      if (isImplied(C, C2))
        C = C2;
    }
  }
  return C;
}

static bool isVersioningPlanFeasibleImpl(
    ArrayRef<Versioning *> Versionings, const DenseSet<DepEdge> &DepsToIgnore,
    const EquivalenceClasses<Item> &EC, DependenceChecker &DepChecker,
    ConditionSetTracker &CST, PredicatedSSA &PSSA, llvm::ScalarEvolution &SE) {
  // Mapping a versioning condition c -> set of items whose versioning uses c
  DenseMap<DepCondition, DenseSet<Item, ItemHashInfo>> CondToItemsMap;
  for (auto *Ver : Versionings) {
    // Figure out the items that we are versioning
    DenseSet<Item, ItemHashInfo> Items;
    auto ProcessNode = [&](auto N) {
      if (auto *I = N.asInstruction()) {
        Items.insert(I);
        Items.insert(EC.findLeader(I), EC.member_end());
      } else if (auto *VL = N.asLoop()) {
        Items.insert(VL);
      }
    };
    llvm::for_each(Ver->Nodes, ProcessNode);
    for (auto &[Edge, DepConds] : Ver->CutEdges) {
      auto [Src, Dst] = Edge;
      ProcessNode(Src);
      ProcessNode(Dst);
      for (auto &DepCond : DepConds)
        CondToItemsMap[CST.getCoalescedCondition(DepCond)].insert(Items.begin(),
                                                                  Items.end());
    }
  }

  // Check that none of the dep cond depends on the items
  for (auto &[DepCond, ItemSet] : CondToItemsMap) {
    // Partition the items by the loops that they are in
    DenseMap<VLoop *, std::vector<Item>> VLoopToItemsMap;
    for (auto It : ItemSet)
      VLoopToItemsMap[PSSA.getLoopForItem(It)].push_back(It);

    // C is the condition under which DepCond can be computed
    auto MaybeC = getControlCondition(DepCond, SE);
    if (!MaybeC)
      return false;
    auto *C = MaybeC.getValue();

    for (auto &[VL, Items] : VLoopToItemsMap) {
      SmallVector<Item> Deps;
      if (DepCond.isOverlapping()) {
        auto [R1, R2] = DepCond.getRanges();
        DenseSet<Item, ItemHashInfo> ImmediateItems;
        // For each item It, if It is not contained immediately by
        // R1.ParentLoop, find out the child loop of R1.ParentLoop that contains
        // It
        for (auto It : Items) {
          if (!R1.ParentLoop->contains(It))
            return false;
          while (PSSA.getLoopForItem(It) != R1.ParentLoop) {
            It = PSSA.getLoopForItem(It);
          }
          assert(PSSA.getLoopForItem(It) == R1.ParentLoop);
          ImmediateItems.insert(It);
        }
        for (auto It : ImmediateItems) {
          if (auto *I = It.asInstruction();
              I && !isImplied(C, VL->getInstCond(I)))
            return false;
          if (auto *SubVL = It.asLoop();
              SubVL && !isImplied(C, SubVL->getLoopCond()))
            return false;
        }

        SmallVector<DepNode> SCEVDeps;
        SCEVDepFinder SDF(SE, R1.ParentLoop, SCEVDeps);
        SDF.visit(R1.Base);
        SDF.visit(R1.Size);
        SDF.visit(R2.Base);
        SDF.visit(R2.Size);

        auto ComesBefore = [VL = R1.ParentLoop](auto It1, auto It2) {
          return VL->comesBefore(It1, It2);
        };
        Item Earliest = *std::min_element(ImmediateItems.begin(),
                                          ImmediateItems.end(), ComesBefore);
        DependencesFinder DepFinder(Deps, Earliest, R1.ParentLoop, DepChecker,
                                    nullptr /*Packs*/,
                                    nullptr /*InterLoopDeps*/, &DepsToIgnore);
        for (auto Dep : SCEVDeps) {
          if (auto *I = Dep.asInstruction())
            DepFinder.findDep(I, true /*add I as dep*/);
        }
        // Not feasible if any of the items is depended
        DenseSet<Item, ItemHashInfo> DepSet(Deps.begin(), Deps.end());
        for (auto It : ImmediateItems) {
          if (DepSet.count(It))
            return false;
        }
      } else {
        auto ComesBefore = [VL = VL](auto It1, auto It2) {
          return VL->comesBefore(It1, It2);
        };
        Item Earliest =
            *std::min_element(Items.begin(), Items.end(), ComesBefore);
        DependencesFinder DepFinder(Deps, Earliest, VL, DepChecker,
                                    nullptr /*Packs*/,
                                    nullptr /*InterLoopDeps*/, &DepsToIgnore);
        DepFinder.findDep(DepCond.getCondition());
        DenseSet<Item, ItemHashInfo> DepSet(Deps.begin(), Deps.end());
        // Not feasible if any of the items is depended
        for (auto It : Items) {
          if (DepSet.count(It))
            return false;
        }
      }
    }
  }
  return true;
}

bool isVersioningPlanFeasible(const VersioningPlan &VerPlan,
                              EquivalenceClasses<Item> EC,
                              DependenceChecker &DepChecker,
                              PredicatedSSA &PSSA, llvm::ScalarEvolution &SE) {
  CutEdgesOrderer Orderer(PSSA);
  // Visit all of the conditions and coalesce them
  ConditionSetTracker CST(SE, PSSA);
  // Add the conditions to tracker
  for (auto &PrimaryVer : VerPlan.Versionings) {
    for (auto *Ver = PrimaryVer.get(); Ver; Ver = Ver->Secondary.get()) {
      auto OrderedEdges = Orderer.orderEdges(Ver->CutEdges);
      for (auto DepConds : make_second_range(OrderedEdges))
        for (auto &DepCond : DepConds)
          CST.add(DepCond);
    }
  }

  DenseSet<DepEdge> DepsToIgnore;
  SmallVector<Versioning *> Frontier;
  // Make a copy of the versionings and finalize the versionings
  std::vector<std::unique_ptr<Versioning>> Versionings;
  for (auto &Ver : VerPlan.Versionings) {
    Versionings.push_back(std::make_unique<Versioning>(*Ver));
    finalizeVersioning(Versionings.back().get());
    Frontier.push_back(getOutermostVersioning(Versionings.back().get()));
  }

  while (!Frontier.empty()) {
    // Union the conditions for nodes in the same versioning
    auto OldEC = EC;
    for (auto *Ver : Frontier) {
      SmallVector<Item> Items;
      for (auto N : Ver->Nodes) {
        if (auto *I = N.asInstruction())
          Items.push_back(I);
        else if (auto *VL = N.asLoop())
          Items.push_back(VL);
      }
      if (Items.empty())
        continue;
      auto I0 = Items.front();
      for (auto I : Items)
        EC.unionSets(I, I0);
    }

    if (!isVersioningPlanFeasibleImpl(Frontier, DepsToIgnore, EC, DepChecker,
                                      CST, PSSA, SE))
      return false;

    SmallVector<Versioning *> NewFrontier;
    for (auto *Ver : Frontier) {
      for (auto Edge : make_first_range(Ver->CutEdges))
        DepsToIgnore.insert(Edge);
      if (Ver->Primary)
        NewFrontier.push_back(Ver->Primary);
    }
    Frontier = std::move(NewFrontier);
    EC = std::move(OldEC);
  }

  return true;
}
