#include "0378_kth_smallest_element_in_a_sorted_matrix.h"

#include <gtest/gtest.h>

using namespace leetcode::kth_smallest_element_in_a_sorted_matrix;

TEST(KTH_SMALLEST_ELEMENT_IN_A_SORTED_MATRIX, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::kth_smallest({{1, 5, 9}, {10, 11, 13}, {12, 13, 15}}, 8), 13);
    ASSERT_EQ(Solution::kth_smallest({{-1}}, 1), -1);
}
