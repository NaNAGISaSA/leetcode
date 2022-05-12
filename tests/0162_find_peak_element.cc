#include <gtest/gtest.h>

#include "0162_find_peak_element.h"

using namespace leetcode::find_peak_element;

TEST(FIND_PEAK_ELEMENT, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::find_peak_element({1, 2, 3, 1}), 2);
    ASSERT_EQ(Solution::find_peak_element({1, 2, 1, 3, 5, 6, 4}), 5);
    ASSERT_EQ(Solution::find_peak_element({3, 4, 3, 2, 1}), 1);
}
