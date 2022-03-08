#include <gtest/gtest.h>

#include "0067_add_binary.h"

using namespace leetcode::add_binary;

TEST(ADD_BINARY, FIRST_SOLUTION_TEST) {
    ASSERT_EQ(first::Solution::add_binary("11", "1"), "100");
    ASSERT_EQ(first::Solution::add_binary("1010", "1011"), "10101");
}

TEST(ADD_BINARY, CLEANER_SOLUTION_TEST) {
    ASSERT_EQ(cleaner::Solution::add_binary("11", "1"), "100");
    ASSERT_EQ(cleaner::Solution::add_binary("1010", "1011"), "10101");
}
