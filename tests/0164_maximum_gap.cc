#include <gtest/gtest.h>

#include "0164_maximum_gap.h"

using namespace leetcode::maximum_gap;

TEST(MAXIMUM_GAP, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::maximum_gap({3, 6, 9, 1}), 3);
    ASSERT_EQ(Solution::maximum_gap({3}), 0);
}
