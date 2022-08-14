#include "0313_super_ugly_number.h"

#include <gtest/gtest.h>

using namespace leetcode::super_ugly_number;

TEST(SUPER_UGLY_NUMBER, FIRST_SOLUTION_TEST) {
    ASSERT_EQ(first::Solution::nth_super_ugly_number(12, {2, 7, 13, 19}), 32);
    ASSERT_EQ(first::Solution::nth_super_ugly_number(1, {2, 3, 5}), 1);
}

TEST(SUPER_UGLY_NUMBER, HEAP_SOLUTION_TEST) {
    ASSERT_EQ(heap::Solution::nth_super_ugly_number(12, {2, 7, 13, 19}), 32);
    // ASSERT_EQ(heap::Solution::nth_super_ugly_number(1, {2, 3, 5}), 1);
}
