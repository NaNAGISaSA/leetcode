#include "0327_count_of_range_sum.h"

#include <gtest/gtest.h>

using namespace leetcode::count_of_range_sum;

TEST(COUNT_OF_RANGE_SUM, MERGE_SORT_SOLUTION_TEST) {
    ASSERT_EQ(merge_sort::Solution::count_range_sum({-2, 5, -1}, -2, 2), 3);
    ASSERT_EQ(merge_sort::Solution::count_range_sum({0}, 0, 0), 1);
    ASSERT_EQ(merge_sort::Solution::count_range_sum({-2147483647, 0, -2147483647, 2147483647}, -564, 3864), 3);
}

TEST(COUNT_OF_RANGE_SUM, FASTER_MERGE_SORT_SOLUTION_TEST) {
    ASSERT_EQ(merge_sort::Solution::count_range_sum({-2, 5, -1}, -2, 2), 3);
    ASSERT_EQ(merge_sort::Solution::count_range_sum({0}, 0, 0), 1);
    ASSERT_EQ(merge_sort::Solution::count_range_sum({-2147483647, 0, -2147483647, 2147483647}, -564, 3864), 3);
}
