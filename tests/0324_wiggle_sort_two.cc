#include "0324_wiggle_sort_two.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

using namespace leetcode::wiggle_sort_two;

TEST(WIGGLE_SORT_TWO, EXAMPLE_TEST) {
    std::vector<int> vec1{1, 5, 1, 1, 6, 4}, vec2{1, 3, 2, 2, 3, 1};
    Solution::wiggle_sort(vec1);
    ASSERT_THAT(vec1, testing::ElementsAre(1, 6, 1, 5, 1, 4));
    Solution::wiggle_sort(vec2);
    ASSERT_THAT(vec2, testing::ElementsAre(2, 3, 1, 3, 1, 2));
}
