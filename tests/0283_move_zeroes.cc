#include "0283_move_zeroes.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

using namespace leetcode::move_zeroes;

TEST(MOVE_ZEROES, EXAMPLE_TEST) {
    std::vector<int> vec1{0, 1, 0, 3, 12}, vec2{0, 0};
    Solution::move_zeroes(vec1);
    Solution::move_zeroes(vec2);
    ASSERT_THAT(vec1, testing::ElementsAre(1, 3, 12, 0, 0));
    ASSERT_THAT(vec2, testing::ElementsAre(0, 0));
}
