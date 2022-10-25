#include "0376_wiggle_subsequence.h"

#include <gtest/gtest.h>

using namespace leetcode::wiggle_subsequence;

TEST(WIGGLE_SUBSEQUENCE, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::wiggle_max_length({1, 7, 4, 9, 2, 5}), 6);
    ASSERT_EQ(Solution::wiggle_max_length({1, 17, 5, 10, 13, 15, 10, 5, 16, 8}), 7);
    ASSERT_EQ(Solution::wiggle_max_length({1, 2, 3, 4, 5, 6, 7, 8, 9}), 2);
}
