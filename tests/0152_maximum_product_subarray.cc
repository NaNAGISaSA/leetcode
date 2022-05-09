#include <gtest/gtest.h>

#include "0152_maximum_product_subarray.h"

using namespace leetcode::maximum_product_subarray;

TEST(MAXIMUM_PRODUCT_SUBARRAY, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::max_product({2, 3, -2, 4}), 6);
    ASSERT_EQ(Solution::max_product({-2, 0, -1}), 0);
}
