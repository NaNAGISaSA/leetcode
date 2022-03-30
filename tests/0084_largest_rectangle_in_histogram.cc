#include <gtest/gtest.h>

#include "0084_largest_rectangle_in_histogram.h"

using namespace leetcode::largest_rectangle_in_histogram;

TEST(LARGEST_RECTANGLE_IN_HISTOGRAM, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::largest_rectangle_area({2, 1, 5, 6, 2, 3}), 10);
    ASSERT_EQ(Solution::largest_rectangle_area({2, 4}), 4);
    ASSERT_EQ(Solution::largest_rectangle_area({0, 1, 0, 1}), 1);
}
