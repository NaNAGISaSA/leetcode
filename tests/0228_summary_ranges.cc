#include "0228_summary_ranges.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

using namespace leetcode::summary_ranges;

TEST(SUMMARY_RANGES, EXAMPLE_TEST) {
    ASSERT_THAT(Solution::summary_ranges({0, 1, 2, 4, 5, 7}), testing::ElementsAre("0->2", "4->5", "7"));
    ASSERT_THAT(Solution::summary_ranges({0, 2, 3, 4, 6, 8, 9}), testing::ElementsAre("0", "2->4", "6", "8->9"));
    ASSERT_THAT(Solution::summary_ranges({-2147483648, -2147483647, 2147483647}),
                testing::ElementsAre("-2147483648->-2147483647", "2147483647"));
}
