#include <gtest/gtest.h>

#include "0020_valid_parentheses.h"

using namespace leetcode::valid_parentheses;

TEST(VALID_PARENTHESES, EXAMPLE_TEST) {
    ASSERT_TRUE(Solution::is_valid("()[]{}"));
    ASSERT_FALSE(Solution::is_valid("(]"));
    ASSERT_FALSE(Solution::is_valid("([)]"));
}
