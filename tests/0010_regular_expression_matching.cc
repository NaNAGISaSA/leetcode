#include <gtest/gtest.h>

#include "0010_regular_expression_matching.h"

using namespace leetcode::regular_expression_matching;

TEST(REGULAR_EXPRESSION_MATCHING, RECURSE_SOLUTION_TEST) {
    ASSERT_TRUE(Solution::match("aa", "a*"));
    ASSERT_TRUE(Solution::match("ab", ".*"));
    ASSERT_TRUE(Solution::match("a", "ab*"));
    ASSERT_FALSE(Solution::match("aa", "a"));
}
