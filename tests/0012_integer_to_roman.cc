#include <gtest/gtest.h>

#include "0012_integer_to_roman.h"

using namespace leetcode::integer_to_roman;

TEST(INTEGER_TO_ROMAN, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::int_to_roman(3), "III");
    ASSERT_EQ(Solution::int_to_roman(58), "LVIII");
    ASSERT_EQ(Solution::int_to_roman(1994), "MCMXCIV");
}
