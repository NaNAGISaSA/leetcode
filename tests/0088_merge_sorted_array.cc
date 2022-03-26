#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "0088_merge_sorted_array.h"

using namespace leetcode::merge_sorted_array;

TEST(MERGE_SORTED_ARRAY, EXAMPLE_TEST) {
    std::vector<int> vec1{1, 2, 3, 0, 0, 0}, vec2{1, 2, 6};
    Solution::merge(vec1, 3, vec2, 3);
    ASSERT_THAT(vec1, testing::ElementsAre(1, 1, 2, 2, 3, 6));
}
