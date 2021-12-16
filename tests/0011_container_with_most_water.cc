#include <gtest/gtest.h>

#include "0011_container_with_most_water.h"

using namespace leetcode::container_with_most_water;

TEST(CONTAINER_WITH_MOST_WATER, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::max_area({1, 1}), 1);
    ASSERT_EQ(Solution::max_area({1, 2, 1}), 2);
    ASSERT_EQ(Solution::max_area({4, 3, 2, 1, 4}), 16);
    ASSERT_EQ(Solution::max_area({1, 8, 6, 2, 5, 4, 8, 3, 7}), 49);
}