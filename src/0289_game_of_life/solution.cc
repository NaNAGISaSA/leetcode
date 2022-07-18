#include "0289_game_of_life.h"

namespace leetcode::game_of_life {

/*
 * Rule For Live Cells
 * < 2 live neighbors -> died
 * == 2 or 3 live neighbors -> live
 * > 3 live neighbors -> died
 *
 * Rule For Died Cells
 * == 3 live neighbors -> live
 */
void Solution::game_of_life(std::vector<std::vector<int>>& board) {
    // live to died -> 3, died to live -> 2
    size_t m = board.size(), n = board[0].size();

    auto count_lives = [m = m, n = n, &board](size_t i, size_t j) {
        int lives = 0;
        if (i - 1 < m) {
            lives += (board[i - 1][j] & 0x01);
            if (j - 1 < n) {
                lives += (board[i - 1][j - 1] & 0x01);
            }
            if (j + 1 < n) {
                lives += (board[i - 1][j + 1] & 0x01);
            }
        }
        if (i + 1 < m) {
            lives += (board[i + 1][j] & 0x01);
            if (j - 1 < n) {
                lives += (board[i + 1][j - 1] & 0x01);
            }
            if (j + 1 < n) {
                lives += (board[i + 1][j + 1] & 0x01);
            }
        }
        if (j - 1 < n) {
            lives += (board[i][j - 1] & 0x01);
        }
        if (j + 1 < n) {
            lives += (board[i][j + 1] & 0x01);
        }
        return lives;
    };

    for (size_t i = 0; i < m; ++i) {
        for (size_t j = 0; j < n; ++j) {
            int lives = count_lives(i, j);
            if (board[i][j] == 0 && lives == 3) {
                board[i][j] = 2;
            } else if (board[i][j] == 1 && (lives < 2 || lives > 3)) {
                board[i][j] = 3;
            }
        }
    }
    for (size_t i = 0; i < m; ++i) {
        for (size_t j = 0; j < n; ++j) {
            if (board[i][j] > 1) {
                board[i][j] = board[i][j] == 2 ? 1 : 0;
            }
        }
    }
}

}  // namespace leetcode::game_of_life
