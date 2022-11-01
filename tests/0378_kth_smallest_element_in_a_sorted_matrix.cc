#include "0378_kth_smallest_element_in_a_sorted_matrix.h"

#include <gtest/gtest.h>

using namespace leetcode::kth_smallest_element_in_a_sorted_matrix;

TEST(KTH_SMALLEST_ELEMENT_IN_A_SORTED_MATRIX, HEAP_SOLUTION_TEST) {
    ASSERT_EQ(heap::Solution::kth_smallest({{1, 5, 9}, {10, 11, 13}, {12, 13, 15}}, 8), 13);
    ASSERT_EQ(heap::Solution::kth_smallest({{-1}}, 1), -1);
}

TEST(KTH_SMALLEST_ELEMENT_IN_A_SORTED_MATRIX, BS_SOLUTION_TEST) {
    ASSERT_EQ(bs::Solution::kth_smallest({{1, 5, 9}, {10, 11, 13}, {12, 13, 15}}, 8), 13);
    ASSERT_EQ(bs::Solution::kth_smallest({{-1}}, 1), -1);
}
