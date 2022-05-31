#include "0205_isomorphic_strings.h"

#include <gtest/gtest.h>

using namespace leetcode::isomorphic_strings;

TEST(ISOMORPHIC_STRINGS, MAP_SOLUTION_TEST) {
    ASSERT_TRUE(map::Solution::is_isomorphic("paper", "title"));
    ASSERT_FALSE(map::Solution::is_isomorphic("foo", "bar"));
    ASSERT_FALSE(map::Solution::is_isomorphic("badc", "baba"));
}

TEST(ISOMORPHIC_STRINGS, NOMAP_SOLUTION_TEST) {
    ASSERT_TRUE(nomap::Solution::is_isomorphic("paper", "title"));
    ASSERT_FALSE(nomap::Solution::is_isomorphic("foo", "bar"));
    ASSERT_FALSE(nomap::Solution::is_isomorphic("badc", "baba"));
}
