#include "0238_product_of_array_except_self.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

using namespace leetcode::product_of_array_except_self;

TEST(PRODUCT_OF_ARRAY_EXCEPT_SELF, EXAMPLE_TEST) {
    std::vector<int> input1{1, 2, 3, 4}, input2{-1, 1, 0, -3, 3};
    ASSERT_THAT(Solution::product_except_self(input1), testing::ElementsAre(24, 12, 8, 6));
    ASSERT_THAT(Solution::product_except_self(input2), testing::ElementsAre(0, 0, 9, 0, 0));
}
