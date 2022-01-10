#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "0022_generate_parentheses.h"

using namespace leetcode::generate_parentheses;

TEST(GENERATE_PARENTHESES, FIRST_SOLUTION_TEST) {
    ASSERT_THAT(first::Solution::generate_parenthesis(1), testing::ElementsAre("()"));
    ASSERT_THAT(first::Solution::generate_parenthesis(3),
                testing::ElementsAre("((()))", "(()())", "(())()", "()(())", "()()()"));
}

TEST(GENERATE_PARENTHESES, BACKTRACK_SOLUTION_TEST) {
    ASSERT_THAT(backtrack::Solution::generate_parenthesis(1), testing::ElementsAre("()"));
    ASSERT_THAT(backtrack::Solution::generate_parenthesis(3),
                testing::ElementsAre("((()))", "(()())", "(())()", "()(())", "()()()"));
}
