#include "0304_range_sum_query_2d_immutable.h"

#include <gtest/gtest.h>

using namespace leetcode::range_sum_query_2d_immutable;

TEST(RANGE_SUM_QUERY_2D_IMMUTABLE, EXAMPLE_TEST) {
    NumMatrix num_mat({{3, 0, 1, 4, 2}, {5, 6, 3, 2, 1}, {1, 2, 0, 1, 5}, {4, 1, 0, 1, 7}, {1, 0, 3, 0, 5}});
    ASSERT_EQ(num_mat.sum_region(2, 1, 4, 3), 8);
    ASSERT_EQ(num_mat.sum_region(1, 1, 2, 2), 11);
    ASSERT_EQ(num_mat.sum_region(1, 2, 2, 4), 12);
}
