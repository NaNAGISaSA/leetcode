#include <gtest/gtest.h>

#include "0062_unique_paths.h"

using namespace leetcode::unique_paths;

TEST(UNIQUE_PATHS, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::unique_paths(3, 7), 28);
    ASSERT_EQ(Solution::unique_paths(3, 2), 3);
}
