#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "0015_three_sum.h"

using namespace leetcode::three_sum;

TEST(THREE_SUM, EXAMPLE_TEST) {
    std::vector<int> input1{-1, 0, 1, 2, -1, -4}, input2{0, 0};
    auto result1 = Solution::three_sum(input1);
    ASSERT_THAT(result1[0], testing::ElementsAre(-1, -1, 2));
    ASSERT_THAT(result1[1], testing::ElementsAre(-1, 0, 1));
    auto result2 = Solution::three_sum(input2);
    ASSERT_EQ(result2.size(), 0);
}
