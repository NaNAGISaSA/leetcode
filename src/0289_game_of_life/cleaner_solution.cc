#include "0289_game_of_life.h"

#include <algorithm>

namespace leetcode::game_of_life::cleaner {

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
    // Most upvoted solution also uses 2 and 3， but with different method:
    // 00: dead to dead
    // 01: live to dead
    // 10: dead to live
    // 11: live to live
    size_t m = board.size(), n = board[0].size();

    auto count_lives = [m = m, n = n, &board](size_t i, size_t j) {
        int lives = 0;
        for (size_t ii = std::min(i - 1, i); ii <= std::min(i + 1, m - 1); ++ii) {
            for (size_t jj = std::min(j - 1, j); jj <= std::min(j + 1, n - 1); ++jj) {
                lives += board[ii][jj] & 0x01;
            }
        }
        return lives - (board[i][j] & 0x01);
    };

    for (size_t i = 0; i < m; ++i) {
        for (size_t j = 0; j < n; ++j) {
            int lives = count_lives(i, j);
            if (board[i][j] == 1 && (lives == 2 || lives == 3)) {
                board[i][j] = 3;
            } else if (board[i][j] == 0 && lives == 3) {
                board[i][j] = 2;
            }
        }
    }
    for (size_t i = 0; i < m; ++i) {
        for (size_t j = 0; j < n; ++j) {
            board[i][j] >>= 1;
        }
    }
}

}  // namespace leetcode::game_of_life::cleaner
