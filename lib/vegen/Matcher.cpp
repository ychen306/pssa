#include "Matcher.h"
#include "InstructionDescriptor.h"
#include "LooseInstructionTable.h"
#include "Reducer.h"
#include "Reduction.h"

using namespace llvm;

Match *Matcher::match(const Operation *Op, Instruction *Root) {
  assert(Op);

  auto [It, Inserted] = Matches.try_emplace(MatchKey(Op, Root));
  if (!Inserted)
    return It->second.get();

  decltype(Match::LooseInsts) LooseInsts;
  decltype(Match::LiveIns) LiveIns;
  // Add a substitution, return if there's a conflict.
  auto AddLiveIn = [&LiveIns](unsigned i, Value *V) -> bool {
    if (LiveIns.size() <= i)
      LiveIns.resize(i+1, nullptr);
    if (LiveIns[i] && LiveIns[i] != V)
      return false;
    LiveIns[i] = V;
    return true;
  };

  // List of things we want to match
  SmallVector<std::pair<const Operation *, Value *>> Worklist{{Op, Root}};
  while (!Worklist.empty()) {
    auto [Op, V] = Worklist.pop_back_val();

    // Abort if the bit width doesn't match
    auto *Ty = V->getType();
    if (!Ty->isSized() || Ty->getScalarSizeInBits() != Op->size())
      return nullptr;

    if (auto *Input = dyn_cast<InputOperation>(Op)) {
      if (!AddLiveIn(Input->id(), V))
        return nullptr;
      continue;
    }
    // For most operation the matched value is the same as V;
    // But if V is a reduction, its matched value is a Reducer.
    Value *MatchedValue = nullptr;
    // FIXME: deal with the case of V being a simple reduction not not reported by RI
    if (auto *ReductionOp = dyn_cast<ReductionOperation>(Op)) {
      auto Operands = Op->getOperands();
      // FIXME: deal with multi-way reduction later
      assert(Operands.size() == 2);
      Reduction *Rdx = dyn_cast<Reduction>(V);
      if (!Rdx)
        Rdx = RI.getReductionFor(V);
      if (Rdx && Rdx->Kind == ReductionOp->getReductionKind()) {
        MatchedValue = RI.decomposeWithBinary(Rdx, LIT);
        if (LIT.isLoose(MatchedValue))
          LooseInsts.push_back(cast<Instruction>(MatchedValue));
      }
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

    auto Operands = Op->getOperands();
    if (Operands.empty())
      continue;

    // Recursively match the operands
    for (auto [Op2, V2] :
         llvm::zip(Operands, cast<User>(MatchedValue)->operand_values()))
      Worklist.emplace_back(Op2, V2);

    if (V == Root)
      Root = cast<Instruction>(MatchedValue);
  }
  
  auto *M = new Match;
  M->Root = Root;
  M->LiveIns = std::move(LiveIns);
  M->LooseInsts = LooseInsts;
  It->second.reset(M);
  return M;
}
