#include <gtest/gtest.h>

#include "0063_unique_paths_two.h"

using namespace leetcode::unique_paths_two;

TEST(UNIQUE_PATHS_TWO, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::unique_paths_with_obstacles({{0, 0, 0}, {0, 1, 0}, {0, 0, 0}}), 2);
    ASSERT_EQ(Solution::unique_paths_with_obstacles({{0, 1}, {0, 0}}), 1);
}
