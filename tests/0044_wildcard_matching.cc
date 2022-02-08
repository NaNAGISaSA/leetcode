#include <gtest/gtest.h>

#include "0044_wildcard_matching.h"

using namespace leetcode::wildcard_matching;

TEST(WILDCARD_MATCHING, EXAMPLE_TEST) {
    ASSERT_TRUE(Solution::is_match("aa", "*"));
    ASSERT_FALSE(Solution::is_match("aa", "a"));
    ASSERT_FALSE(Solution::is_match("cb", "?a"));
}
