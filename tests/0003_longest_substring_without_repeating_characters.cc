#include <gtest/gtest.h>

#include "0003_longest_substring_without_repeating_characters.h"

using namespace leetcode::longest_substring_without_repeating_characters;

TEST(LONGEST_SUBSTRING_WITHOUT_REPEATING_CHARACTERS, FIRST_SOLUTION_TEST) {
    ASSERT_EQ(first_solution::Solution::length_of_longest_substring("abcabcbb"), 3);
    ASSERT_EQ(first_solution::Solution::length_of_longest_substring("bbbbb"), 1);
    ASSERT_EQ(first_solution::Solution::length_of_longest_substring("pwwkew"), 3);
    ASSERT_EQ(first_solution::Solution::length_of_longest_substring(""), 0);
    // not pass the first time
    ASSERT_EQ(first_solution::Solution::length_of_longest_substring("au"), 2);
    ASSERT_EQ(first_solution::Solution::length_of_longest_substring("abba"), 2);
}

TEST(LONGEST_SUBSTRING_WITHOUT_REPEATING_CHARACTERS, TWO_POINTERS_TEST) {
    ASSERT_EQ(two_pointers::Solution::length_of_longest_substring("abcabcbb"), 3);
    ASSERT_EQ(two_pointers::Solution::length_of_longest_substring("bbbbb"), 1);
    ASSERT_EQ(two_pointers::Solution::length_of_longest_substring("pwwkew"), 3);
    ASSERT_EQ(two_pointers::Solution::length_of_longest_substring(""), 0);
    ASSERT_EQ(two_pointers::Solution::length_of_longest_substring("au"), 2);
    ASSERT_EQ(two_pointers::Solution::length_of_longest_substring("abba"), 2);
}
