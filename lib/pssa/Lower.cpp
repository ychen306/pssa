#include "BlockBuilder.h"
#include "pssa/PSSA.h"
#include "llvm/IR/Constants.h"
#include "llvm/IR/Dominators.h"
#include "llvm/IR/Function.h"
#include "llvm/IR/InstIterator.h"
#include "llvm/IR/Instructions.h"
#include "llvm/IR/Verifier.h"
#include "llvm/Support/CommandLine.h"
#include "llvm/Transforms/Utils/PromoteMemToReg.h"

using namespace llvm;

namespace {

cl::opt<bool>
    DumpBeforeErasing("dump-before-erasing",
                      cl::desc("dump function before erasing old basic blocks"),
                      cl::init(false));

class BatchedPhi {
  VLoop *VL;
  VLoop::ItemIterator It;
  SmallVector<PHINode *> Phis;
public:
  BatchedPhi(PredicatedSSA *PSSA, PHINode *PN)
    : VL(PSSA->getLoopForInst(PN)), It(PSSA->toIterator(PN)), Phis({PN}) {}
  bool tryAdd(PredicatedSSA *PSSA, PHINode *);
  unsigned size() const { return Phis.size(); }
  ArrayRef<PHINode *> phis() const { return Phis; }
};

class PSSALowering {
  Function *F;
  LLVMContext &Ctx;
  BasicBlock *Entry; // The new entry block for F

  // Lower a vloop and return the loop-header and exit.
  std::pair<BasicBlock *, BasicBlock *> lower(VLoop *VL, BasicBlock *Preheader);

  SmallVector<AllocaInst *> Allocas;
  AllocaInst *createAlloca(Type *Ty, const Twine &Name, BasicBlock *BB) {
    AllocaInst *Alloca;
    if (!BB->empty())
      Alloca = new AllocaInst(Ty, 0, Name, &BB->front());
    else
      Alloca = new AllocaInst(Ty, 0, Name, BB);
    Allocas.push_back(Alloca);
    return Alloca;
  }

  void demoteBatchedPhis(PredicatedSSA *PSSA, const BatchedPhi &);
  void demotePhi(PredicatedSSA *PSSA, PHINode *PN);

  DenseMap<PHINode *, Value *> ReplacedPhis;

public:
  PSSALowering(Function *F) : F(F), Ctx(F->getContext()) {}
  void run(VLoop *TopLevelVL);
};
} // namespace


void PSSALowering::demoteBatchedPhis(PredicatedSSA *PSSA,
                                     const BatchedPhi &BP) {
  DenseMap<PHINode *, AllocaInst *> BatchAllocas;
  for (auto *PN : BP.phis()) {
    auto *Alloca = new AllocaInst(PN->getType(), 0, nullptr /*ArraySize*/,
                                  Align(), PN->getName() + ".demoted");
    Allocas.push_back(Alloca);
    BatchAllocas.try_emplace(PN, Alloca);
    PSSA->getEntry().insert(Alloca, nullptr);
  }

  auto Phis = BP.phis();
  PHINode *Leader = Phis.front();
  auto InsertPt = PSSA->getInsertPoint(Leader);
  auto *VL = InsertPt.VL;

  unsigned NumValues = Leader->getNumOperands();
  // Lower one incoming conditions at a time to reduce branching
  for (unsigned i = 0; i < NumValues; i++) {
    auto *C = VL->getPhiCondition(Leader, i);
    for (auto *PN : Phis) {
      auto *V = PN->getIncomingValue(i);
      auto *SI = new StoreInst(V, BatchAllocas.lookup(PN), false /*isVolatile*/,
                               Align());
      InsertPt.insert(SI, C);
    }
  }

  for (auto *PN : Phis) {
    auto *Reload =
        new LoadInst(PN->getType(), BatchAllocas.lookup(PN),
                     PN->getName() + ".reload", false /*isVolatile*/, Align());
    auto *Cond = VL->getInstCond(PN);
    InsertPt.insert(Reload, Cond);
    PN->replaceAllUsesWith(Reload);
    ReplacedPhis[PN] = Reload;
  }
  for (auto *PN : Phis)
    VL->erase(PN);
}

void PSSALowering::demotePhi(PredicatedSSA *PSSA, PHINode *PN) {
  // Demote the phi to memory
  auto *Alloca = new AllocaInst(PN->getType(), 0, nullptr /*ArraySize*/,
                                Align(), PN->getName() + ".demoted");
  Allocas.push_back(Alloca);
  PSSA->getEntry().insert(Alloca, nullptr);

  auto InsertPt = PSSA->getInsertPoint(PN);
  auto *VL = InsertPt.VL;
  // Because we place the default (IfFalse) value
  // first the IfTrue assignment (which comes later)
  // will override the IfFalse initialization.
#if 0
  assert((!VL->isOneHotPhi(PN) ||
          VL->getPhiConditions(PN).front() == VL->getInstCond(PN)) &&
         "one-hot phis should the IfTrue value last");
#endif

  for (auto [C, V] : zip(VL->getPhiConditions(PN), PN->incoming_values())) {
    auto *SI = new StoreInst(V, Alloca, false /*isVolatile*/, Align());
    InsertPt.insert(SI, C);
  }

  auto *Reload = new LoadInst(PN->getType(), Alloca, PN->getName() + ".reload",
                              false /*isVolatile*/, Align());
  auto *Cond = VL->getInstCond(PN);
  InsertPt.insert(Reload, Cond);
  PN->replaceAllUsesWith(Reload);
  ReplacedPhis[PN] = Reload;
  VL->erase(InsertPt.It);
}

static void fixDefUseDominance(Function *F, DominatorTree &DT) {
  F->dump();
  // Find instructions not dominating their uses.
  // This happens when we move things across branches.
  DenseMap<Instruction *, SmallVector<Instruction *, 4>> BrokenUseDefs;
  for (Instruction &I : instructions(F)) {
    for (User *U : I.users()) {
      // Special case when the user is a phi-node
      if (auto *PN = dyn_cast<PHINode>(U)) {
        for (auto [BB, V] : zip(PN->blocks(), PN->incoming_values())) {
          if (V == &I && !DT.dominates(I.getParent(), BB)) {
            BrokenUseDefs[&I].push_back(PN);
            break;
          }
        }
        continue;
      }

      auto *UserInst = dyn_cast<Instruction>(U);
      if (UserInst && !DT.dominates(&I, UserInst))
        BrokenUseDefs[&I].push_back(UserInst);
    }
  }

  SmallVector<AllocaInst *> Allocas;
  for (const auto &[I, Users] : BrokenUseDefs) {
    auto *Alloca = new AllocaInst(I->getType(), 0, I->getName() + ".mem",
                                  &*F->getEntryBlock().getFirstInsertionPt());
    new StoreInst(I, Alloca, I->getNextNode());
    Allocas.push_back(Alloca);
    for (Instruction *UserInst : Users) {
      if (auto *PN = dyn_cast<PHINode>(UserInst)) {
        // Need to do the reload in predecessor for the phinodes
        for (unsigned i = 0; i < PN->getNumIncomingValues(); i++) {
          Value *V = PN->getIncomingValue(i);
          if (V != I)
            continue;
          auto *Reload = new LoadInst(
              I->getType(), Alloca, I->getName() + ".reload",
              PN->getIncomingBlock(i)->getTerminator() /*insert before*/);
          PN->setIncomingValue(i, Reload);
        }
        continue;
      }
      auto *Reload =
          new LoadInst(I->getType(), Alloca, I->getName() + ".reload",
                       UserInst /*insert before*/);
      UserInst->replaceUsesOfWith(I, Reload);
    }
  }

  PromoteMemToReg(Allocas, DT);
  assert(!verifyFunction(*F, &errs()));
}

// Move I to the end of BB
static void moveToEnd(Instruction *I, BasicBlock *BB) {
  if (I->getParent())
    I->removeFromParent();
  BB->getInstList().push_back(I);
  assert(I->getParent() == BB);
}

static void moveToBegin(Instruction *I, BasicBlock *BB) {
  if (I->getParent())
    I->removeFromParent();
  BB->getInstList().push_front(I);
}

std::pair<BasicBlock *, BasicBlock *>
PSSALowering::lower(VLoop *VL, BasicBlock *Preheader) {
  BasicBlock *Header = nullptr;
  BasicBlock *Latch = nullptr;
  BasicBlock *Exit = nullptr;

  // Allocate an alloca that tells us whether we should exit the loop
  AllocaInst *ShouldContinueAlloca = nullptr;
  if (VL->isLoop()) {
    Header = BasicBlock::Create(Ctx, "header", F);
    Latch = BasicBlock::Create(Ctx, "latch", F);
    Exit = BasicBlock::Create(Ctx, "exit", F);
    // Branch from preheader to the header.
    // We will wire latch with exit and header later
    BranchInst::Create(Header /*if true*/, Preheader /*insert at end*/);

    ShouldContinueAlloca =
        createAlloca(Type::getInt1Ty(Ctx), "should.continue.mem", Header);
    // intialize it to false
    new StoreInst(ConstantInt::getFalse(Ctx), ShouldContinueAlloca, Header);

    // Lower the Mu nodes
    for (auto *PN : VL->mus()) {
      assert(Preheader && Header && Latch);
      moveToBegin(PN, Header);
      PN->setIncomingBlock(0, Preheader);
      PN->setIncomingBlock(1, Latch);
    }
  }

  auto UseScalar = [&](Value *V) {
    auto *PN = dyn_cast<PHINode>(V);
    if (PN && ReplacedPhis.count(PN))
      return ReplacedPhis.lookup(PN);
    return V;
  };
  BlockBuilder BBuilder(VL->isLoop() ? Header : Entry, UseScalar);

  // Lower the loop items in order
  for (auto &InstOrLoop : VL->items()) {
    // Emit the sub-loop recursively
    if (auto *SubVL = InstOrLoop.asLoop()) {
      auto *LoopCond = SubVL->getLoopCond();
      BasicBlock *Preheader = BBuilder.getBlockFor(LoopCond);
      auto [SubLoopHeader, SubLoopExit] = lower(SubVL, Preheader);
      BBuilder.setBlockForCondition(SubLoopExit, LoopCond);
    } else {
      auto *I = InstOrLoop.asInstruction();
      assert(I);
      auto *Cond = VL->getInstCond(I);
      assert(!isa<PHINode>(I) && "Phis should have been demoted");
      moveToEnd(I, BBuilder.getBlockFor(Cond));
    }
  }

  // We are done if we are lowering the top-level "loop"
  if (!VL->isLoop())
    return {nullptr, nullptr};

  // Try to match the simple case where
  // the continue condition is just a boolean IR value
  Value *ContCond = nullptr;
  if (auto *And = dyn_cast_or_null<ConditionAnd>(VL->getBackEdgeCond());
      And && !And->Parent && And->IsTrue) {
    ContCond = And->Cond;
  }

  // If there's a complex continue condition ...
  if (!ContCond) {
    // Conditionally set the continue flag dependending on the backedge
    // condition
    assert(ShouldContinueAlloca);
    new StoreInst(ConstantInt::getTrue(Ctx), ShouldContinueAlloca,
                  BBuilder.getBlockFor(VL->getBackEdgeCond()));
  }

  // Join all the control-flow to the latch
  BranchInst::Create(Latch, BBuilder.getBlockFor(nullptr));
  assert(!Latch->getTerminator());
  // Figure out whether we should exit the loop or continue
  if (!ContCond)
    ContCond = new LoadInst(Type::getInt1Ty(Ctx), ShouldContinueAlloca,
                            "should.continue", Latch);
  BranchInst::Create(Header, Exit, ContCond, Latch);

  return {Header, Exit};
}

bool BatchedPhi::tryAdd(PredicatedSSA *PSSA, PHINode *PN) {
  // Only batch phi nodes that appear together
  if (PSSA->getLoopForInst(PN) != VL)
    return false;
  if (std::next(It) != PSSA->toIterator(PN))
    return false;

  PHINode *Leader = Phis.front();
  if (PN->getNumOperands() != Leader->getNumOperands())
    return false;
  for (auto [C1, C2] :
      llvm::zip(PSSA->getPhiConditions(Leader), PSSA->getPhiConditions(PN)))
    if (C1 != C2)
      return false;
  ++It;
  Phis.push_back(PN);
  return true;
}

static std::vector<BatchedPhi> batchPhis(PredicatedSSA *PSSA,
                                         ArrayRef<PHINode *> Phis) {
  if (Phis.empty())
    return {};

  std::vector<BatchedPhi> Batches;
  Batches.emplace_back(PSSA, Phis.front());

  for (auto *PN : drop_begin(Phis)) {
    if (Batches.back().tryAdd(PSSA, PN))
      continue;
    Batches.emplace_back(PSSA, PN);
  }

  return Batches;
}

void PSSALowering::run(VLoop *TopLevelVL) {
  // Demote the phi nodes to make lowering easier
  // so that we don't have to consider them.
  SmallVector<PHINode *> Phis;
  SmallVector<VLoop *> Worklist{TopLevelVL};
  while (!Worklist.empty()) {
    auto *VL = Worklist.pop_back_val();
    for (auto &InstOrLoop : VL->items()) {
      if (auto *PN = dyn_cast_or_null<PHINode>(InstOrLoop.asInstruction())) {
        assert(!VL->isMu(PN) && "mu nodes shouldn't be items");
        Phis.push_back(PN);
      } else if (auto *SubVL = InstOrLoop.asLoop()) {
        Worklist.push_back(SubVL);
      }
    }
  }
  auto *PSSA = TopLevelVL->getPSSA();

#if 1
  auto BatchedPhis = batchPhis(PSSA, Phis);
  for (auto &BP : BatchedPhis)
    demoteBatchedPhis(PSSA, BP);
#else
  for (auto *PN : Phis)
    demotePhi(PSSA, PN);
#endif

  /////////
  // Now actually do the lowering
  //////////

  Entry = BasicBlock::Create(Ctx, "entry", F);

  lower(TopLevelVL, nullptr /* preheader */);

  // Kill all of the forward phis which we've replaced with allocas
  for (PHINode *PN : make_first_range(ReplacedPhis))
    delete PN;

  auto *RetTy = F->getReturnType();
  for (auto &BB : *F) {
    if (BB.getTerminator())
      continue;
    if (RetTy->isVoidTy())
      ReturnInst::Create(Ctx, &BB);
    else
      ReturnInst::Create(Ctx, Constant::getNullValue(RetTy), &BB);
  }

  // Restore SSA
  DominatorTree DT(*F);
  PromoteMemToReg(Allocas, DT);
  fixDefUseDominance(F, DT);
}

void lowerPSSAToLLVM(Function *F, PredicatedSSA &PSSA) {
  // Clean up the function before we start the lowering
  std::vector<Instruction *> Insts;
  for (auto &I : instructions(F))
    Insts.push_back(&I);
  std::vector<Instruction *> DeadInsts;
  for (auto *I : Insts) {
    if (PSSA.contains(I))
      I->removeFromParent();
    else // otherwise just remove the dead instructions
      DeadInsts.push_back(I);
  }
  for (auto *I : DeadInsts)
    I->dropAllReferences();
  for (auto *I : DeadInsts)
    I->eraseFromParent();
  F->dropAllReferences();

  PSSALowering Lowering(F);
  Lowering.run(&PSSA.getTopLevel());
}
