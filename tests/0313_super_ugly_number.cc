#include "0313_super_ugly_number.h"

#include <gtest/gtest.h>

using namespace leetcode::super_ugly_number;

TEST(SUPER_UGLY_NUMBER, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::nth_super_ugly_number(12, {2, 7, 13, 19}), 32);
    ASSERT_EQ(Solution::nth_super_ugly_number(1, {2, 3, 5}), 1);
}
