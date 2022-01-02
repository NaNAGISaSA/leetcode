#include <gtest/gtest.h>

#include "0016_three_sum_closest.h"

using namespace leetcode::three_sum_closest;

TEST(THREE_SUM_CLOSEST, EXAMPLE_TEST) {
    std::vector<int> input1{-1, 2, 1, -4}, input2{0, 0, 0};
    ASSERT_EQ(Solution::three_sum_closest(input1, 1), 2);
    ASSERT_EQ(Solution::three_sum_closest(input2, 1), 0);
}
