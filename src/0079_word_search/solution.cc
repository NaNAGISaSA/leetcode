#include "0079_word_search.h"

namespace {
bool backtrace(std::vector<std::vector<char>>& board, const std::string& word, size_t word_idx, size_t i, size_t j) {
    if (word_idx == word.size()) {
        return true;
    }
    if (i >= board.size() || j >= board[0].size()) {
        return false;
    }
    if (board[i][j] != word[word_idx]) {
        return false;
    }
    char record = board[i][j];
    board[i][j] = '\0';
    bool result = backtrace(board, word, word_idx + 1, i - 1, j) || backtrace(board, word, word_idx + 1, i + 1, j) ||
                  backtrace(board, word, word_idx + 1, i, j - 1) || backtrace(board, word, word_idx + 1, i, j + 1);
    board[i][j] = record;
    return result;
}
}  // namespace

namespace leetcode::word_search {

bool Solution::exist(std::vector<std::vector<char>>& board, const std::string& word) {
    for (size_t i = 0; i < board.size(); ++i) {
        for (size_t j = 0; j < board[0].size(); ++j) {
            if (backtrace(board, word, 0, i, j)) {
                return true;
            }
        }
    }
    return false;
}

}  // namespace leetcode::word_search
