#include <gtest/gtest.h>

#include "0004_median_of_two_sorted_arrays.h"

using namespace leetcode::median_of_two_sorted_arrays;

TEST(MEDIAN_OF_TWO_SORTED_ARRAYS, EXAMPLE_TEST) {
    ASSERT_DOUBLE_EQ(Solution::find_median_sorted_arrays({1, 3}, {2}), 2.0);
    ASSERT_DOUBLE_EQ(Solution::find_median_sorted_arrays({1, 2}, {3, 4}), 2.5);
    ASSERT_DOUBLE_EQ(Solution::find_median_sorted_arrays({0, 0}, {0, 0}), 0.0);
    ASSERT_DOUBLE_EQ(Solution::find_median_sorted_arrays({}, {1}), 1.0);
    ASSERT_DOUBLE_EQ(Solution::find_median_sorted_arrays({2}, {}), 2.0);
    ASSERT_DOUBLE_EQ(Solution::find_median_sorted_arrays({2, 2, 4, 4}, {2, 2, 4, 4}), 3.0);
}
