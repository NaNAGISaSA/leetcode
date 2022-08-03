#include <algorithm>
#include <vector>

#include "0072_edit_distance.h"

namespace leetcode::edit_distance {

int Solution::min_distance(const std::string& word1, const std::string& word2) {
    size_t w1_size = word1.size(), w2_size = word2.size();
    if (w1_size == 0 || w2_size == 0) {
        return w1_size == 0 ? static_cast<int>(w2_size) : static_cast<int>(w1_size);
    }
    std::vector<std::vector<int>> dp_matrix(w1_size + 1, std::vector<int>(w2_size + 1));
    for (size_t i = 0; i <= w2_size; ++i) {
        dp_matrix[0][i] = static_cast<int>(i);
    }
    for (size_t i = 0; i <= w1_size; ++i) {
        dp_matrix[i][0] = static_cast<int>(i);
    }
    for (size_t i = 1; i <= w1_size; ++i) {
        for (size_t j = 1; j <= w2_size; ++j) {
            dp_matrix[i][j] = std::min(std::min(dp_matrix[i - 1][j], dp_matrix[i][j - 1]) + 1,
                                       dp_matrix[i - 1][j - 1] + (word1[i - 1] == word2[j - 1] ? 0 : 1));
        }
    }
    return dp_matrix[w1_size][w2_size];
}

}  // namespace leetcode::edit_distance
