#include <gtest/gtest.h>

#include <vector>
#include <iostream>
#include "SortStuff.h"

void printVector(std::vector<int> v) {
  for (std::vector<int>::iterator it = v.begin(); it != v.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << std::endl;
}

// Demonstrate some basic assertions.
TEST(SlowSortTest, Test01) {
  
  SortStuff sorter;

  std::vector<int> in = {8, 9, 3, 1, 0, 23, 3, 5, 7, 2, 11, 31, -1, -4, 4}; // 15 elements
  std::vector<int> pass = {-4, -1, 0, 1, 2, 3, 3, 4, 5, 7, 8, 9, 11, 23, 31};
  
  ASSERT_EQ(in.size(), pass.size()) << "Vector lengths are unequal";
  printVector(in);
  sorter.SlowSort(in.data(), 0, in.size());
  printVector(in);

  for (int i = 0; i < in.size(); ++i) {
    EXPECT_EQ(in[i], pass[i]) << "Vectors x and y differ at index " << i;
  }

}



