#include "0395_longest_substring_with_at_least_k_repeating_characters.h"

#include <gtest/gtest.h>

using namespace leetcode::longest_substring_with_at_least_k_repeating_characters;

TEST(LONGEST_SUBSTRING_WITH_AT_LEAST_K_REPEATING_CHARACTERS, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::longest_substring("aaabb", 3), 3);
    ASSERT_EQ(Solution::longest_substring("ababbc", 2), 5);
    ASSERT_EQ(Solution::longest_substring("ababacb", 3), 0);
    ASSERT_EQ(Solution::longest_substring("bbaaacbd", 3), 3);
    ASSERT_EQ(Solution::longest_substring("baaabcb", 3), 3);
}
