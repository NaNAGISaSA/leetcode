#include "0216_combination_sum_three.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

using namespace leetcode::combination_sum_three;

TEST(COMBINATION_SUM_THREE, EXAMPLE_TEST) {
    auto res1 = Solution::combination_sum3(3, 7);
    ASSERT_EQ(res1.size(), 1);
    ASSERT_THAT(res1[0], testing::ElementsAre(1, 2, 4));
    auto res2 = Solution::combination_sum3(3, 9);
    ASSERT_EQ(res2.size(), 3);
    ASSERT_THAT(res2[0], testing::ElementsAre(1, 2, 6));
    ASSERT_THAT(res2[1], testing::ElementsAre(1, 3, 5));
    ASSERT_THAT(res2[2], testing::ElementsAre(2, 3, 4));
}
