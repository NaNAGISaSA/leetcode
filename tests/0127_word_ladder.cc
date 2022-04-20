#include <gtest/gtest.h>

#include "0127_word_ladder.h"

using namespace leetcode::word_ladder;
using namespace leetcode;

TEST(WORD_LADDER, EXAMPLE_TEST) {
    std::vector<std::string> vec1{"hot", "dot", "dog", "lot", "log", "cog"}, vec2{"hot", "dot", "dog", "lot", "log"};
    ASSERT_EQ(Solution::ladder_length("hit", "cog", vec1), 5);
    ASSERT_EQ(Solution::ladder_length("hit", "cog", vec2), 0);
}
