#ifndef VEGEN_ITEMMOVER_H
#define VEGEN_ITEMMOVER_H

#include "pssa/PSSA.h"

// Utility class for moving items
class ItemMover {
  VLoop *VL;
  llvm::SmallVector<Item> Removed;
  llvm::SmallVector<const ControlCondition *> ItemConds;
public:
  ItemMover(VLoop *VL) : VL(VL) {}
  // Temporarily remove an item that we will re-insert later
  void remove(Item It) {
    // Remember the items we removed so we can insert them later
    Removed.push_back(It);
    // Remember the conditions of the removed item
    if (auto *I = It.asInstruction()) {
      ItemConds.push_back(VL->getInstCond(I));
    } else {
      // Loops keep track of their own conditions so we don't care here
      ItemConds.push_back(nullptr);
    }
    VL->erase(It);
  }

  // Re-insert all of the removed items before `InsertPt`
  void reinsert(VLoop::ItemIterator InsertPt) {
    for (const auto [It, C] : llvm::zip(Removed, ItemConds)) {
      if (auto *I = It.asInstruction())
        VL->insert(I, C, InsertPt);
      else
        VL->insert(It.asLoop(), InsertPt);
    };

    Removed.clear();
    ItemConds.clear();
  }
};

#endif // end VEGEN_ITEMMOVER_H
