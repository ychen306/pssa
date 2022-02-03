#ifndef PSSA_LOWER_H
#define PSSA_LOWER_H

namespace llvm {
class Function;
}

class VLoop;
// Lower a top-level "loop" back to llvm ir.
void lowerPSSAToLLVM(llvm::Function *, VLoop *);

#endif // PSSA_LOWER_H
