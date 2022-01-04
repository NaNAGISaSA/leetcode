#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "0018_four_sum.h"

using namespace leetcode::four_sum;

TEST(FOUR_SUM, EXAMPLE_TEST) {
    std::vector<int> input1{1, 0, -1, 0, -2, 2}, input2{2, 2, 2, 2, 2},
        input3{1000000000, 1000000000, 1000000000, 1000000000};
    auto result1 = Solution::four_sum(input1, 0);
    ASSERT_EQ(result1.size(), 3);
    ASSERT_THAT(result1[0], testing::ElementsAre(-2, -1, 1, 2));
    ASSERT_THAT(result1[1], testing::ElementsAre(-2, 0, 0, 2));
    ASSERT_THAT(result1[2], testing::ElementsAre(-1, 0, 0, 1));
    auto result2 = Solution::four_sum(input2, 8);
    ASSERT_EQ(result2.size(), 1);
    ASSERT_THAT(result2[0], testing::ElementsAre(2, 2, 2, 2));
    auto result3 = Solution::four_sum(input3, 0);
    ASSERT_EQ(result3.size(), 0);
}
