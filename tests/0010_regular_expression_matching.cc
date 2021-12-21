#include <gtest/gtest.h>

#include "0010_regular_expression_matching.h"

using namespace leetcode::regular_expression_matching;

TEST(REGULAR_EXPRESSION_MATCHING, RECURSE_SOLUTION_TEST) {
    ASSERT_TRUE(recurse::Solution::match("aa", "a*"));
    ASSERT_TRUE(recurse::Solution::match("ab", ".*"));
    ASSERT_TRUE(recurse::Solution::match("a", "ab*"));
    ASSERT_FALSE(recurse::Solution::match("aa", "a"));
}

TEST(REGULAR_EXPRESSION_MATCHING, DP_SOLUTION_TEST) {
    ASSERT_TRUE(dp::Solution::match("aa", "a*"));
    ASSERT_TRUE(dp::Solution::match("ab", ".*"));
    ASSERT_TRUE(dp::Solution::match("a", "ab*"));
    ASSERT_FALSE(dp::Solution::match("aa", "a"));
}
