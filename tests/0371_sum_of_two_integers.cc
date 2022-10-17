#include "0371_sum_of_two_integers.h"

#include <gtest/gtest.h>

using namespace leetcode::sum_of_two_integers;

TEST(SUM_OF_TWO_INTEGERS, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::get_sum(3, 19), 22);
    ASSERT_EQ(Solution::get_sum(3, -9), -6);
    ASSERT_EQ(Solution::get_sum(1, -1), 0);
}
