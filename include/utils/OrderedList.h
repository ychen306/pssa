#ifndef UTILS_ORDERED_LIST_H
#define UTILS_ORDERED_LIST_H

#include "llvm/ADT/DenseMap.h"
#include <list>

template <typename T, typename HashInfo = llvm::DenseMapInfo<T>, size_t Gap = 4>
class OrderedList {
  using List = std::list<T>;

public:
  using iterator = typename List::iterator;
  using const_iterator = typename List::const_iterator;

private:
  std::list<T> Storage;
  llvm::DenseMap<T, unsigned, HashInfo> Labels;

  unsigned getLabel(iterator It) const {
    if (It == Storage.begin())
      return 0;
    assert(Labels.count(*It));
    return Labels.lookup(*It);
  }

  void relabel(iterator Begin) {
    // Use less spacing to make sure we can catch up
    unsigned Offset = Gap / 2;

    unsigned Label = getLabel(Begin) + Offset;
    for (iterator It = std::next(Begin), End = end(); It != End;
         ++It, Label += Offset) {
      if (getLabel(It) > Label) {
        assert(It == std::prev(End) ||
               (getLabel(It) < getLabel(std::next(It)) &&
                getLabel(It) > getLabel(std::prev(It))));
        break;
      }

      Labels[*It] = Label;
    }
  }

public:
  OrderedList() {
    T Sentinel = HashInfo::getEmptyKey();
    Storage.push_back(Sentinel);
  }
  iterator insert(iterator Pos, const T &Val) {
    if (Pos == end()) {
      push_back(Val);
      return std::prev(end());
    }

    iterator Prev = std::prev(Pos);
    unsigned PrevLabel = getLabel(Prev);
    unsigned Space = getLabel(Pos) - PrevLabel;

    iterator It = Storage.insert(Pos, Val);

    if (Space > 1)
      Labels[Val] = PrevLabel + Space / 2;
    else {
      Labels[Val] = PrevLabel;
      relabel(Prev);
    }
    return It;
  }

  template <typename InputIt>
  void insert(iterator Pos, InputIt Begin, InputIt End) {
    unsigned N = std::distance(Begin, End);
    iterator Prev = std::prev(Pos);
    unsigned PrevLabel = getLabel(Prev);
    // Number of available labels
    unsigned Space = getLabel(Pos) - PrevLabel;
    // Number of available labels for each item
    unsigned Offset = Space / (N + 1);

    Storage.insert(Pos, Begin, End);

    if (Offset >= 1) {
      // Directly assign labels if there's enough space
      unsigned Label = PrevLabel + Offset;
      for (InputIt It = Begin; It != End; ++It, Label += Offset)
        Labels[*It] = Label;
    } else {
      for (InputIt It = Begin; It != End; ++It)
        Labels[*It] = PrevLabel;
      relabel(Prev);
    }
  }

  void push_back(T Val) {
    Labels[Val] = getLabel(std::prev(Storage.end())) + Gap;
    Storage.push_back(Val);
  }

  iterator erase(iterator Pos) {
    Labels.erase(*Pos);
    return Storage.erase(Pos);
  }
  iterator begin() { return std::next(Storage.begin()); }
  iterator end() { return Storage.end(); }
  const_iterator begin() const { return std::next(Storage.begin()); }
  const_iterator end() const { return Storage.end(); }

  bool comesBefore(const T &X, const T &Y) const {
    assert(Labels.count(X));
    assert(Labels.count(Y));
    return Labels.lookup(X) < Labels.lookup(Y);
  }
};

#endif // end UTILS_ORDERED_LIST_H
