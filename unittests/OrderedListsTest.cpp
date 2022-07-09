#include "utils/OrderedList.h"
#include "gtest/gtest.h"

TEST(OrderredListTest, Test1) {
  OrderedList<int> List;
  List.push_back(1);
  List.push_back(3);
  List.insert(std::prev(List.end()), 2);
  EXPECT_TRUE(List.comesBefore(1, 2));
  EXPECT_TRUE(List.comesBefore(2, 3));
  EXPECT_TRUE(List.comesBefore(1, 3));
}

TEST(OrderedTest, Test2) {
  OrderedList<int> List;
  List.push_back(0);
  List.push_back(8);
  auto Last = std::prev(List.end());
  for (unsigned i = 1; i < 8; i++)
    List.insert(Last, i);
  for (unsigned i = 0; i < 8; i++)
    for (unsigned j = i + 1; j < 8; j++)
      EXPECT_TRUE(List.comesBefore(i, j)) << "; i = " << i << ", j = " << j;
}
