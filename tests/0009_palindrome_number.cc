#include <gtest/gtest.h>

#include "0009_palindrome_number.h"

using namespace leetcode::palindrome_number;

TEST(PALINDROME_NUMBER, EXAMPLE_TEST) {
    ASSERT_TRUE(Solution::is_palindrome(121));
    ASSERT_TRUE(Solution::is_palindrome(11));
    ASSERT_TRUE(Solution::is_palindrome(0));
    ASSERT_FALSE(Solution::is_palindrome(10));
    ASSERT_FALSE(Solution::is_palindrome(-121));
    ASSERT_FALSE(Solution::is_palindrome(-1));
}
