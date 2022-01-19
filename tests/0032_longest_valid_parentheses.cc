#include <gtest/gtest.h>

#include "0032_longest_valid_parentheses.h"

using namespace leetcode::longest_valid_parentheses;

TEST(LONGEST_VALID_PARENTHESES, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::longest_valid_parentheses("(()"), 2);
    ASSERT_EQ(Solution::longest_valid_parentheses(")()())"), 4);
    ASSERT_EQ(Solution::longest_valid_parentheses("()(()"), 2);
    ASSERT_EQ(Solution::longest_valid_parentheses(""), 0);
}
