#include "0374_guess_number_higher_or_lower.h"

#include <gtest/gtest.h>

#include <cstdlib>

using namespace leetcode::guess_number_higher_or_lower;

TEST(GUESS_NUMBER_HIGHER_OR_LOWER, EXAMPLE_TEST) {
    setenv(Solution::TargetNum, "6", 1);
    ASSERT_EQ(Solution::guess_number(10), 6);
    setenv(Solution::TargetNum, "1", 1);
    ASSERT_EQ(Solution::guess_number(1), 1);
    ASSERT_EQ(Solution::guess_number(22), 1);
}
