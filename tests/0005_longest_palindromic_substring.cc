#include <gtest/gtest.h>

#include "0005_longest_palindromic_substring.h"

using namespace leetcode::longest_palindromic_substring;

TEST(LONGEST_PALINDROMIC_SUBSTRING, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::longest_palindrome("cabad"), "aba");
    ASSERT_EQ(Solution::longest_palindrome("cbbd"), "bb");
    ASSERT_EQ(Solution::longest_palindrome("a"), "a");
}
