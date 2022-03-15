#include <algorithm>
#include <vector>

#include "0072_edit_distance.h"

namespace leetcode::edit_distance {

int Solution::min_distance(const std::string& word1, const std::string& word2) {
    if (word1.size() == 0 || word2.size() == 0) {
        return word1.size() == 0 ? static_cast<int>(word2.size()) : static_cast<int>(word1.size());
    }
    std::vector<std::vector<int>> dp_matrix(word1.size() + 1, std::vector<int>(word2.size() + 1));
    for (int i = 0; i <= static_cast<int>(word2.size()); ++i) {
        dp_matrix[0][i] = i;
    }
    for (int i = 0; i <= static_cast<int>(word1.size()); ++i) {
        dp_matrix[i][0] = i;
    }
    for (int i = 1; i <= static_cast<int>(word1.size()); ++i) {
        for (int j = 1; j <= static_cast<int>(word2.size()); ++j) {
            dp_matrix[i][j] = std::min(std::min(dp_matrix[i - 1][j], dp_matrix[i][j - 1]) + 1,
                                       dp_matrix[i - 1][j - 1] + (word1[i - 1] == word2[j - 1] ? 0 : 1));
        }
    }
    return dp_matrix[word1.size()][word2.size()];
}

}  // namespace leetcode::edit_distance
