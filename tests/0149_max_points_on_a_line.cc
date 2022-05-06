#include <gtest/gtest.h>

#include "0149_max_points_on_a_line.h"

using namespace leetcode::max_points_on_a_line;

TEST(MAX_POINTS_ON_A_LINE, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::max_points({{1, 1}, {2, 2}, {3, 3}}), 3);
    ASSERT_EQ(Solution::max_points({{1, 1}, {3, 2}, {5, 3}, {4, 1}, {2, 3}, {1, 4}}), 4);
}
