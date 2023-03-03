#include "DependenceChecker.h"
#include "InstructionDescriptor.h"
#include "LooseInstructionTable.h"
#include "Matcher.h"
#include "Reducer.h"
#include "Reduction.h"
#include "pssa/Lower.h"
#include "pssa/PSSA.h"
#include "vegen/Lower.h"
#include "vegen/Pack.h"
#include "llvm/Analysis/AliasAnalysis.h"
#include "llvm/Analysis/DependenceAnalysis.h"
#include "llvm/Analysis/LoopInfo.h"
#include "llvm/Analysis/PostDominators.h"
#include "llvm/Analysis/ScalarEvolution.h"
#include "llvm/IR/Dominators.h"
#include "llvm/IR/InstIterator.h"
#include "llvm/Support/CommandLine.h"

using namespace llvm;

namespace {
cl::list<std::string>
    InstsToPack("p", cl::desc("<comma-separted list of instructions to pack>"));

cl::opt<std::string> ReductionToPack("rdx-to-pack",
                                     cl::desc("<reduction to pack>"));

cl::opt<unsigned> ReductionWidth("rdx-width",
                                 cl::desc("<size of the horizontal reduction>"),
                                 cl::init(4));

cl::opt<bool> RemoveDeadInsts(
    "remove-dead-insts",
    cl::desc("remove instructions killed by reductions before lowering"),
    cl::init(false));

cl::opt<bool> ReplaceInsts("replace-insts",
                           cl::desc("replace reduction producing instructions "
                                    "by re-lowering those reductions"),
                           cl::init(false));

cl::opt<bool> DisableReductionPacking(
    "disable-reduction-packing",
    cl::desc("bother the operands of <rdx-to-pack> and produce them as scalar"),
    cl::init(false));
} // namespace

static Operation *sext(const Operation *X, unsigned N) {
  return new ConvertOperation(Instruction::SExt, N, X);
}

static Operation *mul(const Operation *A, const Operation *B) {
  return new ReductionOperation(RecurKind::Mul, {A, B});
}

static Operation *add(const Operation *A, const Operation *B) {
  return new ReductionOperation(RecurKind::Add, {A, B});
}

// (add (mul (sext a1) (sext b1)) (mul (sext a2) (sext b2)))
static Operation *buildMulAdd() {
  auto *a1 = sext(new InputOperation(0, 16), 32);
  auto *b1 = sext(new InputOperation(1, 16), 32);
  auto *a2 = sext(new InputOperation(2, 16), 32);
  auto *b2 = sext(new InputOperation(3, 16), 32);
  return add(mul(a1, b1), mul(a2, b2));
}

static std::vector<InstructionDescriptor> TestInsts;
ArrayRef<InstructionDescriptor> getTestInsts() {
  if (!TestInsts.empty())
    return TestInsts;
  auto *MulAdd = buildMulAdd();
  ElementBinding a1{0, 0};
  ElementBinding a2{0, 1};
  ElementBinding a3{0, 2};
  ElementBinding a4{0, 3};
  ElementBinding a5{0, 4};
  ElementBinding a6{0, 5};
  ElementBinding a7{0, 6};
  ElementBinding a8{0, 7};
  ElementBinding b1{1, 0};
  ElementBinding b2{1, 1};
  ElementBinding b3{1, 2};
  ElementBinding b4{1, 3};
  ElementBinding b5{1, 4};
  ElementBinding b6{1, 5};
  ElementBinding b7{1, 6};
  ElementBinding b8{1, 7};
  TestInsts.push_back(InstructionDescriptor(
      "pmaddwd128", {VectorSize{128, 16}, VectorSize{128, 16}},
      {
          {MulAdd, {a2, b2, a1, b1}},
          {MulAdd, {a4, b4, a3, b3}},
          {MulAdd, {a6, b6, a5, b5}},
          {MulAdd, {a8, b8, a7, b7}},
      }));
  return TestInsts;
}

// Decompose a list of reductions with "real" instructions and pack those
// instructions
template <typename InstType>
static Pack *decomposeAndPack(PredicatedSSA &PSSA, ReductionInfo &RI,
                              LooseInstructionTable &LIT,
                              ArrayRef<InstType *> Insts) {
  auto *Rdx0 = dyn_cast<Reduction>(Insts.front());
  if (!Rdx0)
    return nullptr;

  auto *PN0 = RI.unwrapCondition(Rdx0, LIT);
  // See if we can unwrap the whole pack of instructions
  SmallVector<Instruction *, 4> PNs = {PN0};
  for (auto *I : drop_begin(Insts)) {
    auto *Rdx = dyn_cast<Reduction>(I);
    if (!Rdx)
      return nullptr;
    auto *PN = RI.unwrapCondition(Rdx, LIT);
    if (!PN)
      continue;
    PNs.push_back(PN);
  }
  if (PNs.size() == Insts.size())
    return BlendPack::create(PNs, true /*is one-hot*/, PSSA);

  SmallVector<Instruction *, 4> Reducers;
  for (auto *I : Insts) {
    auto *Rdx = dyn_cast<Reduction>(I);
    if (!Rdx)
      return nullptr;
    auto *R = RI.decomposeWithBinary(Rdx, LIT);
    if (!R)
      return nullptr;
    Reducers.push_back(R);
  }
  return SIMDPack::tryPack(Reducers);
}

// FIXME: move this into util
template <typename SourceTy, typename DestTy>
static Optional<SmallVector<DestTy *>> cast_many(ArrayRef<SourceTy *> Xs) {
  SmallVector<DestTy *> Ys;
  for (auto *X : Xs) {
    auto *Y = dyn_cast<DestTy>(X);
    if (!Y)
      return None;
    Ys.push_back(Y);
  }
  return Ys;
}

// Light-weight bottom-up heuristic for packing reductions
static void packReductions(ArrayRef<Reduction *> Rdxs,
                           SmallVectorImpl<Pack *> &Packs, PredicatedSSA &PSSA,
                           ReductionInfo &RI, LooseInstructionTable &LIT,
                           Matcher &TheMatcher) {
  std::function<void(ArrayRef<Reduction *>)> PackRec =
      [&](ArrayRef<Reduction *> Rdxs) {
        Pack *P = nullptr;

        // Prioritize instructions from the test instruction pool
        for (auto &InstrDesc : getTestInsts()) {
          P = GeneralPack::tryPack(
              InstrDesc, *cast_many<Reduction, Instruction>(Rdxs), TheMatcher);
          if (P)
            break;
          // See if we can rewrite the reduction to enable matching
          SmallVector<Reduction *> AuxRdxs;
          for (auto [BoundOp, Rdx] :
               llvm::zip(InstrDesc.getOperations(), Rdxs)) {
            auto Res = TheMatcher.match(BoundOp.Op, Rdx);
            auto *AuxRdx = Res.dyn_cast<Reduction *>();
            if (!AuxRdx)
              break;
            AuxRdxs.push_back(AuxRdx);
          }
          if (AuxRdxs.size() == Rdxs.size())
            return PackRec(AuxRdxs);
        }

        if (!P)
          P = decomposeAndPack(PSSA, RI, LIT, Rdxs);
        if (!P) {
          // If we fail to decompose, try to unwrap a loop level
          SmallVector<Reduction *> InnerRdxs;
          for (auto *Rdx : Rdxs) {
            auto *InnerRdx = RI.unwrapLoop(Rdx, LIT);
            if (!InnerRdx)
              return;
            InnerRdxs.push_back(InnerRdx);
          }
          PackRec(InnerRdxs);
          return;
        }
        Packs.push_back(P);

        for (auto O : P->getOperands()) {
          if (all_of(O, [&](auto *V) { return LIT.isLooseMu(V); })) {
            Packs.push_back(MuPack::create(*cast_many<Value, Instruction>(O)));
            continue;
          }

          if (auto SubRdxs = cast_many<Value, Reduction>(O))
            PackRec(*SubRdxs);
        }
      };
  PackRec(Rdxs);
}

static const InstructionDescriptor &getInstByName(StringRef Name) {
  for (auto &InstDesc : getTestInsts()) {
    if (InstDesc.getName() == Name)
      return InstDesc;
  }
  llvm_unreachable("Can't find requested instruction");
}

PreservedAnalyses TestVectorGen::run(Function &F, FunctionAnalysisManager &AM) {
  auto &SE = AM.getResult<ScalarEvolutionAnalysis>(F);
  auto &DL = F.getParent()->getDataLayout();
  auto &LI = AM.getResult<LoopAnalysis>(F);
  auto &DT = AM.getResult<DominatorTreeAnalysis>(F);
  auto &PDT = AM.getResult<PostDominatorTreeAnalysis>(F);
  auto &DI = AM.getResult<DependenceAnalysis>(F);
  auto &AA = AM.getResult<AAManager>(F);
  PredicatedSSA PSSA(&F, LI, DT, PDT, &SE);
  ReductionInfo RI(PSSA);
  LooseInstructionTable LIT;
  Matcher TheMatcher(RI, LIT);

  DenseMap<StringRef, Instruction *> NameToInstMap;
  DenseMap<StringRef, Instruction *> NameToStoreMap;
  Reduction *Rdx = nullptr;
  for (auto &I : instructions(&F)) {
    if (I.hasName())
      NameToInstMap[I.getName()] = &I;
    if (auto *SI = dyn_cast<StoreInst>(&I)) {
      auto *V = SI->getValueOperand();
      if (V->hasName())
        NameToStoreMap[V->getName()] = SI;
    }
    if (I.getName() == ReductionToPack)
      Rdx = RI.getReductionFor(&I);
  }
  assert(ReductionToPack.empty() || Rdx);

  SmallVector<Pack *> Packs;
  for (StringRef Arg : InstsToPack) {
    SmallVector<StringRef> Names;
    Arg.split(Names, ',');
    StringRef Opcode;
    if (Names.back().contains("/")) {
      auto [a, b] = Names.back().split('/');
      Names.back() = a;
      Opcode = b;
    }

    SmallVector<Instruction *> Insts;
    for (StringRef Name : Names) {
      Instruction *I = nullptr;
      if (Name.startswith("storeOf:")) {
        I = NameToStoreMap.lookup(
            Name.drop_front(StringRef("storeOf:").size()));
      } else {
        I = NameToInstMap.lookup(Name);
      }
      assert(I);
      Insts.push_back(I);
    }

    if (!Opcode.empty()) {
      if (Opcode == "bottom-up") {
        SmallVector<Reduction *> Rdxs;
        for (auto *I : Insts) {
          auto *Rdx = RI.getReductionFor(I);
          if (!Rdx)
            break;
          Rdxs.push_back(Rdx);
        }
        if (Rdxs.size() != Insts.size())
          continue;
        packReductions(Rdxs, Packs, PSSA, RI, LIT, TheMatcher);
      } else {
        // Pack with the user specified vector instruction
        auto &InstrDesc = getInstByName(Opcode);
        auto *Pack = GeneralPack::tryPack(InstrDesc, Insts, TheMatcher);
        assert(Pack && "failed to pack with specified instruction");
        Packs.push_back(Pack);
      }
    } else if (auto *Pack = SIMDPack::tryPack(Insts)) {
      Packs.push_back(Pack);
    } else if (auto *P = GEPPack::tryPack(Insts)) {
      Packs.push_back(P);
    } else if (auto *PhiP = PHIPack::tryPack(Insts, PSSA)) {
      Packs.push_back(PhiP);
    } else if (auto *MuP = MuPack::tryPack(Insts, PSSA)) {
      Packs.push_back(MuP);
    } else if (auto *BlendP = BlendPack::tryPack(Insts, PSSA)) {
      Packs.push_back(BlendP);
    } else if (auto *LoadP = LoadPack::tryPack(Insts, DL, SE, LI, PSSA)) {
      Packs.push_back(LoadP);
    } else if (auto *StoreP = StorePack::tryPack(Insts, DL, SE, LI, PSSA)) {
      Packs.push_back(StoreP);
    } else if (auto *GatherP = GatherPack::tryPack(Insts, PSSA)) {
      Packs.push_back(GatherP);
    } else {
      errs() << "failed to pack specified insts\n";
      return PreservedAnalyses::all();
    }

    errs() << "Packing " << *Packs.back() << '\n';
  }

  auto DeadInsts = findDeadInsts(RI, PSSA);

  if (Rdx) {
    errs() << "Packing reduction " << *Rdx << '\n';
    SmallVector<Reduction *, 4> SubRdxs;
    RI.split(Rdx, std::min<unsigned>(ReductionWidth, Rdx->Elements.size()),
             SubRdxs);
    // Produce the decomposed reductions as a vector
    if (!DisableReductionPacking)
      packReductions(SubRdxs, Packs, PSSA, RI, LIT, TheMatcher);
    errs() << "!!! num packs " << Packs.size() << '\n';
    auto *RootR =
        LIT.getOrCreateReducer(Rdx, *cast_many<Reduction, Value>(SubRdxs));

    // Pack the final horizontal reduction
    Packs.push_back(new ReductionPack(RootR));
  }

  DependenceChecker DepChecker(PSSA, DI, AA, LI, &DeadInsts);
  // Insert all of the loose instructions resulting from
  // matching and packing the reductions
  SmallVector<Instruction *> LooseInsts;
  for (auto *P : Packs)
    P->getLooseInsts(LooseInsts, LIT);
  bool Ok = LIT.insertInto(LooseInsts, PSSA, DepChecker, RI);
  if (!Ok)
    return PreservedAnalyses::none();
  if (RemoveDeadInsts)
    removeDeadInsts(&PSSA.getTopLevel(), DeadInsts);
  // Lower any un-decomposed reductions as scalars
  lowerReductions(RI, PSSA, LIT, DepChecker, ReplaceInsts);

  LIT.destroy();

  Ok = lower(Packs, PSSA, DI, AA, LI);
  assert(Ok && "can't lower due to circular dep");
  lowerPSSAToLLVM(&F, PSSA);

  for (auto *P : Packs)
    delete P;

  return PreservedAnalyses::none();
}
