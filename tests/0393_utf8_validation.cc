#include "0393_utf8_validation.h"

#include <gtest/gtest.h>

using namespace leetcode::utf8_validation;

TEST(UTF8_VALIDATION, NUMBER_SOLUTION_TEST) {
    ASSERT_TRUE(number::Solution::valid_utf8({197, 130, 1}));
    ASSERT_FALSE(number::Solution::valid_utf8({235, 140, 4}));
}

TEST(UTF8_VALIDATION, BIT_SOLUTION_TEST) {
    ASSERT_TRUE(bit::Solution::valid_utf8({197, 130, 1}));
    ASSERT_FALSE(bit::Solution::valid_utf8({235, 140, 4}));
}
