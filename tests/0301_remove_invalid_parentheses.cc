#include "0301_remove_invalid_parentheses.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

using namespace leetcode::remove_invalid_parentheses;

TEST(REMOVE_INVALID_PARENTHESES, EXAMPLE_TEST) {
    ASSERT_THAT(Solution::remove_invalid_parentheses("()())()"), testing::ElementsAre("()()()", "(())()"));
    ASSERT_THAT(Solution::remove_invalid_parentheses("(a)())()"), testing::ElementsAre("(a)()()", "(a())()"));
    ASSERT_THAT(Solution::remove_invalid_parentheses(")("), testing::ElementsAre(""));
}
