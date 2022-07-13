#include "0279_perfect_squares.h"

#include <gtest/gtest.h>

using namespace leetcode::perfect_squares;

TEST(PERFECT_SQUARES, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::num_squares(12), 3);
    ASSERT_EQ(Solution::num_squares(13), 2);
}
