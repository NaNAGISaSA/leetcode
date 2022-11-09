#include "0387_first_unique_character_in_a_string.h"

#include <gtest/gtest.h>

using namespace leetcode::first_unique_character_in_a_string;

TEST(FIRST_UNIQUE_CHARACTER_IN_A_STRING, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::first_unique_char("leetcode"), 0);
    ASSERT_EQ(Solution::first_unique_char("loveleetcode"), 2);
    ASSERT_EQ(Solution::first_unique_char("aabb"), -1);
}
