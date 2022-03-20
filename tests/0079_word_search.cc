#include <gtest/gtest.h>

#include "0079_word_search.h"

using namespace leetcode::word_search;

TEST(WORD_SEARCH, EXAMPLE_TEST) {
    std::vector<std::vector<char>> board{{'A', 'B', 'C', 'E'}, {'S', 'F', 'C', 'S'}, {'A', 'D', 'E', 'E'}};
    ASSERT_TRUE(Solution::exist(board, "ABCCED"));
    ASSERT_TRUE(Solution::exist(board, "SEE"));
    ASSERT_FALSE(Solution::exist(board, "ABCB"));
}
