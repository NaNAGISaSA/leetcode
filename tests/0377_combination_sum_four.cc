#include "0377_combination_sum_four.h"

#include <gtest/gtest.h>

using namespace leetcode::combination_sum_four;

TEST(COMBINATION_SUM_FOUR, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::combination_sum({1, 2, 3}, 4), 7);
    ASSERT_EQ(Solution::combination_sum({9}, 4), 0);
}
