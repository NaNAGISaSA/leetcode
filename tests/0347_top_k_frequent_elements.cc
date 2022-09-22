#include "0347_top_k_frequent_elements.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

using namespace leetcode::top_k_frequent_elements;

TEST(TOP_K_FREQUENT_ELEMENTS, HEAP_SOLUTION_TEST) {
    ASSERT_THAT(heap::Solution::top_k_frequent({1, 1, 1, 2, 2, 3}, 2), testing::ElementsAre(2, 1));
    ASSERT_THAT(heap::Solution::top_k_frequent({1}, 1), testing::ElementsAre(1));
}

TEST(TOP_K_FREQUENT_ELEMENTS, BUCKET_SORT_SOLUTION_TEST) {
    ASSERT_THAT(bucket_sort::Solution::top_k_frequent({1, 1, 1, 2, 2, 3}, 2), testing::ElementsAre(1, 2));
    ASSERT_THAT(bucket_sort::Solution::top_k_frequent({1}, 1), testing::ElementsAre(1));
}
