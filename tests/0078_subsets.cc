#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "0078_subsets.h"

using namespace leetcode::subsets;

TEST(SUBSETS, EXAMPLE_TEST) {
    auto res1 = Solution::subsets({1, 2});
    ASSERT_EQ(res1.size(), 4);
    ASSERT_THAT(res1[0], testing::ElementsAre());
    ASSERT_THAT(res1[1], testing::ElementsAre(2));
    ASSERT_THAT(res1[2], testing::ElementsAre(1));
    ASSERT_THAT(res1[3], testing::ElementsAre(1, 2));
    auto res2 = Solution::subsets({1});
    ASSERT_EQ(res2.size(), 2);
    ASSERT_THAT(res2[0], testing::ElementsAre());
    ASSERT_THAT(res2[1], testing::ElementsAre(1));
}
