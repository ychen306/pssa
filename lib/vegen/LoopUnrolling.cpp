#include "LoopUnrolling.h"
#include "llvm/ADT/ArrayRef.h"
#include "llvm/ADT/DenseMap.h"
#include "llvm/ADT/Optional.h"
#include "llvm/ADT/STLExtras.h"
#include "llvm/ADT/SetVector.h"
#include "llvm/ADT/SmallVector.h"
#include "llvm/ADT/Statistic.h"
#include "llvm/ADT/StringRef.h"
#include "llvm/ADT/Twine.h"
#include "llvm/ADT/ilist_iterator.h"
#include "llvm/ADT/iterator_range.h"
#include "llvm/Analysis/AssumptionCache.h"
#include "llvm/Analysis/DomTreeUpdater.h"
#include "llvm/Analysis/InstructionSimplify.h"
#include "llvm/Analysis/LoopInfo.h"
#include "llvm/Analysis/LoopIterator.h"
#include "llvm/Analysis/OptimizationRemarkEmitter.h"
#include "llvm/Analysis/ScalarEvolution.h"
#include "llvm/IR/BasicBlock.h"
#include "llvm/IR/CFG.h"
#include "llvm/IR/Constants.h"
#include "llvm/IR/DebugInfoMetadata.h"
#include "llvm/IR/DebugLoc.h"
#include "llvm/IR/DiagnosticInfo.h"
#include "llvm/IR/Dominators.h"
#include "llvm/IR/Function.h"
#include "llvm/IR/Instruction.h"
#include "llvm/IR/Instructions.h"
#include "llvm/IR/IntrinsicInst.h"
#include "llvm/IR/Metadata.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/Use.h"
#include "llvm/IR/User.h"
#include "llvm/IR/ValueHandle.h"
#include "llvm/IR/ValueMap.h"
#include "llvm/Support/Casting.h"
#include "llvm/Support/CommandLine.h"
#include "llvm/Support/Debug.h"
#include "llvm/Support/GenericDomTree.h"
#include "llvm/Support/MathExtras.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/Transforms/Utils/BasicBlockUtils.h"
#include "llvm/Transforms/Utils/Cloning.h"
#include "llvm/Transforms/Utils/Local.h"
#include "llvm/Transforms/Utils/LoopPeel.h"
#include "llvm/Transforms/Utils/LoopSimplify.h"
#include "llvm/Transforms/Utils/LoopUtils.h"
#include "llvm/Transforms/Utils/SimplifyIndVar.h"
#include "llvm/Transforms/Utils/UnrollLoop.h"
#include "llvm/Transforms/Utils/ValueMapper.h"
#include <algorithm>
#include <assert.h>
#include <type_traits>
#include <vector>

using namespace llvm;

#define DEBUG_TYPE "vegen-loop-unroll"

static cl::opt<bool>
    UnrollRuntimeEpilog("vegen-unroll-runtime-epilog", cl::init(false),
                        cl::Hidden,
                        cl::desc("Allow runtime unrolled loops to be unrolled "
                                 "with epilog instead of prolog."));

static bool needToInsertPhisForLCSSA(Loop *L,
                                     const std::vector<BasicBlock *> &Blocks,
                                     LoopInfo *LI) {
  for (BasicBlock *BB : Blocks) {
    if (LI->getLoopFor(BB) == L)
      continue;
    for (Instruction &I : *BB) {
      for (Use &U : I.operands()) {
        if (const auto *Def = dyn_cast<Instruction>(U)) {
          Loop *DefLoop = LI->getLoopFor(Def->getParent());
          if (!DefLoop)
            continue;
          if (DefLoop->contains(L))
            return true;
        }
      }
    }
  }
  return false;
}

void simplifyLoopAfterUnroll2(Loop *L, bool SimplifyIVs, LoopInfo *LI,
                              ScalarEvolution *SE, DominatorTree *DT,
                              AssumptionCache *AC,
                              const TargetTransformInfo *TTI) {
  // Simplify any new induction variables in the partially unrolled loop.
  if (SE && SimplifyIVs) {
    SmallVector<WeakTrackingVH, 16> DeadInsts;
    simplifyLoopIVs(L, SE, DT, LI, TTI, DeadInsts);

    // Aggressively clean up dead instructions that simplifyLoopIVs already
    // identified. Any remaining should be cleaned up below.
    while (!DeadInsts.empty()) {
      Value *V = DeadInsts.pop_back_val();
      if (Instruction *Inst = dyn_cast_or_null<Instruction>(V))
        RecursivelyDeleteTriviallyDeadInstructions(Inst);
    }
  }

  // At this point, the code is well formed.  We now do a quick sweep over the
  // inserted code, doing constant propagation and dead code elimination as we
  // go.
  const DataLayout &DL = L->getHeader()->getModule()->getDataLayout();
  for (BasicBlock *BB : L->getBlocks()) {
    for (BasicBlock::iterator I = BB->begin(), E = BB->end(); I != E;) {
      Instruction *Inst = &*I++;

      if (Value *V = simplifyInstruction(Inst, {DL, nullptr, DT, AC}))
        if (LI->replacementPreservesLCSSAForm(Inst, V))
          Inst->replaceAllUsesWith(V);
      if (isInstructionTriviallyDead(Inst))
        BB->getInstList().erase(Inst);
    }
  }

  // TODO: after peeling or unrolling, previously loop variant conditions are
  // likely to fold to constants, eagerly propagating those here will require
  // fewer cleanup passes to be run.  Alternatively, a LoopEarlyCSE might be
  // appropriate.
}

static bool isEpilogProfitable(Loop *L) {
  BasicBlock *PreHeader = L->getLoopPreheader();
  BasicBlock *Header = L->getHeader();
  assert(PreHeader && Header);
  for (const PHINode &PN : Header->phis()) {
    if (isa<ConstantInt>(PN.getIncomingValueForBlock(PreHeader)))
      return true;
  }
  return false;
}

LoopUnrollResult
UnrollLoopWithVMap(Loop *L, UnrollLoopOptions ULO, LoopInfo *LI,
                   ScalarEvolution *SE, DominatorTree *DT, AssumptionCache *AC,
                   const TargetTransformInfo *TTI,
                   bool PreserveLCSSA,
                   ValueMap<llvm::Value *, UnrolledValue> &UnrollToOrigMap,
                   Loop **RemainderLoop) {
  assert(DT && "DomTree is required");

  if (!L->getLoopPreheader()) {
    LLVM_DEBUG(dbgs() << "  Can't unroll; loop preheader-insertion failed.\n");
    return LoopUnrollResult::Unmodified;
  }

  if (!L->getLoopLatch()) {
    LLVM_DEBUG(dbgs() << "  Can't unroll; loop exit-block-insertion failed.\n");
    return LoopUnrollResult::Unmodified;
  }

  // Loops with indirectbr cannot be cloned.
  if (!L->isSafeToClone()) {
    LLVM_DEBUG(dbgs() << "  Can't unroll; Loop body cannot be cloned.\n");
    return LoopUnrollResult::Unmodified;
  }

  if (L->getHeader()->hasAddressTaken()) {
    // The loop-rotate pass can be helpful to avoid this in many cases.
    LLVM_DEBUG(
        dbgs() << "  Won't unroll loop: address of header block is taken.\n");
    return LoopUnrollResult::Unmodified;
  }

  assert(ULO.Count > 0);

  // All these values should be taken only after peeling because they might have
  // changed.
  BasicBlock *Preheader = L->getLoopPreheader();
  BasicBlock *Header = L->getHeader();
  BasicBlock *LatchBlock = L->getLoopLatch();
  SmallVector<BasicBlock *, 4> ExitBlocks;
  L->getExitBlocks(ExitBlocks);
  std::vector<BasicBlock *> OriginalLoopBlocks = L->getBlocks();

  const unsigned MaxTripCount = SE->getSmallConstantMaxTripCount(L);
  const bool MaxOrZero = SE->isBackedgeTakenCountMaxOrZero(L);

  // Effectively "DCE" unrolled iterations that are beyond the max tripcount
  // and will never be executed.
  if (MaxTripCount && ULO.Count > MaxTripCount)
    ULO.Count = MaxTripCount;

  struct ExitInfo {
    unsigned TripCount;
    unsigned TripMultiple;
    unsigned BreakoutTrip;
    bool ExitOnTrue;
    SmallVector<BasicBlock *> ExitingBlocks;
  };
  DenseMap<BasicBlock *, ExitInfo> ExitInfos;
  SmallVector<BasicBlock *, 4> ExitingBlocks;
  L->getExitingBlocks(ExitingBlocks);
  for (auto *ExitingBlock : ExitingBlocks) {
    // The folding code is not prepared to deal with non-branch instructions
    // right now.
    auto *BI = dyn_cast<BranchInst>(ExitingBlock->getTerminator());
    if (!BI)
      continue;

    ExitInfo &Info = ExitInfos.try_emplace(ExitingBlock).first->second;
    Info.TripCount = SE->getSmallConstantTripCount(L, ExitingBlock);
    Info.TripMultiple = SE->getSmallConstantTripMultiple(L, ExitingBlock);
    if (Info.TripCount != 0) {
      Info.BreakoutTrip = Info.TripCount % ULO.Count;
      Info.TripMultiple = 0;
    } else {
      Info.BreakoutTrip = Info.TripMultiple =
          (unsigned)GreatestCommonDivisor64(ULO.Count, Info.TripMultiple);
    }
    Info.ExitOnTrue = !L->contains(BI->getSuccessor(0));
    Info.ExitingBlocks.push_back(ExitingBlock);
    LLVM_DEBUG(dbgs() << "  Exiting block %" << ExitingBlock->getName()
                      << ": TripCount=" << Info.TripCount
                      << ", TripMultiple=" << Info.TripMultiple
                      << ", BreakoutTrip=" << Info.BreakoutTrip << "\n");
  }

  // Are we eliminating the loop control altogether?  Note that we can know
  // we're eliminating the backedge without knowing exactly which iteration
  // of the unrolled body exits.
  const bool CompletelyUnroll = ULO.Count == MaxTripCount;

  const bool PreserveOnlyFirst = CompletelyUnroll && MaxOrZero;

  // There's no point in performing runtime unrolling if this unroll count
  // results in a full unroll.
  if (CompletelyUnroll)
    ULO.Runtime = false;

  // Go through all exits of L and see if there are any phi-nodes there. We just
  // conservatively assume that they're inserted to preserve LCSSA form, which
  // means that complete unrolling might break this form. We need to either fix
  // it in-place after the transformation, or entirely rebuild LCSSA. TODO: For
  // now we just recompute LCSSA for the outer loop, but it should be possible
  // to fix it in-place.
  bool NeedToFixLCSSA = PreserveLCSSA && CompletelyUnroll &&
                        any_of(ExitBlocks, [](const BasicBlock *BB) {
                          return isa<PHINode>(BB->begin());
                        });

  // The current loop unroll pass can unroll loops that have
  // (1) single latch; and
  // (2a) latch is unconditional; or
  // (2b) latch is conditional and is an exiting block
  // FIXME: The implementation can be extended to work with more complicated
  // cases, e.g. loops with multiple latches.
  BranchInst *LatchBI = dyn_cast<BranchInst>(LatchBlock->getTerminator());

  // A conditional branch which exits the loop, which can be optimized to an
  // unconditional branch in the unrolled loop in some cases.
  bool LatchIsExiting = L->isLoopExiting(LatchBlock);
  if (!LatchBI || (LatchBI->isConditional() && !LatchIsExiting)) {
    LLVM_DEBUG(
        dbgs() << "Can't unroll; a conditional latch must exit the loop");
    return LoopUnrollResult::Unmodified;
  }

  // Loops containing convergent instructions cannot use runtime unrolling,
  // as the prologue/epilogue may add additional control-dependencies to
  // convergent operations.
  LLVM_DEBUG({
    bool HasConvergent = false;
    for (auto &BB : L->blocks())
      for (auto &I : *BB)
        if (auto *CB = dyn_cast<CallBase>(&I))
          HasConvergent |= CB->isConvergent();
    assert((!HasConvergent || !ULO.Runtime) &&
           "Can't runtime unroll if loop contains a convergent operation.");
  });

  bool EpilogProfitability = UnrollRuntimeEpilog.getNumOccurrences()
                                 ? UnrollRuntimeEpilog
                                 : isEpilogProfitable(L);

  if (ULO.Runtime &&
      !UnrollRuntimeLoopRemainder(L, ULO.Count, ULO.AllowExpensiveTripCount,
                                  EpilogProfitability, ULO.UnrollRemainder,
                                  ULO.ForgetAllSCEV, LI, SE, DT, AC, TTI,
                                  PreserveLCSSA, RemainderLoop)) {
    if (ULO.Force)
      ULO.Runtime = false;
    else {
      LLVM_DEBUG(dbgs() << "Won't unroll; remainder loop could not be "
                           "generated when assuming runtime trip count\n");
      return LoopUnrollResult::Unmodified;
    }
  }

  using namespace ore;
  // Report the unrolling decision.
  if (CompletelyUnroll) {
    LLVM_DEBUG(dbgs() << "COMPLETELY UNROLLING loop %" << Header->getName()
                      << " with trip count " << ULO.Count << "!\n");
  } else {
    LLVM_DEBUG(dbgs() << "UNROLLING loop %" << Header->getName() << " by "
                      << ULO.Count);
    if (ULO.Runtime)
      LLVM_DEBUG(dbgs() << " with run-time trip count");
    LLVM_DEBUG(dbgs() << "!\n");
  }

  // We are going to make changes to this loop. SCEV may be keeping cached info
  // about it, in particular about backedge taken count. The changes we make
  // are guaranteed to invalidate this information for our loop. It is tempting
  // to only invalidate the loop being unrolled, but it is incorrect as long as
  // all exiting branches from all inner loops have impact on the outer loops,
  // and if something changes inside them then any of outer loops may also
  // change. When we forget outermost loop, we also forget all contained loops
  // and this is what we need here.
  if (SE) {
    if (ULO.ForgetAllSCEV)
      SE->forgetAllLoops();
    else
      SE->forgetTopmostLoop(L);
  }

  // For the first iteration of the loop, we should use the precloned values for
  // PHI nodes.  Insert associations now.
  ValueToValueMapTy LastValueMap;
  std::vector<PHINode *> OrigPHINode;
  for (BasicBlock::iterator I = Header->begin(); isa<PHINode>(I); ++I) {
    OrigPHINode.push_back(cast<PHINode>(I));
  }

  std::vector<BasicBlock *> Headers;
  std::vector<BasicBlock *> Latches;
  Headers.push_back(Header);
  Latches.push_back(LatchBlock);

  // The current on-the-fly SSA update requires blocks to be processed in
  // reverse postorder so that LastValueMap contains the correct value at each
  // exit.
  LoopBlocksDFS DFS(L);
  DFS.perform(LI);

  // Stash the DFS iterators before adding blocks to the loop.
  LoopBlocksDFS::RPOIterator BlockBegin = DFS.beginRPO();
  LoopBlocksDFS::RPOIterator BlockEnd = DFS.endRPO();

  std::vector<BasicBlock *> UnrolledLoopBlocks = L->getBlocks();

  // Loop Unrolling might create new loops. While we do preserve LoopInfo, we
  // might break loop-simplified form for these loops (as they, e.g., would
  // share the same exit blocks). We'll keep track of loops for which we can
  // break this so that later we can re-simplify them.
  SmallSetVector<Loop *, 4> LoopsToSimplify;
  for (Loop *SubLoop : *L)
    LoopsToSimplify.insert(SubLoop);

  // When a FSDiscriminator is enabled, we don't need to add the multiply
  // factors to the discriminators.
  if (Header->getParent()->isDebugInfoForProfiling() && !EnableFSDiscriminator)
    for (BasicBlock *BB : L->getBlocks())
      for (Instruction &I : *BB)
        if (!isa<DbgInfoIntrinsic>(&I))
          if (const DILocation *DIL = I.getDebugLoc()) {
            auto NewDIL = DIL->cloneByMultiplyingDuplicationFactor(ULO.Count);
            if (NewDIL)
              I.setDebugLoc(*NewDIL);
            else
              LLVM_DEBUG(dbgs()
                         << "Failed to create new discriminator: "
                         << DIL->getFilename() << " Line: " << DIL->getLine());
          }

  // Identify what noalias metadata is inside the loop: if it is inside the
  // loop, the associated metadata must be cloned for each iteration.
  SmallVector<MDNode *, 6> LoopLocalNoAliasDeclScopes;
  identifyNoAliasScopesToClone(L->getBlocks(), LoopLocalNoAliasDeclScopes);

  // We place the unrolled iterations immediately after the original loop
  // latch.  This is a reasonable default placement if we don't have block
  // frequencies, and if we do, well the layout will be adjusted later.
  auto BlockInsertPt = std::next(LatchBlock->getIterator());
  for (unsigned It = 1; It != ULO.Count; ++It) {
    SmallVector<BasicBlock *, 8> NewBlocks;
    SmallDenseMap<const Loop *, Loop *, 4> NewLoops;
    NewLoops[L] = L;

    for (LoopBlocksDFS::RPOIterator BB = BlockBegin; BB != BlockEnd; ++BB) {
      ValueToValueMapTy VMap;
      BasicBlock *New = CloneBasicBlock(*BB, VMap, "." + Twine(It));
      Header->getParent()->getBasicBlockList().insert(BlockInsertPt, New);

      UnrollToOrigMap[New] = UnrolledValue{It, *BB};

      assert((*BB != Header || LI->getLoopFor(*BB) == L) &&
             "Header should not be in a sub-loop");
      // Tell LI about New.
      const Loop *OldLoop = addClonedBlockToLoopInfo(*BB, New, LI, NewLoops);
      if (OldLoop)
        LoopsToSimplify.insert(NewLoops[OldLoop]);

      if (*BB == Header)
        // Loop over all of the PHI nodes in the block, changing them to use
        // the incoming values from the previous block.
        for (PHINode *OrigPHI : OrigPHINode) {
          PHINode *NewPHI = cast<PHINode>(VMap[OrigPHI]);
          Value *InVal = NewPHI->getIncomingValueForBlock(LatchBlock);
          if (Instruction *InValI = dyn_cast<Instruction>(InVal))
            if (It > 1 && L->contains(InValI))
              InVal = LastValueMap[InValI];
          VMap[OrigPHI] = InVal;
          New->getInstList().erase(NewPHI);
        }

      // Update our running map of newest clones
      LastValueMap[*BB] = New;
      for (ValueToValueMapTy::iterator VI = VMap.begin(), VE = VMap.end();
           VI != VE; ++VI) {
        LastValueMap[VI->first] = VI->second;
        UnrollToOrigMap[VI->second] =
            UnrolledValue{It, const_cast<Value *>(VI->first)};
      }

      // Add phi entries for newly created values to all exit blocks.
      for (BasicBlock *Succ : successors(*BB)) {
        if (L->contains(Succ))
          continue;
        for (PHINode &PHI : Succ->phis()) {
          Value *Incoming = PHI.getIncomingValueForBlock(*BB);
          ValueToValueMapTy::iterator It = LastValueMap.find(Incoming);
          if (It != LastValueMap.end())
            Incoming = It->second;
          PHI.addIncoming(Incoming, New);
        }
      }
      // Keep track of new headers and latches as we create them, so that
      // we can insert the proper branches later.
      if (*BB == Header)
        Headers.push_back(New);
      if (*BB == LatchBlock)
        Latches.push_back(New);

      // Keep track of the exiting block and its successor block contained in
      // the loop for the current iteration.
      auto ExitInfoIt = ExitInfos.find(*BB);
      if (ExitInfoIt != ExitInfos.end())
        ExitInfoIt->second.ExitingBlocks.push_back(New);

      NewBlocks.push_back(New);
      UnrolledLoopBlocks.push_back(New);

      // Update DomTree: since we just copy the loop body, and each copy has a
      // dedicated entry block (copy of the header block), this header's copy
      // dominates all copied blocks. That means, dominance relations in the
      // copied body are the same as in the original body.
      if (*BB == Header)
        DT->addNewBlock(New, Latches[It - 1]);
      else {
        auto BBDomNode = DT->getNode(*BB);
        auto BBIDom = BBDomNode->getIDom();
        BasicBlock *OriginalBBIDom = BBIDom->getBlock();
        DT->addNewBlock(
            New, cast<BasicBlock>(LastValueMap[cast<Value>(OriginalBBIDom)]));
      }
    }

    // Remap all instructions in the most recent iteration
    remapInstructionsInBlocks(NewBlocks, LastValueMap);
    for (BasicBlock *NewBlock : NewBlocks)
      for (Instruction &I : *NewBlock)
        if (auto *II = dyn_cast<AssumeInst>(&I))
          AC->registerAssumption(II);

    {
      // Identify what other metadata depends on the cloned version. After
      // cloning, replace the metadata with the corrected version for both
      // memory instructions and noalias intrinsics.
      std::string ext = (Twine("It") + Twine(It)).str();
      cloneAndAdaptNoAliasScopes(LoopLocalNoAliasDeclScopes, NewBlocks,
                                 Header->getContext(), ext);
    }
  }

  // Loop over the PHI nodes in the original block, setting incoming values.
  for (PHINode *PN : OrigPHINode) {
    if (CompletelyUnroll) {
      PN->replaceAllUsesWith(PN->getIncomingValueForBlock(Preheader));
      Header->getInstList().erase(PN);
    } else if (ULO.Count > 1) {
      Value *InVal = PN->removeIncomingValue(LatchBlock, false);
      // If this value was defined in the loop, take the value defined by the
      // last iteration of the loop.
      if (Instruction *InValI = dyn_cast<Instruction>(InVal)) {
        if (L->contains(InValI))
          InVal = LastValueMap[InVal];
      }
      assert(Latches.back() == LastValueMap[LatchBlock] && "bad last latch");
      PN->addIncoming(InVal, Latches.back());
    }
  }

  // Connect latches of the unrolled iterations to the headers of the next
  // iteration. Currently they point to the header of the same iteration.
  for (unsigned i = 0, e = Latches.size(); i != e; ++i) {
    unsigned j = (i + 1) % e;
    Latches[i]->getTerminator()->replaceSuccessorWith(Headers[i], Headers[j]);
  }

  // Update dominators of blocks we might reach through exits.
  // Immediate dominator of such block might change, because we add more
  // routes which can lead to the exit: we can now reach it from the copied
  // iterations too.
  if (ULO.Count > 1) {
    for (auto *BB : OriginalLoopBlocks) {
      auto *BBDomNode = DT->getNode(BB);
      SmallVector<BasicBlock *, 16> ChildrenToUpdate;
      for (auto *ChildDomNode : BBDomNode->children()) {
        auto *ChildBB = ChildDomNode->getBlock();
        if (!L->contains(ChildBB))
          ChildrenToUpdate.push_back(ChildBB);
      }
      // The new idom of the block will be the nearest common dominator
      // of all copies of the previous idom. This is equivalent to the
      // nearest common dominator of the previous idom and the first latch,
      // which dominates all copies of the previous idom.
      BasicBlock *NewIDom = DT->findNearestCommonDominator(BB, LatchBlock);
      for (auto *ChildBB : ChildrenToUpdate)
        DT->changeImmediateDominator(ChildBB, NewIDom);
    }
  }

  assert(DT->verify(DominatorTree::VerificationLevel::Fast));

  DomTreeUpdater DTU(DT, DomTreeUpdater::UpdateStrategy::Lazy);

  auto SetDest = [&](BasicBlock *Src, bool WillExit, bool ExitOnTrue) {
    auto *Term = cast<BranchInst>(Src->getTerminator());
    const unsigned Idx = ExitOnTrue ^ WillExit;
    BasicBlock *Dest = Term->getSuccessor(Idx);
    BasicBlock *DeadSucc = Term->getSuccessor(1 - Idx);

    // Remove predecessors from all non-Dest successors.
    DeadSucc->removePredecessor(Src, /* KeepOneInputPHIs */ true);

    // Replace the conditional branch with an unconditional one.
    BranchInst::Create(Dest, Term);
    Term->eraseFromParent();

    DTU.applyUpdates({{DominatorTree::Delete, Src, DeadSucc}});
  };

  auto WillExit = [&](const ExitInfo &Info, unsigned i, unsigned j,
                      bool IsLatch) -> Optional<bool> {
    if (CompletelyUnroll) {
      if (PreserveOnlyFirst) {
        if (i == 0)
          return None;
        return j == 0;
      }
      // Complete (but possibly inexact) unrolling
      if (j == 0)
        return true;
      if (Info.TripCount && j != Info.TripCount)
        return false;
      return None;
    }

    if (ULO.Runtime) {
      // If runtime unrolling inserts a prologue, information about non-latch
      // exits may be stale.
      if (IsLatch && j != 0)
        return false;
      return None;
    }

    if (j != Info.BreakoutTrip &&
        (Info.TripMultiple == 0 || j % Info.TripMultiple != 0)) {
      // If we know the trip count or a multiple of it, we can safely use an
      // unconditional branch for some iterations.
      return false;
    }
    return None;
  };

  // Fold branches for iterations where we know that they will exit or not
  // exit.
  for (const auto &Pair : ExitInfos) {
    const ExitInfo &Info = Pair.second;
    for (unsigned i = 0, e = Info.ExitingBlocks.size(); i != e; ++i) {
      // The branch destination.
      unsigned j = (i + 1) % e;
      bool IsLatch = Pair.first == LatchBlock;
      Optional<bool> KnownWillExit = WillExit(Info, i, j, IsLatch);
      if (!KnownWillExit)
        continue;

      // We don't fold known-exiting branches for non-latch exits here,
      // because this ensures that both all loop blocks and all exit blocks
      // remain reachable in the CFG.
      // TODO: We could fold these branches, but it would require much more
      // sophisticated updates to LoopInfo.
      if (*KnownWillExit && !IsLatch)
        continue;

      SetDest(Info.ExitingBlocks[i], *KnownWillExit, Info.ExitOnTrue);
    }
  }

  // When completely unrolling, the last latch becomes unreachable.
  if (!LatchIsExiting && CompletelyUnroll)
    changeToUnreachable(Latches.back()->getTerminator(), PreserveLCSSA, &DTU);

  // Merge adjacent basic blocks, if possible.
  for (BasicBlock *Latch : Latches) {
    BranchInst *Term = dyn_cast<BranchInst>(Latch->getTerminator());
    assert((Term ||
            (CompletelyUnroll && !LatchIsExiting && Latch == Latches.back())) &&
           "Need a branch as terminator, except when fully unrolling with "
           "unconditional latch");
    if (Term && Term->isUnconditional()) {
      BasicBlock *Dest = Term->getSuccessor(0);
      BasicBlock *Fold = Dest->getUniquePredecessor();
      if (MergeBlockIntoPredecessor(Dest, &DTU, LI)) {
        // Dest has been folded into Fold. Update our worklists accordingly.
        std::replace(Latches.begin(), Latches.end(), Dest, Fold);
        llvm::erase_value(UnrolledLoopBlocks, Dest);
      }
    }
  }
  // Apply updates to the DomTree.
  DT = &DTU.getDomTree();

  assert(DT->verify(DominatorTree::VerificationLevel::Fast));

  // At this point, the code is well formed.  We now simplify the unrolled loop,
  // doing constant propagation and dead code elimination as we go.
  simplifyLoopAfterUnroll2(L, !CompletelyUnroll && ULO.Count > 1, LI, SE, DT,
                           AC, TTI);

  Loop *OuterL = L->getParentLoop();
  // Update LoopInfo if the loop is completely removed.
  if (CompletelyUnroll)
    LI->erase(L);

  // LoopInfo should not be valid, confirm that.
  LI->verify(*DT);

  // After complete unrolling most of the blocks should be contained in OuterL.
  // However, some of them might happen to be out of OuterL (e.g. if they
  // precede a loop exit). In this case we might need to insert PHI nodes in
  // order to preserve LCSSA form.
  // We don't need to check this if we already know that we need to fix LCSSA
  // form.
  // TODO: For now we just recompute LCSSA for the outer loop in this case, but
  // it should be possible to fix it in-place.
  if (PreserveLCSSA && OuterL && CompletelyUnroll && !NeedToFixLCSSA)
    NeedToFixLCSSA |=
        ::needToInsertPhisForLCSSA(OuterL, UnrolledLoopBlocks, LI);

  // Make sure that loop-simplify form is preserved. We want to simplify
  // at least one layer outside of the loop that was unrolled so that any
  // changes to the parent loop exposed by the unrolling are considered.
  if (OuterL) {
    // OuterL includes all loops for which we can break loop-simplify, so
    // it's sufficient to simplify only it (it'll recursively simplify inner
    // loops too).
    if (NeedToFixLCSSA) {
      // LCSSA must be performed on the outermost affected loop. The unrolled
      // loop's last loop latch is guaranteed to be in the outermost loop
      // after LoopInfo's been updated by LoopInfo::erase.
      Loop *LatchLoop = LI->getLoopFor(Latches.back());
      Loop *FixLCSSALoop = OuterL;
      if (!FixLCSSALoop->contains(LatchLoop))
        while (FixLCSSALoop->getParentLoop() != LatchLoop)
          FixLCSSALoop = FixLCSSALoop->getParentLoop();

      formLCSSARecursively(*FixLCSSALoop, *DT, LI, SE);
    } else if (PreserveLCSSA) {
      assert(OuterL->isLCSSAForm(*DT) &&
             "Loops should be in LCSSA form after loop-unroll.");
    }

    // TODO: That potentially might be compile-time expensive. We should try
    // to fix the loop-simplified form incrementally.
    simplifyLoop(OuterL, DT, LI, SE, AC, nullptr, PreserveLCSSA);
  } else {
    // Simplify loops for which we might've broken loop-simplify form.
    for (Loop *SubLoop : LoopsToSimplify)
      simplifyLoop(SubLoop, DT, LI, SE, AC, nullptr, PreserveLCSSA);
  }

  return CompletelyUnroll ? LoopUnrollResult::FullyUnrolled
                          : LoopUnrollResult::PartiallyUnrolled;
}
