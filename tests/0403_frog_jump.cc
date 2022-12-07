#include "0403_frog_jump.h"

#include <gtest/gtest.h>

using namespace leetcode::frog_jump;

TEST(FROG_JUMP, EXAMPLE_TEST) {
    ASSERT_TRUE(Solution::can_cross({0, 1, 3, 5, 6, 8, 12, 17}));
    ASSERT_FALSE(Solution::can_cross({0, 1, 2, 3, 4, 8, 9, 11}));
}
