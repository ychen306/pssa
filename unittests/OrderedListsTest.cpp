#include "utils/OrderedList.h"
#include "gtest/gtest.h"

namespace {
template <typename T, typename Container>
std::vector<T> to_vector(const Container &C) {
  return std::vector<T>(C.begin(), C.end());
}
} // namespace

TEST(OrderredListTest, Test1) {
  OrderedList<int> List;
  List.push_back(1);
  List.push_back(3);
  List.insert(std::prev(List.end()), 2);
  EXPECT_EQ(to_vector<int>(List), std::vector<int>({1, 2, 3}));
  EXPECT_TRUE(List.comesBefore(1, 2));
  EXPECT_TRUE(List.comesBefore(2, 3));
  EXPECT_TRUE(List.comesBefore(1, 3));
}

TEST(OrderedTest, Test2) {
  OrderedList<int> List;
  int N = 500;
  List.push_back(0);
  List.push_back(N);
  auto Last = std::prev(List.end());
  for (unsigned i = 1; i < N; i++)
    List.insert(Last, i);

  std::vector<int> Expected;
  for (int i = 0; i < 500 + 1; i++)
    Expected.push_back(i);

  EXPECT_EQ(to_vector<int>(List), Expected);

  for (unsigned i = 0; i < N; i++)
    for (unsigned j = i + 1; j < N; j++)
      EXPECT_TRUE(List.comesBefore(i, j)) << "; i = " << i << ", j = " << j;
}
