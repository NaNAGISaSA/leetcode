#include <gtest/gtest.h>

#include "0153_find_minimum_in_rotated_sorted_array.h"

using namespace leetcode::find_minimum_in_rotated_sorted_array;

TEST(FIND_MINIMUM_IN_ROTATED_SORTED_ARRAY, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::find_min({3, 4, 5, 1, 2}), 1);
    ASSERT_EQ(Solution::find_min({4, 5, 6, 7, 0, 1, 2}), 0);
    ASSERT_EQ(Solution::find_min({11, 13, 15, 17}), 11);
}
