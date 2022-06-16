#include "0215_kth_largest_element_in_an_array.h"

#include <gtest/gtest.h>

using namespace leetcode::kth_largest_element_in_an_array;

TEST(KTH_LARGEST_ELEMENT_IN_AN_ARRAY, HEAP_SOLUTION_TEST) {
    std::vector<int> vec1{3, 2, 1, 5, 6, 4}, vec2{3, 2, 3, 1, 2, 4, 5, 5, 6};
    ASSERT_EQ(heap::Solution::find_kth_largest(vec1, 2), 5);
    ASSERT_EQ(heap::Solution::find_kth_largest(vec2, 4), 4);
}

TEST(KTH_LARGEST_ELEMENT_IN_AN_ARRAY, QUICK_SELECT_SOLUTION_TEST) {
    std::vector<int> vec1{3, 2, 1, 5, 6, 4}, vec2{3, 2, 3, 1, 2, 4, 5, 5, 6};
    ASSERT_EQ(quick_select::Solution::find_kth_largest(vec1, 2), 5);
    ASSERT_EQ(quick_select::Solution::find_kth_largest(vec2, 4), 4);
}
