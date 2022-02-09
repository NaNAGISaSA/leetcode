#include <gtest/gtest.h>

#include "0044_wildcard_matching.h"

using namespace leetcode::wildcard_matching;

TEST(WILDCARD_MATCHING, DP_SOLUTION_TEST) {
    ASSERT_TRUE(dp::Solution::is_match("aa", "*"));
    ASSERT_FALSE(dp::Solution::is_match("aa", "a"));
    ASSERT_FALSE(dp::Solution::is_match("cb", "?a"));
}

TEST(WILDCARD_MATCHING, MOST_VOTED_SOLUTION_TEST) {
    ASSERT_TRUE(greedy::Solution::is_match("aa", "*"));
    ASSERT_FALSE(greedy::Solution::is_match("aa", "a"));
    ASSERT_FALSE(greedy::Solution::is_match("cb", "?a"));
}
