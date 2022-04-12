#include <gtest/gtest.h>

#include "0136_single_number.h"

using namespace leetcode::single_number;

TEST(SINGLE_NUMBER, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::single_number({4, 1, 2, 1, 2}), 4);
}
