#include "0282_expression_add_operators.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

using namespace leetcode::expression_add_operators;

TEST(EXPRESSION_ADD_OPERATORS, EXAMPLE_TEST) {
    ASSERT_THAT(Solution::add_operators("123", 6), testing::ElementsAre("1+2+3", "1*2*3"));
    ASSERT_THAT(Solution::add_operators("232", 8), testing::ElementsAre("2+3*2", "2*3+2"));
    ASSERT_THAT(Solution::add_operators("3456237490", 9191), testing::ElementsAre());
}
