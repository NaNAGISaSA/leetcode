#include "0279_perfect_squares.h"

#include <gtest/gtest.h>

using namespace leetcode::perfect_squares;

TEST(PERFECT_SQUARES, DP_SOLUTION_TEST) {
    ASSERT_EQ(dp::Solution::num_squares(12), 3);
    ASSERT_EQ(dp::Solution::num_squares(13), 2);
}

TEST(PERFECT_SQUARES, BFS_SOLUTION_TEST) {
    ASSERT_EQ(bfs::Solution::num_squares(12), 3);
    ASSERT_EQ(bfs::Solution::num_squares(13), 2);
}
