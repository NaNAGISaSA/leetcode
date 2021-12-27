#include <gtest/gtest.h>

#include "0013_roman_to_integer.h"

using namespace leetcode::roman_to_integer;

TEST(ROMAN_TO_INTEGER, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::roman_to_int("III"), 3);
    ASSERT_EQ(Solution::roman_to_int("LVIII"), 58);
    ASSERT_EQ(Solution::roman_to_int("MCMXCIV"), 1994);
}
