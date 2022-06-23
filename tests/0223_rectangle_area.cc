#include "0223_rectangle_area.h"

#include <gtest/gtest.h>

using namespace leetcode::rectangle_area;

TEST(RECTANGLE_AREA, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::compute_area(-3, 0, 3, 4, 0, -1, 9, 2), 45);
    ASSERT_EQ(Solution::compute_area(-2, -2, 2, 2, -2, -2, 2, 2), 16);
}
