#include "Matcher.h"
#include "InstructionDescriptor.h"
#include "LooseInstructionTable.h"
#include "Reducer.h"
#include "Reduction.h"

using namespace llvm;

Match *Matcher::match(const Operation *Op, Instruction *Root) {
  auto [It, Inserted] = Matches.try_emplace(MatchKey(Op, Root));
  if (!Inserted)
    return It->second.get();

  SmallVector<Use *> LiveIns;
  // Add a substitution, return if there's a conflict.
  auto AddLiveIn = [&LiveIns](unsigned i, Use *U) -> bool {
    if (LiveIns.size() >= i)
      LiveIns.resize(i, nullptr);
    if (LiveIns[i] && LiveIns[i] != U)
      return false;
    LiveIns[i] = U;
    return true;
  };

  // List of things we want to match
  using ValueOrUse = PointerUnion<Value *, Use *>;
  SmallVector<std::pair<const Operation *, ValueOrUse>> Worklist{{Op, Root}};
  while (!Worklist.empty()) {
    auto [Op, ValOrUse] = Worklist.pop_back_val();

    auto *U = ValOrUse.dyn_cast<Use *>();
    auto *V = U ? U->get() : ValOrUse.get<Value *>();

    // Abort if the bit width doesn't match
    auto *Ty = V->getType();
    if (!Ty->isSized() || Ty->getScalarSizeInBits() != Op->size())
      return nullptr;

    if (auto *Input = dyn_cast<InputOperation>(Op)) {
      assert(U);
      if (!AddLiveIn(Input->id(), U))
        return nullptr;
      continue;
    }
    // For most operation the matched value is the same as V;
    // But if V is a reduction, its matched value is a Reducer.
    Value *MatchedValue = nullptr;
    if (auto *ReductionOp = dyn_cast<ReductionOperation>(Op)) {
      auto Operands = Op->getOperands();
      // FIXME: deal with multi-way reduction later
      assert(Operands.size() == 2);
      Reduction *Rdx = dyn_cast<Reduction>(V);
      if (Rdx && Rdx->Kind == ReductionOp->getReductionKind())
        MatchedValue = RI.decomposeWithBinary(Rdx, LIT);
    } else if (auto *Select = dyn_cast<SelectOperation>(Op)) {
      MatchedValue = dyn_cast<SelectInst>(V);
    } else if (auto *Binary = dyn_cast<BinaryOperation>(Op)) {
      auto *BO = dyn_cast<BinaryOperator>(V);
      if (BO && BO->getOpcode() == Binary->getOpcode())
        MatchedValue = BO;
    } else if (auto *ConvOp = dyn_cast<ConvertOperation>(Op)) {
      auto *Conv = dyn_cast<CastInst>(V);
      if (Conv && Conv->getOpcode() == ConvOp->getOpcode())
        MatchedValue = Conv;
    } else if (auto *CmpOp = dyn_cast<CompareOperation>(Op)) {
      auto *Cmp = dyn_cast<CmpInst>(V);
      if (Cmp && Cmp->getPredicate() == CmpOp->getPredicate())
        MatchedValue = Cmp;
    } else {
      auto *ConstOp = cast<ConstantOperation>(Op);
      auto *C = dyn_cast<ConstantInt>(V);
      if (C && APInt::isSameValue(ConstOp->getConst(), C->getValue()))
        MatchedValue = C;
    }

    if (!MatchedValue)
      return nullptr;

    auto Operands = Op->getOperands();
    if (Operands.empty())
      continue;

    // Recursively match the operands
    for (auto [Op2, U2] :
         llvm::zip(Operands, cast<User>(MatchedValue)->operands()))
      Worklist.emplace_back(Op2, U2);
  }
  
  auto *M = new Match;
  M->Root = Root;
  M->LiveIns = std::move(LiveIns);
  It->second.reset(M);
  return M;
}
