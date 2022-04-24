#include <algorithm>
#include <vector>

#include "0132_palindrome_partitioning_two.h"

namespace leetcode::palindrome_partitioning_two {

int Solution::min_cut(const std::string& s) {
    size_t s_size = s.size();
    std::vector<std::vector<bool>> dp_mat(s_size, std::vector<bool>(s_size, false));
    std::vector<int> dp_vec(s_size, 0);
    dp_mat.back().back() = true;
    // First write two O(N^2) loop to get dp_mat and dp_vec
    // Then find that it can be merged into one
    for (size_t i = s_size - 2; i < s_size; --i) {
        dp_mat[i][i] = true;
        dp_vec[i] = 1 + dp_vec[i + 1];
        for (size_t j = i + 1; j < s_size; ++j) {
            dp_mat[i][j] = (j == i + 1 ? s[i] == s[j] : s[i] == s[j] && dp_mat[i + 1][j - 1]);
            if (dp_mat[i][j]) {
                dp_vec[i] = j == s_size - 1 ? 0 : std::min(dp_vec[i], 1 + dp_vec[j + 1]);
            }
        }
    }
    return dp_vec.front();
}

}  // namespace leetcode::palindrome_partitioning_two
