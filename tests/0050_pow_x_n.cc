#include <gtest/gtest.h>

#include "0050_pow_x_n.h"

using namespace leetcode::pow_x_n;

TEST(POW_X_N, RECURSE_SOLUTION_TEST) {
    ASSERT_DOUBLE_EQ(recurse::Solution::my_pow(2.0, 10), 1024.0);
    ASSERT_DOUBLE_EQ(recurse::Solution::my_pow(2.1, 3), 9.261);
    ASSERT_DOUBLE_EQ(recurse::Solution::my_pow(2.0, -2), 0.25);
    ASSERT_DOUBLE_EQ(recurse::Solution::my_pow(0.1, 2147483647), 0.0);
    ASSERT_DOUBLE_EQ(recurse::Solution::my_pow(1.0, -2147483648), 1.0);
}

TEST(POW_X_N, FASTER_RECURSE_SOLUTION_TEST) {
    ASSERT_DOUBLE_EQ(faster::Solution::my_pow(2.0, 10), 1024.0);
    ASSERT_DOUBLE_EQ(faster::Solution::my_pow(2.1, 3), 9.261);
    ASSERT_DOUBLE_EQ(faster::Solution::my_pow(2.0, -2), 0.25);
    ASSERT_DOUBLE_EQ(faster::Solution::my_pow(0.1, 2147483647), 0.0);
    ASSERT_DOUBLE_EQ(faster::Solution::my_pow(1.0, -2147483648), 1.0);
}
