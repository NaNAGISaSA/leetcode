#include "0377_combination_sum_four.h"

#include <gtest/gtest.h>

using namespace leetcode::combination_sum_four;

TEST(COMBINATION_SUM_FOUR, BACKTRACE_SOLUTION_TEST) {
    ASSERT_EQ(backtrace::Solution::combination_sum({1, 2, 3}, 4), 7);
    ASSERT_EQ(backtrace::Solution::combination_sum({9}, 4), 0);
}

TEST(COMBINATION_SUM_FOUR, FORWARD_SOLUTION_TEST) {
    ASSERT_EQ(forward::Solution::combination_sum({1, 2, 3}, 4), 7);
    ASSERT_EQ(forward::Solution::combination_sum({9}, 4), 0);
}
