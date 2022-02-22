#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "0056_merge_intervals.h"

using namespace leetcode::merge_intervals;

TEST(MERGE_INTERVALS, EXAMPLE_TEST) {
    std::vector<std::vector<int>> input1{{1, 3}, {2, 6}, {8, 10}, {15, 18}}, input2{{1, 4}, {4, 5}};
    auto res1 = Solution::merge(input1);
    ASSERT_EQ(res1.size(), 3);
    ASSERT_THAT(res1[0], testing::ElementsAre(1, 6));
    ASSERT_THAT(res1[1], testing::ElementsAre(8, 10));
    ASSERT_THAT(res1[2], testing::ElementsAre(15, 18));
    auto res2 = Solution::merge(input2);
    ASSERT_EQ(res2.size(), 1);
    ASSERT_THAT(res2[0], testing::ElementsAre(1, 5));
}
