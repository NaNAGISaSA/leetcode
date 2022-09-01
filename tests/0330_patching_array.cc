#include "0330_patching_array.h"

#include <gtest/gtest.h>

using namespace leetcode::patching_array;

TEST(PATCHING_ARRAY, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::min_patches({1, 3}, 6), 1);
    ASSERT_EQ(Solution::min_patches({1, 5, 10}, 20), 2);
    ASSERT_EQ(Solution::min_patches({1, 2, 2}, 5), 0);
    ASSERT_EQ(Solution::min_patches({1, 2, 31, 33}, 2147483647), 28);
}
