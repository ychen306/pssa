#ifndef VEGEN_LOWER_H
#define VEGEN_LOWER_H

#include "llvm/ADT/ArrayRef.h"

namespace llvm {
class DependenceInfo;
}

class Pack;
class PredicatedSSA;

// Lower a set of packs to vector instructions
void lower(llvm::ArrayRef<Pack *>, PredicatedSSA &, llvm::DependenceInfo &);

#endif // end VEGEN_LOWER_H
