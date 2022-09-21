#include "0345_reverse_vowels_of_a_string.h"

#include <gtest/gtest.h>

using namespace leetcode::reverse_vowels_of_a_string;

TEST(REVERSE_VOWELS_OF_A_STRING, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::reverse_vowels("hello"), "holle");
    ASSERT_EQ(Solution::reverse_vowels("leetcode"), "leotcede");
}
