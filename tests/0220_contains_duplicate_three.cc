#include "0220_contains_duplicate_three.h"

#include <gtest/gtest.h>

using namespace leetcode::contains_duplicate_three;

TEST(CONTAINS_DUPLICATE_THREE, SET_SOLUTION_TEST) {
    ASSERT_TRUE(set::Solution::contains_nearby_almost_duplicate({1, 2, 3, 1}, 3, 0));
    ASSERT_TRUE(set::Solution::contains_nearby_almost_duplicate({1, 0, 1, 1}, 1, 2));
    ASSERT_FALSE(set::Solution::contains_nearby_almost_duplicate({1, 5, 9, 1, 5, 9}, 2, 3));
}

TEST(CONTAINS_DUPLICATE_THREE, BUCKET_SORT_SOLUTION_TEST) {
    ASSERT_TRUE(bucket_sort::Solution::contains_nearby_almost_duplicate({1, 2, 3, 1}, 3, 0));
    ASSERT_TRUE(bucket_sort::Solution::contains_nearby_almost_duplicate({1, 0, 1, 1}, 1, 2));
    ASSERT_FALSE(bucket_sort::Solution::contains_nearby_almost_duplicate({1, 5, 9, 1, 5, 9}, 2, 3));
}
