#include "0376_wiggle_subsequence.h"

#include <gtest/gtest.h>

using namespace leetcode::wiggle_subsequence;

TEST(WIGGLE_SUBSEQUENCE, DP_SOLUTION_TEST) {
    ASSERT_EQ(dp::Solution::wiggle_max_length({1, 7, 4, 9, 2, 5}), 6);
    ASSERT_EQ(dp::Solution::wiggle_max_length({1, 17, 5, 10, 13, 15, 10, 5, 16, 8}), 7);
    ASSERT_EQ(dp::Solution::wiggle_max_length({1, 2, 3, 4, 5, 6, 7, 8, 9}), 2);
}

TEST(WIGGLE_SUBSEQUENCE, OPT_SOLUTION_TEST) {
    ASSERT_EQ(opt::Solution::wiggle_max_length({1, 7, 4, 9, 2, 5}), 6);
    ASSERT_EQ(opt::Solution::wiggle_max_length({1, 17, 5, 10, 13, 15, 10, 5, 16, 8}), 7);
    ASSERT_EQ(opt::Solution::wiggle_max_length({1, 2, 3, 4, 5, 6, 7, 8, 9}), 2);
}
