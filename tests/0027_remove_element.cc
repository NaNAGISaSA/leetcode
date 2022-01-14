#include <gtest/gtest.h>

#include "0027_remove_element.h"

using namespace leetcode::remove_element;

TEST(REMOVE_ELEMENT, EXAMPLE_TEST) {
    std::vector<int> nums1{3, 2, 2, 3}, nums2{0, 1, 2, 2, 3, 0, 4, 2};
    std::vector<int> truth1{2, 2}, truth2{0, 1, 4, 0, 3};
    ASSERT_EQ(Solution::remove_element(nums1, 3), 2);
    ASSERT_EQ(Solution::remove_element(nums2, 2), 5);
    for (size_t i = 0; i < truth1.size(); ++i) {
        ASSERT_EQ(nums1[i], truth1[i]);
    }
    for (size_t i = 0; i < truth2.size(); ++i) {
        ASSERT_EQ(nums2[i], truth2[i]);
    }
}
