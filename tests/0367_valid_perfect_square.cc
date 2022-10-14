#include "0367_valid_perfect_square.h"

#include <gtest/gtest.h>

using namespace leetcode::valid_perfect_square;

TEST(VALID_PERFECT_SQUARE, COMMON_SOLUTION_TEST) {
    ASSERT_TRUE(common::Solution::is_perfect_square(16));
    ASSERT_FALSE(common::Solution::is_perfect_square(14));
}

TEST(VALID_PERFECT_SQUARE, BS_SOLUTION_TEST) {
    ASSERT_TRUE(bs::Solution::is_perfect_square(16));
    ASSERT_FALSE(bs::Solution::is_perfect_square(14));
}
