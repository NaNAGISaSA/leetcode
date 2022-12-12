#include "0409_longest_palindrome.h"

#include <gtest/gtest.h>

using namespace leetcode::longest_palindrome;

TEST(LONGEST_PALINDROME, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::longest_palindrome("abccccdd"), 7);
    ASSERT_EQ(Solution::longest_palindrome("a"), 1);
}
