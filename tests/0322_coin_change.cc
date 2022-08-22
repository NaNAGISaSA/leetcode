#include "0322_coin_change.h"

#include <gtest/gtest.h>

using namespace leetcode::coin_change;

TEST(COIN_CHANGE, EXAMPLE_TEST) {
    std::vector<int> vec1{1}, vec2{2}, vec3{1, 2, 5};
    ASSERT_EQ(Solution::coin_change(vec1, 0), 0);
    ASSERT_EQ(Solution::coin_change(vec2, 3), -1);
    ASSERT_EQ(Solution::coin_change(vec3, 11), 3);
}
