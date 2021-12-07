#include <gtest/gtest.h>

#include "0006_zigzag_conversion.h"

using namespace leetcode::zigzag_conversion;

TEST(ZIGZAG_CONVERSION, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::convert("ABCDE", 1), "ABCDE");
    ASSERT_EQ(Solution::convert("ABCDE", 2), "ACEBD");
    ASSERT_EQ(Solution::convert("PAYPALISHIRING", 3), "PAHNAPLSIIGYIR");
    ASSERT_EQ(Solution::convert("PAYPALISHIRING", 4), "PINALSIGYAHRPI");
}
