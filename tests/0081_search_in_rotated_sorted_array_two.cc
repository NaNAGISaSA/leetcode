#include <gtest/gtest.h>

#include "0081_search_in_rotated_sorted_array_two.h"

using namespace leetcode::search_in_rotated_sorted_array_two;

TEST(SEARCH_IN_ROTATEED_SORTED_ARRAY_TWO, EXAMPLE_TEST) {
    ASSERT_TRUE(Solution::search({2, 5, 6, 0, 0, 1, 2}, 1));
    ASSERT_FALSE(Solution::search({2, 5, 6, 0, 0, 1, 2}, 3));
}
