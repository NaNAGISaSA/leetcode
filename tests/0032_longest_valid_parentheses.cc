#include <gtest/gtest.h>

#include "0032_longest_valid_parentheses.h"

using namespace leetcode::longest_valid_parentheses;

TEST(LONGEST_VALID_PARENTHESES, DP_SOLUTION_TEST) {
    ASSERT_EQ(dp::Solution::longest_valid_parentheses("(()"), 2);
    ASSERT_EQ(dp::Solution::longest_valid_parentheses(")()())"), 4);
    ASSERT_EQ(dp::Solution::longest_valid_parentheses("()(()"), 2);
    ASSERT_EQ(dp::Solution::longest_valid_parentheses(""), 0);
}

TEST(LONGEST_VALID_PARENTHESES, STACK_SOLUTION_TEST) {
    ASSERT_EQ(stack::Solution::longest_valid_parentheses("(()"), 2);
    ASSERT_EQ(stack::Solution::longest_valid_parentheses(")()())"), 4);
    ASSERT_EQ(stack::Solution::longest_valid_parentheses("()(()"), 2);
    ASSERT_EQ(stack::Solution::longest_valid_parentheses(""), 0);
}
