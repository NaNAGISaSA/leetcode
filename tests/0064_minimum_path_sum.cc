#include <gtest/gtest.h>

#include "0064_minimum_path_sum.h"

using namespace leetcode::minimum_path_sum;

TEST(MINIMUM_PATH_SUM, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::min_path_sum({{1, 3, 1}, {1, 5, 1}, {4, 2, 1}}), 7);
    ASSERT_EQ(Solution::min_path_sum({{1, 2, 3}, {4, 5, 6}}), 12);
}
