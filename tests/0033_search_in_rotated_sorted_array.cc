#include <gtest/gtest.h>

#include "0033_search_in_rotated_sorted_array.h"

using namespace leetcode::search_in_rotated_sorted_array;

TEST(SEARCH_IN_ROTATED_SORTED_ARRAY, ONE_PATH_SOLUTION_TEST) {
    ASSERT_EQ(one_path::Solution::search({4, 5, 6, 7, 0, 1, 2}, 0), 4);
    ASSERT_EQ(one_path::Solution::search({4, 5, 6, 7, 0, 1, 2}, 3), -1);
    ASSERT_EQ(one_path::Solution::search({1}, 0), -1);
    ASSERT_EQ(one_path::Solution::search({3, 1}, 4), -1);
}

TEST(SEARCH_IN_ROTATED_SORTED_ARRAY, TWO_PATH_SOLUTION_TEST) {
    ASSERT_EQ(two_path::Solution::search({4, 5, 6, 7, 0, 1, 2}, 0), 4);
    ASSERT_EQ(two_path::Solution::search({4, 5, 6, 7, 0, 1, 2}, 3), -1);
    ASSERT_EQ(two_path::Solution::search({1}, 0), -1);
    ASSERT_EQ(two_path::Solution::search({3, 1}, 4), -1);
}
