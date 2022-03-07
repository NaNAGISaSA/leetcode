#include <gtest/gtest.h>

#include "0067_add_binary.h"

using namespace leetcode::add_binary;

TEST(ADD_BINARY, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::add_binary("11", "1"), "100");
    ASSERT_EQ(Solution::add_binary("1010", "1011"), "10101");
}
