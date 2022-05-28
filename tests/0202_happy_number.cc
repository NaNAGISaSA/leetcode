#include "0202_happy_number.h"

#include <gtest/gtest.h>

using namespace leetcode::happy_number;

TEST(HAPPY_NUMBER, SET_SOLUTION_TEST) {
    ASSERT_TRUE(set::Solution::is_happy(19));
    ASSERT_FALSE(set::Solution::is_happy(2));
}

TEST(HAPPY_NUMBER, FLOYD_CYCLE_SOLUTION_TEST) {
    ASSERT_TRUE(floyd_cycle::Solution::is_happy(19));
    ASSERT_FALSE(floyd_cycle::Solution::is_happy(2));
}
