#include <gtest/gtest.h>

#include "0007_reverse_integer.h"

using namespace leetcode::reverse_integer;

TEST(REVERSE_INTEGER, FIRST_SOLUTION_TEST) {
    ASSERT_EQ(first::Solution::reverse(123), 321);
    ASSERT_EQ(first::Solution::reverse(-123), -321);
    ASSERT_EQ(first::Solution::reverse(120), 21);
    ASSERT_EQ(first::Solution::reverse(-120), -21);
    ASSERT_EQ(first::Solution::reverse(0), 0);
    ASSERT_EQ(first::Solution::reverse(-2147483648), 0);
    ASSERT_EQ(first::Solution::reverse(2147457412), 0);
}

TEST(REVERSE_INTEGER, ELEGANT_SOLUTION_TEST) {
    ASSERT_EQ(elegant::Solution::reverse(123), 321);
    ASSERT_EQ(elegant::Solution::reverse(-123), -321);
    ASSERT_EQ(elegant::Solution::reverse(120), 21);
    ASSERT_EQ(elegant::Solution::reverse(-120), -21);
    ASSERT_EQ(elegant::Solution::reverse(0), 0);
    ASSERT_EQ(elegant::Solution::reverse(-2147483648), 0);
    ASSERT_EQ(elegant::Solution::reverse(2147457412), 0);
}
