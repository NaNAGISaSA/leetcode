#include <vector>

#include "0044_wildcard_matching.h"

namespace leetcode::wildcard_matching {

bool Solution::is_match(const std::string& s, const std::string& p) {
    int s_size = static_cast<int>(s.size()), p_size = static_cast<int>(p.size());
    std::vector<std::vector<bool>> dp_matrix(s_size + 1, std::vector<bool>(p_size + 1, false));
    dp_matrix[s_size][p_size] = true;
    for (int i = p_size - 1; i >= 0; --i) {
        dp_matrix[s_size][i] = dp_matrix[s_size][i + 1] && p[i] == '*';
    }
    for (int i = s_size - 1; i >= 0; --i) {
        for (int j = p_size - 1; j >= 0; --j) {
            if (p[j] != '*') {
                dp_matrix[i][j] = (p[j] == '?' || s[i] == p[j]) && dp_matrix[i + 1][j + 1];
                continue;
            }
            for (int k = i; k <= s_size; ++k) {
                if (dp_matrix[k][j + 1]) {
                    dp_matrix[i][j] = true;
                    break;
                }
            }
        }
    }
    return dp_matrix[0][0];
}

}  // namespace leetcode::wildcard_matching
