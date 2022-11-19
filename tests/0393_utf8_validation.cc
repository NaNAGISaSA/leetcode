#include "0393_utf8_validation.h"

#include <gtest/gtest.h>

using namespace leetcode::utf8_validation;

TEST(UTF8_VALIDATION, EXAMPLE_TEST) {
    ASSERT_TRUE(Solution::valid_utf8({197, 130, 1}));
    ASSERT_FALSE(Solution::valid_utf8({235, 140, 4}));
}
