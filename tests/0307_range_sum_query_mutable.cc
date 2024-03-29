#include "0307_range_sum_query_mutable.h"

#include <gtest/gtest.h>

using namespace leetcode::range_sum_query_mutable;

TEST(RANGE_SUM_QUERY_MUTABLE, EXAMPLE_TEST) {
    std::vector<int> vec{1, 3, 5};
    NumArray num_arr(vec);
    ASSERT_EQ(num_arr.sum_range(0, 2), 9);
    num_arr.update(1, 2);
    ASSERT_EQ(num_arr.sum_range(0, 2), 8);
    ASSERT_EQ(num_arr.sum_range(1, 2), 7);
}
