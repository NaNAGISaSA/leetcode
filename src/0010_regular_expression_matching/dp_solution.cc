#include <vector>

#include "0010_regular_expression_matching.h"

namespace leetcode::regular_expression_matching::dp {

bool Solution::match(const std::string& s, const std::string& p) {
    int s_size = static_cast<int>(s.size()), p_size = static_cast<int>(p.size());
    std::vector<std::vector<bool>> dp_matrix(s_size + 1, std::vector<bool>(p_size + 1, false));
    dp_matrix[s_size][p_size] = true;
    for (int i = p_size - 2; i >= 0; i -= 2) {
        dp_matrix[s_size][i] = dp_matrix[s_size][i + 2] && p[i + 1] == '*';
    }
    dp_matrix[s_size - 1][p_size - 1] = p[p_size - 1] == '.' || s[s_size - 1] == p[p_size - 1];
    for (int i = s_size - 1; i >= 0; --i) {
        for (int j = p_size - 2; j >= 0; --j) {
            if (p[j + 1] != '*') {
                dp_matrix[i][j] = (p[j] == '.' || s[i] == p[j]) && dp_matrix[i + 1][j + 1];
                continue;
            }
            if (dp_matrix[i][j + 2]) {
                dp_matrix[i][j] = true;
                continue;
            }
            int tmp = i;
            while (tmp < s_size && (s[tmp++] == p[j] || p[j] == '.')) {
                if (dp_matrix[tmp][j + 2]) {
                    dp_matrix[i][j] = true;
                    break;
                }
            }
        }
    }
    return dp_matrix[0][0];
}

}  // namespace leetcode::regular_expression_matching::dp
