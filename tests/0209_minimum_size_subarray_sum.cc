#include "0209_minimum_size_subarray_sum.h"

#include <gtest/gtest.h>

using namespace leetcode::minimum_size_subarray_sum;

TEST(MINIMUM_SIZE_SUBARRAY_SUM, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::min_subarray_len(7, {2, 3, 1, 2, 4, 3}), 2);
    ASSERT_EQ(Solution::min_subarray_len(4, {1, 4, 4, 3}), 1);
    ASSERT_EQ(Solution::min_subarray_len(8, {1, 1, 1, 1, 1}), 0);
}
