#include <gtest/gtest.h>

#include "0043_multiply_strings.h"

using namespace leetcode::multiply_strings;

TEST(MULTIPLY_STRINGS, SMART_SOLUTION_TEST) {
    ASSERT_EQ(smart::Solution::multiply("2", "3"), "6");
    ASSERT_EQ(smart::Solution::multiply("123", "456"), "56088");
}

TEST(MULTIPLY_STRINGS, BETTER_UNDERSTAND_SOLUTION_TEST) {
    ASSERT_EQ(better_understand::Solution::multiply("2", "3"), "6");
    ASSERT_EQ(better_understand::Solution::multiply("123", "456"), "56088");
}
