#include "0410_split_array_largest_sum.h"

#include <gtest/gtest.h>

using namespace leetcode::split_array_largest_sum;

TEST(SPLIT_ARRAY_LARGEST_SUM, DP_SOLUTION_TEST) {
    ASSERT_EQ(dp::Solution::split_array({7, 2, 5, 10, 8}, 2), 18);
    ASSERT_EQ(dp::Solution::split_array({1, 2, 3, 4, 5}, 2), 9);
}

TEST(SPLIT_ARRAY_LARGEST_SUM, BS_SOLUTION_TEST) {
    ASSERT_EQ(bs::Solution::split_array({7, 2, 5, 10, 8}, 2), 18);
    ASSERT_EQ(bs::Solution::split_array({1, 2, 3, 4, 5}, 2), 9);
}
