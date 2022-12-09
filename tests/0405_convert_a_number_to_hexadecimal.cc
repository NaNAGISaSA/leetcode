#include "0405_convert_a_number_to_hexadecimal.h"

#include <gtest/gtest.h>
#include <limits>

using namespace leetcode::convert_a_number_to_hexadecimal;

TEST(CONVERT_A_NUMBER_TO_HEXADECIMAL, FIRST_SOLUTION_TEST) {
    ASSERT_EQ(first::Solution::to_hex(26), "1a");
    ASSERT_EQ(first::Solution::to_hex(-1), "ffffffff");
    ASSERT_EQ(first::Solution::to_hex(-123456), "fffe1dc0");
    ASSERT_EQ(first::Solution::to_hex(std::numeric_limits<int>::max()), "7fffffff");
    ASSERT_EQ(first::Solution::to_hex(std::numeric_limits<int>::min()), "80000000");
}

TEST(CONVERT_A_NUMBER_TO_HEXADECIMAL, CLEAN_SOLUTION_TEST) {
    ASSERT_EQ(clean::Solution::to_hex(26), "1a");
    ASSERT_EQ(clean::Solution::to_hex(-1), "ffffffff");
    ASSERT_EQ(clean::Solution::to_hex(-123456), "fffe1dc0");
    ASSERT_EQ(clean::Solution::to_hex(std::numeric_limits<int>::max()), "7fffffff");
    ASSERT_EQ(clean::Solution::to_hex(std::numeric_limits<int>::min()), "80000000");
}
