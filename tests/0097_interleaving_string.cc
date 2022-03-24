#include <gtest/gtest.h>

#include "0097_interleaving_string.h"

using namespace leetcode::interleaving_string;

TEST(INTERLEAVING_STRING, EXAMPLE_TEST) {
    ASSERT_FALSE(Solution::is_interleave("aabcc", "dbbca", "aadbbbaccc"));
    ASSERT_TRUE(Solution::is_interleave("", "", ""));
}
