#include <gtest/gtest.h>

#include "0012_integer_to_roman.h"

using namespace leetcode::integer_to_roman;

TEST(INTEGER_TO_ROMAN, FIRST_SOLUTION_TEST) {
    ASSERT_EQ(first::Solution::int_to_roman(3), "III");
    ASSERT_EQ(first::Solution::int_to_roman(58), "LVIII");
    ASSERT_EQ(first::Solution::int_to_roman(1994), "MCMXCIV");
}

TEST(INTEGER_TO_ROMAN, ANOTHER_SOLUTION_TEST) {
    ASSERT_EQ(another::Solution::int_to_roman(3), "III");
    ASSERT_EQ(another::Solution::int_to_roman(58), "LVIII");
    ASSERT_EQ(another::Solution::int_to_roman(1994), "MCMXCIV");
}
