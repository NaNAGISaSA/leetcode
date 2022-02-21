#include <gtest/gtest.h>

#include "0053_maximum_subarray.h"

using namespace leetcode::maximum_subarray;

TEST(MAXIMUM_SUBARRAY, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::max_subarray({-2, 1, -3, 4, -1, 2, 1, -5, 4}), 6);
    ASSERT_EQ(Solution::max_subarray({5, 4, -1, 7, 8}), 23);
}
