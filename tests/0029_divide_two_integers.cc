#include <gtest/gtest.h>

#include "0029_divide_two_integers.h"

using namespace leetcode::divide_two_integers;

TEST(DIVIDE_TWO_INTEGERS, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::divide(10, 3), 3);
    ASSERT_EQ(Solution::divide(-10, 3), -3);
    ASSERT_EQ(Solution::divide(7, -3), -2);
    ASSERT_EQ(Solution::divide(-7, -3), 2);
}
