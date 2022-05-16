#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "0167_two_sum_two.h"

using namespace leetcode::two_sum_two;

TEST(TWO_SUM_TWO, EXAMPLE_TEST) {
    auto res1 = Solution::two_sum({2, 7, 11, 15}, 9);
    auto res2 = Solution::two_sum({2, 3, 4}, 6);
    ASSERT_THAT(res1, testing::ElementsAre(1, 2));
    ASSERT_THAT(res2, testing::ElementsAre(1, 3));
}
