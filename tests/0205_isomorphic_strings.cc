#include "0205_isomorphic_strings.h"

#include <gtest/gtest.h>

using namespace leetcode::isomorphic_strings;

TEST(ISOMORPHIC_STRINGS, EXAMPLE_TEST) {
    ASSERT_TRUE(Solution::is_isomorphic("paper", "title"));
    ASSERT_FALSE(Solution::is_isomorphic("foo", "bar"));
    ASSERT_FALSE(Solution::is_isomorphic("badc", "baba"));
}
