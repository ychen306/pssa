#include "BlockBuilder.h"
#include "PSSA.h"
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

  void demotePhi(PredicatedSSA *PSSA, PHINode *PN);

  DenseMap<PHINode *, Value *> ReplacedPhis;

public:
  PSSALowering(Function *F) : F(F), Ctx(F->getContext()) {}
  void run(VLoop *TopLevelVL);
};
} // namespace

void PSSALowering::demotePhi(PredicatedSSA *PSSA, PHINode *PN) {
  // Demote the phi to memory
  auto *Alloca = new AllocaInst(PN->getType(), 0, nullptr/*ArraySize*/,
      Align(), PN->getName() + ".demoted");
  Allocas.push_back(Alloca);
  PSSA->getEntry().insert(Alloca, nullptr);

  auto InsertPt = PSSA->getInsertPoint(PN);
  auto *VL = InsertPt.VL;
  for (unsigned i = 0; i < PN->getNumIncomingValues(); i++) {
    auto *SI = new StoreInst(PN->getIncomingValue(i), Alloca, false/*isVolatile*/,
        Align());
    InsertPt.insert(SI, VL->getPhiCondition(PN, i));
  }

  auto *Reload = new LoadInst(PN->getType(), Alloca, PN->getName() + ".reload", false/*isVolatile*/,
      Align());
  auto *Cond = VL->getInstCond(PN);
  InsertPt.insert(Reload, Cond);
  PN->replaceAllUsesWith(Reload);
  ReplacedPhis[PN] = Reload;
  VL->erase(InsertPt.It);
}

static void fixDefUseDominance(Function *F, DominatorTree &DT) {
  // Find instructions not dominating their uses.
  // This happens when we move things across branches.
  DenseMap<Instruction *, SmallVector<Instruction *, 4>> BrokenUseDefs;
  for (Instruction &I : instructions(F)) {
    for (User *U : I.users()) {
      // Special case when the user is a phi-node
      if (auto *PN = dyn_cast<PHINode>(U)) {
        BasicBlock *IncomingBlock;
        Value *IncomingValue;
        for (auto Incoming : zip(PN->blocks(), PN->incoming_values())) {
          std::tie(IncomingBlock, IncomingValue) = Incoming;
          if (IncomingValue == &I &&
              !DT.dominates(I.getParent(), IncomingBlock)) {
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
  for (auto &KV : BrokenUseDefs) {
    Instruction *I = KV.first;
    ArrayRef<Instruction *> Users = KV.second;

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
    BranchInst::Create(Header /*if true*/, Preheader /*insert at end*/);

    ShouldContinueAlloca =
      createAlloca(Type::getInt1Ty(Ctx), "should.continue.mem", Header);
    // intialize it to false
    new StoreInst(ConstantInt::getFalse(Ctx), ShouldContinueAlloca, Header);
    // We will wire latch with exit and header later
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
      BasicBlock *SubLoopHeader, *SubLoopExit;
      auto *LoopCond = SubVL->getLoopCond();
      BasicBlock *Preheader = BBuilder.getBlockFor(LoopCond);
      std::tie(SubLoopHeader, SubLoopExit) = lower(SubVL, Preheader);
      BBuilder.setBlockForCondition(SubLoopExit, LoopCond);
      continue;
    }

    auto *I = InstOrLoop.asInstruction();
    assert(I);

    auto *Cond = VL->getInstCond(I);

    auto *PN = dyn_cast<PHINode>(I);
    if (!PN) {
      moveToEnd(I, BBuilder.getBlockFor(Cond));
      continue;
    }

    assert(VL->isMu(PN));

    if (VL->isMu(PN)) {
      assert(Preheader && Header && Latch);
      moveToBegin(PN, Header);
      PN->setIncomingBlock(0, Preheader);
      PN->setIncomingBlock(1, Latch);
      continue;
    }

    //// Demote the phi to memory
    //auto *Alloca =
    //  createAlloca(PN->getType(), PN->getName() + ".demoted", Entry);
    //for (unsigned i = 0; i < PN->getNumIncomingValues(); i++) {
    //  auto *EdgeCond = VL->getPhiCondition(PN, i);
    //  new StoreInst(PN->getIncomingValue(i), Alloca,
    //      BBuilder.getBlockFor(EdgeCond));
    //}

    //auto *Reload =
    //  new LoadInst(PN->getType(), Alloca, PN->getName() + ".reload",
    //      BBuilder.getBlockFor(Cond));
    //PN->replaceAllUsesWith(Reload);
    //ReplacedPhis[PN] = Reload;
  }

  // We are done if we are lowering the top-level "loop"
  if (!VL->isLoop())
    return {nullptr, nullptr};

  // Conditionally set the continue flag dependending on the backedge condition
  assert(ShouldContinueAlloca);
  new StoreInst(ConstantInt::getTrue(Ctx), ShouldContinueAlloca,
      BBuilder.getBlockFor(VL->getBackEdgeCond()));

  // Join all the control-flow to the latch
  BranchInst::Create(Latch, BBuilder.getBlockFor(nullptr));
  assert(!Latch->getTerminator());
  // Figure out whether we should exit the loop or continue
  auto *ShouldContinue = new LoadInst(
      Type::getInt1Ty(Ctx), ShouldContinueAlloca, "should.continue", Latch);
  BranchInst::Create(Header, Exit, ShouldContinue, Latch);

  return {Header, Exit};
}

void PSSALowering::run(VLoop *TopLevelVL) {
  // demote the phi nodes to make lowering easier (so we don't have to consider them)
  SmallVector<PHINode *> Phis;
  SmallVector<VLoop *> Worklist { TopLevelVL };
  while (!Worklist.empty()) {
    auto *VL = Worklist.pop_back_val();
    for (auto &InstOrLoop : VL->items()) {
      if (auto *PN = dyn_cast_or_null<PHINode>(InstOrLoop.asInstruction())) {
        if (!VL->isMu(PN))
          Phis.push_back(PN);
      } else if (auto *SubVL = InstOrLoop.asLoop()) {
        Worklist.push_back(SubVL);
      }
    }
  }
  auto *PSSA = TopLevelVL->getPSSA();
  for (auto *PN : Phis)
    demotePhi(PSSA, PN);


  // Now actually do the lowering
  F->dropAllReferences();

  Entry = BasicBlock::Create(Ctx, "entry", F);

  lower(TopLevelVL, nullptr /* preheader */);

  // Kill all of the forward phis which we've replaced with allocas
  for (auto &KV : ReplacedPhis)
    delete KV.first;

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
  PSSALowering Lowering(F);
  Lowering.run(&PSSA.getTopLevel());
}
