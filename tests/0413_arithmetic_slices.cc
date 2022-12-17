#include "0413_arithmetic_slices.h"

#include <gtest/gtest.h>

using namespace leetcode::arithmetic_slices;

TEST(ARTHMETIC_SLICES, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::number_of_arithmetic_slices({1, 2, 3, 4}), 3);
    ASSERT_EQ(Solution::number_of_arithmetic_slices({1}), 0);
}
