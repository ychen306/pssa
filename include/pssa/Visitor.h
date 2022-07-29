#ifndef PSSA_VISITOR_H
#define PSSA_VISITOR_H

#include "pssa/PSSA.h"
#include "llvm/ADT/SmallVector.h"
#include <type_traits> // std::is_void

// Utility to help us iterate over items within a PSSA function
template <typename VisitorT, typename RetT = void> struct PSSAVisitor {
  RetT visit(Item &It) {
    if (auto *I = It.asInstruction())
      return static_cast<VisitorT *>(this)->visitInstruction(I);
    return static_cast<VisitorT *>(this)->visitLoop(It.asLoop());
  }

  RetT visitLoop(VLoop *VL) {
    static_assert(std::is_void<RetT>::value,
                  "Must override PSSAVisitor::visitLoop when RetT is not void");
    llvm::SmallVector<Item> Worklist(VL->item_begin(), VL->item_end());
    while (!Worklist.empty()) {
      Item It = Worklist.pop_back_val();
      if (auto *I = It.asInstruction()) {
        static_cast<VisitorT *>(this)->visitInstruction(I);
        continue;
      }
      auto *SubVL = It.asLoop();
      assert(SubVL);
      Worklist.append(SubVL->item_begin(), SubVL->item_end());
    }
  }
};

template <typename VisitorT, typename... ArgTypes>
void visitWith(PredicatedSSA &PSSA, ArgTypes &&...Args) {
  VisitorT Visitor(std::forward<ArgTypes>(Args)...);
  Visitor.visitLoop(&PSSA.getTopLevel());
}

#endif // PSSA_VISITOR_H
