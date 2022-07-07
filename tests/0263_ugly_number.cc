#include "0263_ugly_number.h"

#include <gtest/gtest.h>

using namespace leetcode::ugly_number;

TEST(UGLY_NUMBER, EXAMPLE_TEST) {
    ASSERT_TRUE(Solution::is_ugly(6));
    ASSERT_TRUE(Solution::is_ugly(1));
    ASSERT_FALSE(Solution::is_ugly(14));
}
