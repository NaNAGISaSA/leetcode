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
    for (int i = p_size - 2; i >= 0; --i) {
        for (int j = s_size - 1; j >= 0; --j) {
            if (p[i + 1] != '*') {
                bool first_match = p[i] == '.' || s[j] == p[i];
                dp_matrix[j][i] = first_match && dp_matrix[j + 1][i + 1];
                continue;
            }
            if (p[i] != '.' && s[j] != p[i]) {
                dp_matrix[j][i] = dp_matrix[j][i + 2];
                continue;
            }
            if (dp_matrix[j][i + 2]) {
                dp_matrix[j][i] = true;
                continue;
            }
            int tmp = j;
            while (tmp < s_size && (p[i] == '.' || p[i] == s[tmp])) {
                if (dp_matrix[tmp + 1][i + 2]) {
                    dp_matrix[j][i] = true;
                    break;
                }
                ++tmp;
            }
            dp_matrix[j][i] = dp_matrix[j][i] || dp_matrix[tmp][i + 2];
        }
    }
    return dp_matrix[0][0];
}

}  // namespace leetcode::regular_expression_matching::dp
