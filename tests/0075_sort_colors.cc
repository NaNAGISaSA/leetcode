#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "0075_sort_colors.h"

using namespace leetcode::sort_colors;

TEST(SORT_COLORS, EXAMPLE_TEST) {
    std::vector<int> nums1{2, 0, 2, 1, 1, 0}, nums2{2, 0, 1};
    Solution::sort_colors(nums1);
    ASSERT_THAT(nums1, testing::ElementsAre(0, 0, 1, 1, 2, 2));
    Solution::sort_colors(nums2);
    ASSERT_THAT(nums2, testing::ElementsAre(0, 1, 2));
}
