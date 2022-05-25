#include "0191_number_of_one_bits.h"

#include <gtest/gtest.h>

using namespace leetcode::number_of_one_bits;

TEST(NUMBER_OF_ONE_BITS, COMMON_SOLUTION_TEST) {
    ASSERT_EQ(common::Solution::hamming_weight(15u), 4);
    ASSERT_EQ(common::Solution::hamming_weight(0u), 0);
}

TEST(NUMBER_OF_ONE_BITS, ANOTHER_SOLUTION_TEST) {
    ASSERT_EQ(another::Solution::hamming_weight(15u), 4);
    ASSERT_EQ(another::Solution::hamming_weight(0u), 0);
}
