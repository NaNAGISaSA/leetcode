#include <gtest/gtest.h>

#include "0009_palindrome_number.h"

using namespace leetcode::palindrome_number;

TEST(PALINDROME_NUMBER, FIRST_SOLUTION_TEST) {
    ASSERT_TRUE(first::Solution::is_palindrome(121));
    ASSERT_TRUE(first::Solution::is_palindrome(11));
    ASSERT_TRUE(first::Solution::is_palindrome(0));
    ASSERT_FALSE(first::Solution::is_palindrome(10));
    ASSERT_FALSE(first::Solution::is_palindrome(-121));
    ASSERT_FALSE(first::Solution::is_palindrome(-1));
}

TEST(PALINDROME_NUMBER, FASTER_SOLUTION_TEST) {
    ASSERT_TRUE(faster::Solution::is_palindrome(121));
    ASSERT_TRUE(faster::Solution::is_palindrome(11));
    ASSERT_TRUE(faster::Solution::is_palindrome(0));
    ASSERT_FALSE(faster::Solution::is_palindrome(10));
    ASSERT_FALSE(faster::Solution::is_palindrome(-121));
    ASSERT_FALSE(faster::Solution::is_palindrome(-1));
}
