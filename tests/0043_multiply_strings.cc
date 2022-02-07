#include <gtest/gtest.h>

#include "0043_multiply_strings.h"

using namespace leetcode::multiply_strings;

TEST(MULTIPLY_STRINGS, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::multiply("2", "3"), "6");
    ASSERT_EQ(Solution::multiply("123", "456"), "56088");
}
