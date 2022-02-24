#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "0057_insert_interval.h"

using namespace leetcode::insert_intervals;

TEST(INSERT_INTERVALS, EXAMPLE_TEST) {
    std::vector<std::vector<int>> input1{{1, 3}, {6, 9}}, input2{{1, 2}, {3, 5}, {6, 7}, {8, 10}, {12, 16}};
    std::vector<int> interval1{2, 5}, interval2{4, 8};
    auto res1 = Solution::insert(input1, interval1);
    ASSERT_EQ(res1.size(), 2);
    ASSERT_THAT(res1[0], testing::ElementsAre(1, 5));
    ASSERT_THAT(res1[1], testing::ElementsAre(6, 9));
    auto res2 = Solution::insert(input2, interval2);
    ASSERT_EQ(res2.size(), 3);
    ASSERT_THAT(res2[0], testing::ElementsAre(1, 2));
    ASSERT_THAT(res2[1], testing::ElementsAre(3, 10));
    ASSERT_THAT(res2[2], testing::ElementsAre(12, 16));
}
