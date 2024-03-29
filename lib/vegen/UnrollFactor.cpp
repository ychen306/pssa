#include "UnrollFactor.h"
#include "Heuristics.h"
#include "LoopUnrolling.h"
#include "LooseInstructionTable.h"
#include "Matcher.h"
#include "Reduction.h"
#include "pssa/PSSA.h"
#include "vegen/Pack.h"
#include "llvm/ADT/Triple.h"
#include "llvm/Analysis/AliasAnalysis.h"
#include "llvm/Analysis/BasicAliasAnalysis.h"
#include "llvm/Analysis/CallGraph.h"
#include "llvm/Analysis/DependenceAnalysis.h"
#include "llvm/Analysis/GlobalsModRef.h"
#include "llvm/Analysis/LoopInfo.h"
#include "llvm/Analysis/MemoryBuiltins.h"
#include "llvm/Analysis/PhiValues.h"
#include "llvm/Analysis/PostDominators.h"
#include "llvm/Analysis/ScalarEvolution.h"
#include "llvm/Analysis/ScopedNoAliasAA.h"
#include "llvm/Analysis/TargetLibraryInfo.h"
#include "llvm/Analysis/TypeBasedAliasAnalysis.h"
#include "llvm/IR/Dominators.h"
#include "llvm/IR/InstIterator.h"
#include "llvm/Support/CommandLine.h"
#include "llvm/Transforms/Utils/Cloning.h"
#include "llvm/Transforms/Utils/ScalarEvolutionExpander.h"

using namespace llvm;

namespace {
struct Range {
  bool Initialized;
  unsigned Lo, Hi; // inclusive
  Range() : Initialized(false) {}
  unsigned size() const { return Hi - Lo + 1; }
  void update(unsigned X) {
    if (!Initialized) {
      Lo = Hi = X;
      Initialized = true;
      return;
    }

    if (X < Lo)
      Lo = X;
    else if (X > Hi)
      Hi = X;
  }
};
__attribute__((unused)) raw_ostream &operator<<(raw_ostream &OS,
                                                const Range &R) {
  return OS << '[' << R.Lo << ',' << R.Hi << ']';
}

} // namespace

void unrollLoops(
    ScalarEvolution &SE, LoopInfo &LI, AssumptionCache &AC, DominatorTree &DT,
    TargetTransformInfo *TTI, const DenseMap<Loop *, unsigned> &UFs,
    DenseMap<Loop *, UnrolledLoopTy> &DupToOrigLoopMap,
    DenseMap<Instruction *, UnrolledInstruction> *UnrolledIterations,
    DenseSet<BasicBlock *> *EpilogBlocks,
    EquivalenceClasses<BasicBlock *> *UnrolledBlocks) {

  auto GetOrigLoop = [&DupToOrigLoopMap](Loop *L) {
    auto It = DupToOrigLoopMap.find(L);
    if (It != DupToOrigLoopMap.end())
      return It->second.OrigLoop;
    return L;
  };

  SmallVector<Loop *, 8> Worklist;
  Worklist.assign(LI.begin(), LI.end());
  while (!Worklist.empty()) {
    Loop *L = Worklist.pop_back_val();
    auto *ParentLoop = L->getParentLoop();

    unsigned UF = UFs.lookup(GetOrigLoop(L));
    if (UF <= 1) {
      Worklist.append(L->begin(), L->end());
      continue;
    }

    unsigned TripCount = SE.getSmallConstantMaxTripCount(L);
    if (TripCount && TripCount < UF)
      UF = TripCount;

    UnrollLoopOptions ULO;
    ULO.Count = UF;
    ULO.Force = true;
    ULO.Runtime = true;
    ULO.AllowExpensiveTripCount = true;
    ULO.ForgetAllSCEV = false;
    ULO.UnrollRemainder = false;

    ValueMap<Value *, UnrolledValue> UnrollToOrigMap;
    Loop *EpilogL = nullptr;
    auto UnrollResult = UnrollLoopWithVMap(L, ULO, &LI, &SE, &DT, &AC, TTI,
                                           true, UnrollToOrigMap, &EpilogL);
    if (EpilogBlocks && EpilogL && EpilogL->getNumBlocks())
      EpilogBlocks->insert(EpilogL->block_begin(), EpilogL->block_end());

    // Figure out the new sub loops
    SmallVector<Loop *> NewSubLoops;
    // Map the cloned sub loops back to original loops
    for (auto KV : UnrollToOrigMap) {
      auto *BB = dyn_cast<BasicBlock>(KV.first);
      if (BB && UnrolledBlocks)
        UnrolledBlocks->unionSets(
            BB, const_cast<BasicBlock *>(cast<BasicBlock>(KV.second.V)));

      auto *NewLoop = LI.getLoopFor(BB);
      if (BB && UnrolledIterations) {
        for (auto &I : *BB) {
          auto It = UnrollToOrigMap.find(&I);
          if (It != UnrollToOrigMap.end() &&
              isa_and_nonnull<Instruction>(It->second.V)) {
            const Instruction *SrcI = cast<Instruction>(It->second.V);
            if (UnrolledIterations->count(SrcI))
              SrcI = UnrolledIterations->lookup(SrcI).OrigI;
            // If the loop of the unrolled block belongs to a loop different
            // to the one we start with, it means we are unrolling the outer
            // loop, which means that the inner unroll iter should be zero.
            unsigned InnerIter = NewLoop == L ? It->second.Iter : 0;
            UnrolledIterations->insert({&I, {SrcI, InnerIter}});
          }
        }
      }

      if (!BB || !LI.isLoopHeader(BB) || NewLoop == L)
        continue;
      auto *OrigBB = cast<BasicBlock>(KV.second.V);
      DupToOrigLoopMap.try_emplace(NewLoop, GetOrigLoop(LI.getLoopFor(OrigBB)),
                                   KV.second.Iter);
      if (UnrollResult == LoopUnrollResult::FullyUnrolled &&
          NewLoop->getParentLoop() == ParentLoop)
        NewSubLoops.push_back(NewLoop);
    }

    // Unroll the sub loops
    if (UnrollResult == LoopUnrollResult::FullyUnrolled)
      Worklist.append(NewSubLoops.begin(), NewSubLoops.end());
    else
      Worklist.append(L->begin(), L->end());
  }
}

static void refineUnrollFactors(Function *F, DominatorTree &DT, LoopInfo &LI,
                                ArrayRef<InstructionDescriptor> InstPool,
                                TargetTransformInfo *TTI,
                                DenseMap<Loop *, unsigned> &UFs) {
  // Compute some analysis for the unroller
  Module *M = F->getParent();
  AssumptionCache AC(*F);
  TargetLibraryInfoWrapperPass TLIWrapper(Triple(M->getTargetTriple()));
  ScalarEvolution SE(*F, TLIWrapper.getTLI(*F), AC, DT, LI);

  DenseMap<Loop *, UnrolledLoopTy> DupToOrigLoopMap;
  // Mapping a basic block to its unrolled iteration
  DenseMap<Instruction *, UnrolledInstruction> UnrolledIterations;
  DenseSet<Loop *> OrigLoops;
  for (auto *L : LI.getLoopsInPreorder()) {
    assert(L->isRecursivelyLCSSAForm(DT, LI) &&
           "loops sshould be in lcssa form before unrolling");
    OrigLoops.insert(L);
  }

  auto GetOrigLoop = [&](Loop *L) {
    assert(OrigLoops.count(L) || DupToOrigLoopMap.count(L));
    return OrigLoops.count(L) ? L : DupToOrigLoopMap.lookup(L).OrigLoop;
  };

  // Unroll all the loops maximally
  DenseMap<Loop *, unsigned> MaxUFs = UFs;
  UFs.clear();
  DenseSet<BasicBlock *> EpilogBlocks;
  EquivalenceClasses<BasicBlock *> UnrolledBlocks;
  unrollLoops(SE, LI, AC, DT, TTI, MaxUFs, DupToOrigLoopMap,
              &UnrolledIterations, &EpilogBlocks, &UnrolledBlocks);

  // Re-do the alias analysis pipline
  auto GetTLI = [&TLIWrapper](Function &F) -> TargetLibraryInfo & {
    return TLIWrapper.getTLI(F);
  };
  AAResultsBuilder AABuilder(*M, *F, GetTLI, AC, DT);
  AAResults &AA = AABuilder.getResult();
  CachingAA CAA(AA);
  WrappedDependenceInfo DI(*F);
  PostDominatorTree PDT(*F);

  PredicatedSSA PSSA(F, LI, DT, PDT, &SE);
  ReductionInfo RI(PSSA);
  LooseInstructionTable LIT;
  Matcher TheMatcher(RI, LIT);

  VersioningPlan VerPlan;
  std::vector<Pack *> Packs =
      packBottomUp(InstPool, VerPlan, PSSA, RI, LIT, TheMatcher,
                   F->getParent()->getDataLayout(), SE, DT, LI, CAA, DI, *TTI);

  // Count how many loop reductions each loop has
  DenseMap<Loop *, unsigned> LoopToReductionCounts;
  for (auto *P : Packs) {
    if (auto *RP = dyn_cast<ReductionPack>(P)) {
      if (auto *L = PSSA.getOrigLoop(RP->getLoop())) {
        // Each loop reduction has n+1 operands,
        // where n being the number of independent accumulators
        LoopToReductionCounts[L] += RP->getOperands().size() - 1;
      }
      continue;
    }

    std::map<Loop *, Range> PackedIterations;
    for (auto *I : P->values()) {
      // FIXME: we don't have a good way to track the versions of "unrolled"
      // loose instructions
      if (!I || LIT.isLoose(I))
        continue;
      auto *BB = I->getParent();
      auto *L = LI.getLoopFor(BB);
      if (!L)
        continue;
      PackedIterations[L].update(
          UnrolledIterations.count(I) ? UnrolledIterations.lookup(I).Iter : 0);
      for (/*L = L->getParentLoop()*/; L; L = L->getParentLoop()) {
        PackedIterations[L->getParentLoop()].update(
            DupToOrigLoopMap.count(L) ? DupToOrigLoopMap.lookup(L).Iter : 0);
      }
    }
    for (const auto &LoopAndRange : PackedIterations) {
      Loop *L = LoopAndRange.first;
      const Range &R = LoopAndRange.second;

      // Ignore epilog loops
      if (!OrigLoops.count(L) && !DupToOrigLoopMap.count(L))
        continue;

      unsigned MinUF = std::max<unsigned>(PowerOf2Ceil(R.size()),
                                          UFs.lookup(GetOrigLoop(L)));
      if (R.Lo / MinUF != R.Hi / MinUF)
        MinUF *= 2;

      std::remove_reference<decltype(UFs)>::type::iterator It;
      bool Inserted;
      std::tie(It, Inserted) = UFs.try_emplace(GetOrigLoop(L), MinUF);
      if (!Inserted)
        It->second = std::max(It->second, MinUF);
    }
  }

  for (auto [L, NumRdxs]: LoopToReductionCounts) {
    if (!OrigLoops.count(L))
      continue;
    if (!NumRdxs)
      continue;
    UFs[L] = PowerOf2Ceil(UFs[L]) * divideCeil(2, NumRdxs);
    errs() << "Adjusted uf = " << UFs[L]
      << ", num reductions = " << NumRdxs
      << '\n';
  }

  LIT.destroy();

  for (auto &Pair : UFs)
    Pair.second = PowerOf2Ceil(Pair.second);
}

void computeUnrollFactorImpl(ArrayRef<InstructionDescriptor> InstPool,
                             TargetTransformInfo *TTI, Function *OrigF,
                             const LoopInfo &OrigLI,
                             DenseMap<Loop *, unsigned> &UFs) {
  ValueToValueMapTy VMap;
  Function *F = CloneFunction(OrigF, VMap);
  DominatorTree DT(*F);
  LoopInfo LI(DT);

  // Nothing to unroll
  if (LI.getTopLevelLoops().empty()) {
    F->eraseFromParent();
    return;
  }

  // Mapping the old loops to the cloned loops
  DenseMap<Loop *, unsigned> RefinedUnrollFactors;
  DenseMap<Loop *, Loop *> CloneToOrigMap;
  for (auto &OrigBB : *OrigF) {
    auto *BB = cast<BasicBlock>(VMap[&OrigBB]);
    Loop *OrigL = OrigLI.getLoopFor(&OrigBB);
    if (!OrigL)
      continue;
    Loop *L = LI.getLoopFor(BB);
    bool Inserted = CloneToOrigMap.try_emplace(L, OrigL).second;
    if (!Inserted)
      continue;
    if (unsigned UF = UFs.lookup(OrigL))
      RefinedUnrollFactors.try_emplace(L, UF);
  }

  refineUnrollFactors(F, DT, LI, InstPool, TTI, RefinedUnrollFactors);

  UFs.clear();
  for (auto KV : RefinedUnrollFactors) {
    Loop *L = KV.first;
    unsigned UF = KV.second;
    assert(CloneToOrigMap.count(L));
    UFs.try_emplace(CloneToOrigMap.lookup(L), UF);
  }

  // Erase the clone after we are done
  F->eraseFromParent();
}

static bool isCountable(Loop *L, ScalarEvolution &SE) {
  return !isa<SCEVCouldNotCompute>(SE.getBackedgeTakenCount(L));
}

void computeUnrollFactor(ArrayRef<InstructionDescriptor> InstPool,
                         TargetTransformInfo *TTI, Function *F,
                         const LoopInfo &LI, DenseMap<Loop *, unsigned> &UFs) {
  DominatorTree DT(*F);
  AssumptionCache AC(*F);
  TargetLibraryInfoWrapperPass TLIWrapper(Triple(F->getParent()->getTargetTriple()));
  ScalarEvolution SE(*F, TLIWrapper.getTLI(*F), AC, DT, const_cast<LoopInfo &>(LI));

  DenseSet<Loop *> UnrolledLoops;
  for (auto *L : const_cast<LoopInfo &>(LI).getLoopsInPreorder()) {
    if (!isCountable(L, SE))
      continue;
    if (any_of(UnrolledLoops,
               [L](Loop *UnrolledL) { return UnrolledL->contains(L); })) {
      UFs[L] = 0;
      continue;
    }
    UFs[L] = 16;
    computeUnrollFactorImpl(InstPool, TTI, F, LI, UFs);
    errs() << "Unroll factor for loop " << L << "(depth=" << L->getLoopDepth()
           << ')' << " " << UFs.lookup(L) << '\n';
    if (UFs[L] > 1) {
      UnrolledLoops.insert(L);
    }

    errs() << "========= temp unroll plan ========\n";
    for (auto *L : const_cast<LoopInfo &>(LI).getLoopsInPreorder()) {
      errs() << "Unroll factor for loop " << L << "(depth=" << L->getLoopDepth()
        << ')' << " " << UFs.lookup(L) << '\n';
    }
  }
  for (auto &KV : UFs) {
    if (!UnrolledLoops.count(KV.first))
      KV.second = 0;
  }
  errs() << "========= final unroll plan ========\n";
  for (auto *L : const_cast<LoopInfo &>(LI).getLoopsInPreorder()) {
    errs() << "Unroll factor for loop " << L << "(depth=" << L->getLoopDepth()
           << ')' << " " << UFs.lookup(L) << '\n';
  }
}
