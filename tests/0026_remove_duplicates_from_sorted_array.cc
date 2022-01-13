#include <gtest/gtest.h>

#include "0026_remove_duplicates_from_sorted_array.h"

using namespace leetcode::remove_duplicates_from_sorted_array;

TEST(REMOVE_DUPLICATES_FROM_SORTED_ARRAY, EXAMPLE_TEST) {
    std::vector<int> nums{0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    ASSERT_EQ(Solution::remove_duplicates(nums), 5);
    for (int i = 0; i < 5; ++i) {
        ASSERT_EQ(i, nums[i]);
    }
}
