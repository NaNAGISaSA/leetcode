#include "0215_kth_largest_element_in_an_array.h"

#include <gtest/gtest.h>

using namespace leetcode::kth_largest_element_in_an_array;

TEST(KTH_LARGEST_ELEMENT_IN_AN_ARRAY, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::find_kth_largest({3, 2, 1, 5, 6, 4}, 2), 5);
    ASSERT_EQ(Solution::find_kth_largest({3, 2, 3, 1, 2, 4, 5, 5, 6}, 4), 4);
}
