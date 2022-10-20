#include "0373_find_k_pairs_with_smallest_sums.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

using namespace leetcode::find_k_pairs_with_smallest_sums;

TEST(FIND_K_PAIRS_WITH_SMALLEST_SUMS, FIRST_SOLUTION_TEST) {
    auto res1 = first::Solution::k_smallest_pairs({1, 7, 11}, {2, 4, 6}, 3);
    ASSERT_THAT(res1[0], testing::ElementsAre(1, 2));
    ASSERT_THAT(res1[1], testing::ElementsAre(1, 4));
    ASSERT_THAT(res1[2], testing::ElementsAre(1, 6));
    auto res2 = first::Solution::k_smallest_pairs({1, 1, 2}, {1, 2, 3}, 2);
    ASSERT_THAT(res2[0], testing::ElementsAre(1, 1));
    ASSERT_THAT(res2[1], testing::ElementsAre(1, 1));
    auto res3 = first::Solution::k_smallest_pairs({1, 2}, {3}, 3);
    ASSERT_THAT(res3[0], testing::ElementsAre(1, 3));
    ASSERT_THAT(res3[1], testing::ElementsAre(2, 3));
}

TEST(FIND_K_PAIRS_WITH_SMALLEST_SUMS, CLEANER_SOLUTION_TEST) {
    auto res1 = cleaner::Solution::k_smallest_pairs({1, 7, 11}, {2, 4, 6}, 3);
    ASSERT_THAT(res1[0], testing::ElementsAre(1, 2));
    ASSERT_THAT(res1[1], testing::ElementsAre(1, 4));
    ASSERT_THAT(res1[2], testing::ElementsAre(1, 6));
    auto res2 = cleaner::Solution::k_smallest_pairs({1, 1, 2}, {1, 2, 3}, 2);
    ASSERT_THAT(res2[0], testing::ElementsAre(1, 1));
    ASSERT_THAT(res2[1], testing::ElementsAre(1, 1));
    auto res3 = cleaner::Solution::k_smallest_pairs({1, 2}, {3}, 3);
    ASSERT_THAT(res3[0], testing::ElementsAre(1, 3));
    ASSERT_THAT(res3[1], testing::ElementsAre(2, 3));
}
