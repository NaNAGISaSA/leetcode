#include "0402_remove_k_digits.h"

#include <gtest/gtest.h>

using namespace leetcode::remove_k_digits;

TEST(REMOVE_K_DIGITS, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::remove_k_digits("1432219", 3), "1219");
    ASSERT_EQ(Solution::remove_k_digits("10200", 1), "200");
    ASSERT_EQ(Solution::remove_k_digits("10", 1), "0");
    ASSERT_EQ(Solution::remove_k_digits("10", 2), "0");
    ASSERT_EQ(Solution::remove_k_digits("10001", 4), "0");
    ASSERT_EQ(Solution::remove_k_digits("12345", 3), "12");
}
