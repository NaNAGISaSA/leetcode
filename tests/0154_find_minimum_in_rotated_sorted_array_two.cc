#include <gtest/gtest.h>

#include "0154_find_minimum_in_rotated_sorted_array_two.h"

using namespace leetcode::find_minimum_in_rotated_sorted_array_two;

TEST(FIND_MINIMUM_IN_ROTATED_SORTED_ARRAY_TWO, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::find_min({2, 2, 2, 0, 1}), 0);
    ASSERT_EQ(Solution::find_min({11, 13, 15, 17}), 11);
}
