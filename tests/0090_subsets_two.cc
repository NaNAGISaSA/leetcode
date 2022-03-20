#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "0090_subsets_two.h"

using namespace leetcode::subsets_two;

TEST(SUBSETS_TWO, EXAMPLE_TEST) {
    std::vector<int> vec1{1, 2, 2}, vec2{1};
    auto res1 = Solution::subsets_with_dup(vec1);
    ASSERT_EQ(res1.size(), 6);
    ASSERT_THAT(res1[0], testing::ElementsAre());
    ASSERT_THAT(res1[1], testing::ElementsAre(1));
    ASSERT_THAT(res1[2], testing::ElementsAre(1, 2));
    ASSERT_THAT(res1[3], testing::ElementsAre(1, 2, 2));
    ASSERT_THAT(res1[4], testing::ElementsAre(2));
    ASSERT_THAT(res1[5], testing::ElementsAre(2, 2));
    auto res2 = Solution::subsets_with_dup(vec2);
    ASSERT_EQ(res2.size(), 2);
    ASSERT_THAT(res2[0], testing::ElementsAre());
    ASSERT_THAT(res2[1], testing::ElementsAre(1));
}
