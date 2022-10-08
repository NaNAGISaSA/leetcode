#include "0357_count_numbers_with_unique_digits.h"

#include <gtest/gtest.h>

using namespace leetcode::count_numbers_with_unique_digits;

TEST(COUNT_NUMBERS_WITH_UNIQUE_DIGITS, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::count_numbers_with_unique_digits(0), 1);
    ASSERT_EQ(Solution::count_numbers_with_unique_digits(2), 91);
    ASSERT_EQ(Solution::count_numbers_with_unique_digits(3), 739);
}
