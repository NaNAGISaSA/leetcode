#include <gtest/gtest.h>

#include "0070_climbing_stairs.h"

using namespace leetcode::climbing_stairs;

TEST(CLIMBING_STAIRS, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::climb_stairs(2), 2);
    ASSERT_EQ(Solution::climb_stairs(3), 3);
}
