#include <gtest/gtest.h>

#include "0125_valid_palindrome.h"

using namespace leetcode::valid_palindrome;

TEST(VALID_PALINDROME, EXAMPLE_TEST) {
    ASSERT_TRUE(Solution::is_palindrome("A man, a plan, a canal: Panama"));
    ASSERT_TRUE(Solution::is_palindrome("    "));
    ASSERT_FALSE(Solution::is_palindrome("race a car"));
    ASSERT_FALSE(Solution::is_palindrome("0P"));
}
