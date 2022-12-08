#include "0405_convert_a_number_to_hexadecimal.h"

#include <gtest/gtest.h>
#include <limits>

using namespace leetcode::convert_a_number_to_hexadecimal;

TEST(CONVERT_A_NUMBER_TO_HEXADECIMAL, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::to_hex(26), "1a");
    ASSERT_EQ(Solution::to_hex(-1), "ffffffff");
    ASSERT_EQ(Solution::to_hex(-123456), "fffe1dc0");
    ASSERT_EQ(Solution::to_hex(std::numeric_limits<int>::max()), "7fffffff");
    ASSERT_EQ(Solution::to_hex(std::numeric_limits<int>::min()), "80000000");
}
