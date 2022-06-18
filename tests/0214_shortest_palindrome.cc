#include "0214_shortest_palindrome.h"

#include <gtest/gtest.h>

using namespace leetcode::shortest_palindrome;

TEST(SHORTEST_PALINDROME, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::shortest_palindrome("aacecaaa"), "aaacecaaa");
    ASSERT_EQ(Solution::shortest_palindrome("abcd"), "dcbabcd");
    ASSERT_EQ(Solution::shortest_palindrome("aba"), "aba");
    ASSERT_EQ(Solution::shortest_palindrome(""), "");
}
