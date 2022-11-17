#include "0391_perfect_rectangle.h"

#include <gtest/gtest.h>

using namespace leetcode::perfect_rectangle;

TEST(PERFECT_RECTANGLE, EXAMPLE_TEST) {
    ASSERT_TRUE(Solution::is_rectangle_cover({{1, 1, 3, 3}, {3, 1, 4, 2}, {3, 2, 4, 4}, {1, 3, 2, 4}, {2, 3, 3, 4}}));
    ASSERT_FALSE(Solution::is_rectangle_cover({{1, 1, 2, 3}, {1, 3, 2, 4}, {3, 1, 4, 2}, {3, 2, 4, 4}}));
    ASSERT_FALSE(Solution::is_rectangle_cover({{1, 1, 3, 3}, {3, 1, 4, 2}, {1, 3, 2, 4}, {2, 2, 4, 4}}));
}
