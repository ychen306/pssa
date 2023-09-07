#include "WrappedDependenceInfo.h"
#include "llvm/ADT/Triple.h"
#include "llvm/Transforms/Utils/Cloning.h"

using namespace llvm;

WrappedDependenceInfo::WrappedDependenceInfo(Function &OrigF)
    : M(OrigF.getParent()), F(CloneFunction(&OrigF, VMap)), DT(*F), LI(DT),
      TLIWrapper(Triple(M->getTargetTriple())), AC(*F),
      SE(*F, TLIWrapper.getTLI(*F), AC, DT, LI),
      AABuilder(
          *M, *F,
          [&](Function &F) -> TargetLibraryInfo & {
            return TLIWrapper.getTLI(F);
          },
          AC, DT),
      DI(F, &AABuilder.getResult(), &SE, &LI) {}

std::unique_ptr<Dependence>
WrappedDependenceInfo::depends(Instruction *I1, Instruction *I2,
                               bool PossiblyLoopIndependent) {
  Value *OrigI1 = VMap.lookup(I1);
  Value *OrigI2 = VMap.lookup(I2);
  assert(OrigI1 && OrigI2);
  return DI.depends(cast<Instruction>(OrigI1), cast<Instruction>(OrigI2),
                    PossiblyLoopIndependent);
}

WrappedDependenceInfo::~WrappedDependenceInfo() {
  F->eraseFromParent();
}
