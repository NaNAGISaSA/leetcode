#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "0077_combinations.h"

using namespace leetcode::combinations;

TEST(COMBINATIONS, EXAMPLE_TEST) {
    auto res1 = Solution::combine(4, 2);
    ASSERT_EQ(res1.size(), 6);
    ASSERT_THAT(res1[0], testing::ElementsAre(1, 2));
    ASSERT_THAT(res1[1], testing::ElementsAre(1, 3));
    ASSERT_THAT(res1[2], testing::ElementsAre(1, 4));
    ASSERT_THAT(res1[3], testing::ElementsAre(2, 3));
    ASSERT_THAT(res1[4], testing::ElementsAre(2, 4));
    ASSERT_THAT(res1[5], testing::ElementsAre(3, 4));
    auto res2 = Solution::combine(1, 1);
    ASSERT_EQ(res2.size(), 1);
    ASSERT_THAT(res2[0], testing::ElementsAre(1));
}
