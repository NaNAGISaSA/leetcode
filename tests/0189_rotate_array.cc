#include "0189_rotate_array.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

using namespace leetcode::rotate_array;

TEST(ROTATE_ARRAY, EXAMPLE_TEST) {
    std::vector<int> vec1{1, 2, 3, 4, 5, 6, 7}, vec2{-1, -100, 3, 99};
    Solution::rotate(vec1, 3);
    Solution::rotate(vec2, 6);
    ASSERT_THAT(vec1, testing::ElementsAre(5, 6, 7, 1, 2, 3, 4));
    ASSERT_THAT(vec2, testing::ElementsAre(3, 99, -1, -100));
}
