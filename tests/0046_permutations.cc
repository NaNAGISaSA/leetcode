#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "0046_permutations.h"

using namespace leetcode::permutations;

TEST(PERMUTATIONS, COMMON_BACKTRACE_TEST) {
    std::vector<int> vec1{1, 2, 3}, vec2{1};
    auto result1 = common_backtrace::Solution::permute(vec1);
    ASSERT_EQ(result1.size(), 6);
    ASSERT_THAT(result1[0], testing::ElementsAre(1, 2, 3));
    ASSERT_THAT(result1[1], testing::ElementsAre(1, 3, 2));
    ASSERT_THAT(result1[2], testing::ElementsAre(2, 1, 3));
    ASSERT_THAT(result1[3], testing::ElementsAre(2, 3, 1));
    ASSERT_THAT(result1[4], testing::ElementsAre(3, 1, 2));
    ASSERT_THAT(result1[5], testing::ElementsAre(3, 2, 1));
    auto result2 = common_backtrace::Solution::permute(vec2);
    ASSERT_EQ(result2.size(), 1);
    ASSERT_THAT(result2[0], testing::ElementsAre(1));
}

TEST(PERMUTATIONS, SWAP_BACKTRACE_TEST) {
    std::vector<int> vec1{1, 2, 3}, vec2{1};
    auto result1 = swap_backtrace::Solution::permute(vec1);
    ASSERT_EQ(result1.size(), 6);
    ASSERT_THAT(result1[0], testing::ElementsAre(1, 2, 3));
    ASSERT_THAT(result1[1], testing::ElementsAre(1, 3, 2));
    ASSERT_THAT(result1[2], testing::ElementsAre(2, 1, 3));
    ASSERT_THAT(result1[3], testing::ElementsAre(2, 3, 1));
    ASSERT_THAT(result1[4], testing::ElementsAre(3, 2, 1));
    ASSERT_THAT(result1[5], testing::ElementsAre(3, 1, 2));
    auto result2 = swap_backtrace::Solution::permute(vec2);
    ASSERT_EQ(result2.size(), 1);
    ASSERT_THAT(result2[0], testing::ElementsAre(1));
}
