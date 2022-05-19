#include "0172_factorial_trailing_zeroes.h"

#include <gtest/gtest.h>

using namespace leetcode::factorial_trailing_zeroes;

TEST(FACTORIAL_TRAILING_ZEROES, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::trailing_zeroes(3), 0);
    ASSERT_EQ(Solution::trailing_zeroes(15), 3);
}
