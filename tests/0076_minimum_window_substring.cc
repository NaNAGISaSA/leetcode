#include <gtest/gtest.h>

#include "0076_minimum_window_substring.h"

using namespace leetcode::minimum_window_substring;

TEST(MINIMUM_WINDOW_SUBSTRING, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::min_window("ADOBECODEBANC", "ABC"), "BANC");
    ASSERT_EQ(Solution::min_window("a", "a"), "a");
    ASSERT_EQ(Solution::min_window("a", "aa"), "");
    ASSERT_EQ(Solution::min_window("abc", "ac"), "abc");
    ASSERT_EQ(Solution::min_window("abc", "cba"), "abc");
}
