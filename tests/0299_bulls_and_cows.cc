#include "0299_bulls_and_cows.h"

#include <gtest/gtest.h>

using namespace leetcode::bulls_and_cows;

TEST(BULLS_AND_COWS, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::get_hint("1807", "7810"), "1A3B");
    ASSERT_EQ(Solution::get_hint("1123", "0111"), "1A1B");
}
