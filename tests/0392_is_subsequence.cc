#include "0392_is_subsequence.h"

#include <gtest/gtest.h>

using namespace leetcode::is_subsequence;

TEST(IS_SUBSEQUENCE, EXAMPLE_TEST) {
    ASSERT_TRUE(Solution::is_subsequence("abc", "ahbgdc"));
    ASSERT_FALSE(Solution::is_subsequence("axc", "ahbgdc"));
}
