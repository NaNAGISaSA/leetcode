#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "0022_generate_parentheses.h"

using namespace leetcode::generate_parentheses;

TEST(GENERATE_PARENTHESES, EXAMPLE_TEST) {
    ASSERT_THAT(Solution::generate_parenthesis(1), testing::ElementsAre("()"));
    ASSERT_THAT(Solution::generate_parenthesis(3),
                testing::ElementsAre("((()))", "(()())", "(())()", "()(())", "()()()"));
}
