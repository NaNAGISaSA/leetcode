#include "0312_burst_balloons.h"

#include <gtest/gtest.h>

using namespace leetcode::burst_balloons;

TEST(BURST_BALLOONS, EXAMPLE_TEST) {
    std::vector<int> vec1{3, 1, 5, 8}, vec2{1, 5};
    ASSERT_EQ(Solution::max_coins(vec1), 167);
    ASSERT_EQ(Solution::max_coins(vec2), 10);
}
