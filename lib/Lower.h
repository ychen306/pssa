#ifndef PSSA_LOWER_H
#define PSSA_LOWER_H

namespace llvm {
class Function;
}

class PredicatedSSA;
void lowerPSSAToLLVM(llvm::Function *, PredicatedSSA &);

#endif // PSSA_LOWER_H
