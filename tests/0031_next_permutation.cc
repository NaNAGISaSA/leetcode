#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "0031_next_permutation.h"

using namespace leetcode::next_permutation;

TEST(NEXT_PERMUTATION, EXAMPLE_TEST) {
    std::vector<int> input1{1, 2, 3}, input2{3, 2, 1}, input3{1, 3, 4, 3, 3, 2};
    Solution::next_permutation(input1);
    Solution::next_permutation(input2);
    Solution::next_permutation(input3);
    ASSERT_THAT(input1, testing::ElementsAre(1, 3, 2));
    ASSERT_THAT(input2, testing::ElementsAre(1, 2, 3));
    ASSERT_THAT(input3, testing::ElementsAre(1, 4, 2, 3, 3, 3));
}
