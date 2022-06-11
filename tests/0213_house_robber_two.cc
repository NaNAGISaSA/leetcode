#include "0213_house_robber_two.h"

#include <gtest/gtest.h>

using namespace leetcode::house_robber_two;

TEST(HOUSE_ROBBER_TWO, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::rob({1, 2, 3}), 3);
    ASSERT_EQ(Solution::rob({2, 3, 2}), 3);
    ASSERT_EQ(Solution::rob({1, 2, 3, 1}), 4);
}