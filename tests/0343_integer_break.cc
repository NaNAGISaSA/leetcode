#include "0343_integer_break.h"

#include <gtest/gtest.h>

using namespace leetcode::integer_break;

TEST(INTEGER_BREAK, FIRST_SOLUTION_TEST) {
    ASSERT_EQ(first::Solution::integer_break(2), 1);
    ASSERT_EQ(first::Solution::integer_break(10), 36);
}

TEST(INTEGER_BREAK, ANALYSIS_SOLUTION_TEST) {
    ASSERT_EQ(analysis::Solution::integer_break(2), 1);
    ASSERT_EQ(analysis::Solution::integer_break(10), 36);
}
