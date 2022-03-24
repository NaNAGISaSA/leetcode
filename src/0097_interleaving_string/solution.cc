#include <vector>

#include "0097_interleaving_string.h"

namespace leetcode::interleaving_string {

bool Solution::is_interleave(const std::string& s1, const std::string& s2, const std::string& s3) {
    if (s1.size() + s2.size() != s3.size()) {
        return false;
    }
    // Can use a dp_vec to reduce space complexity from O(M*N) to O(min(M, N))
    std::vector<std::vector<bool>> dp_mat(s1.size() + 1, std::vector<bool>(s2.size() + 1, false));
    dp_mat[0][0] = true;
    for (size_t i = 1; i <= s1.size(); ++i) {
        dp_mat[i][0] = dp_mat[i - 1][0] && s1[i - 1] == s3[i - 1];
    }
    for (size_t i = 1; i <= s2.size(); ++i) {
        dp_mat[0][i] = dp_mat[0][i - 1] && s2[i - 1] == s3[i - 1];
    }
    for (size_t i = 1; i <= s1.size(); ++i) {
        for (size_t j = 1; j <= s2.size(); ++j) {
            dp_mat[i][j] =
                (s1[i - 1] == s3[i + j - 1] && dp_mat[i - 1][j]) || (s2[j - 1] == s3[i + j - 1] && dp_mat[i][j - 1]);
        }
    }
    return dp_mat[s1.size()][s2.size()];
}

}  // namespace leetcode::interleaving_string
