#include "0242_valid_anagram.h"

#include <gtest/gtest.h>

using namespace leetcode::valid_anagram;

TEST(VALID_ANAGRAM, EXAMPLE_TEST) {
    ASSERT_TRUE(Solution::is_anagram("anagram", "nagaram"));
    ASSERT_FALSE(Solution::is_anagram("rat", "car"));
}
