#include "0198_house_robber.h"

#include <gtest/gtest.h>

using namespace leetcode::house_robber;

TEST(HOUSE_ROBBER, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::rob({1, 2, 3, 1}), 4);
    ASSERT_EQ(Solution::rob({2, 7, 9, 3, 1}), 12);
}
