#include "0303_range_sum_query_immutable.h"

#include <gtest/gtest.h>

using namespace leetcode::range_sum_query_immutable;

TEST(RANGE_SUM_QUERY_IMMUTABLE, EXAMPLE_TEST) {
    NumArray num_arr({-2, 0, 3, -5, 2, -1});
    ASSERT_EQ(num_arr.sum_range(0, 2), 1);
    ASSERT_EQ(num_arr.sum_range(2, 5), -1);
    ASSERT_EQ(num_arr.sum_range(0, 5), -3);
}
