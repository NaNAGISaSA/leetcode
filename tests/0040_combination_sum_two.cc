#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "0040_combination_sum_two.h"

using namespace leetcode::combination_sum_two;

TEST(COMBINATION_SUM_TWO, EXAMPLE_TEST) {
    std::vector<int> input1{10, 1, 2, 7, 6, 1, 5}, input2{2, 5, 2, 1, 2};
    auto result1 = Solution::combination_sum2(input1, 8);
    ASSERT_EQ(result1.size(), 4);
    ASSERT_THAT(result1[0], testing::ElementsAre(1, 1, 6));
    ASSERT_THAT(result1[1], testing::ElementsAre(1, 2, 5));
    ASSERT_THAT(result1[2], testing::ElementsAre(1, 7));
    ASSERT_THAT(result1[3], testing::ElementsAre(2, 6));
    auto result2 = Solution::combination_sum2(input2, 5);
    ASSERT_EQ(result2.size(), 2);
    ASSERT_THAT(result2[0], testing::ElementsAre(1, 2, 2));
    ASSERT_THAT(result2[1], testing::ElementsAre(5));
}
