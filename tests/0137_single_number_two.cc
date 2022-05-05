#include <gtest/gtest.h>

#include "0137_single_number_two.h"

using namespace leetcode::single_number_two;

TEST(SINGLE_NUMBER_TWO, BIT_METHOD_TEST) {
    ASSERT_EQ(bit_method::Solution::single_number({0, 1, 0, 1, 0, 1, 9}), 9);
    ASSERT_EQ(bit_method::Solution::single_number({0, -1, 0, -7, -1, 0, -1}), -7);
}

TEST(SINGLE_NUMBER_TWO, XOR_METHOD_TEST) {
    ASSERT_EQ(xor_method::Solution::single_number({0, 1, 0, 1, 0, 1, 9}), 9);
    ASSERT_EQ(xor_method::Solution::single_number({0, -1, 0, -7, -1, 0, -1}), -7);
}
