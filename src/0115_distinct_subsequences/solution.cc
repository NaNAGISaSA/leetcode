#include <limits>
#include <vector>

#include "0115_distinct_subsequences.h"

namespace leetcode::distinct_subsequences {

int Solution::num_distinct(const std::string& s, const std::string& t) {
    int s_size = static_cast<int>(s.size()), t_size = static_cast<int>(t.size());
    if (s_size < t_size) {
        return 0;
    }
    if (s_size == t_size) {
        return s == t ? 1 : 0;
    }
    // dp[i][j] = num_distinct(s.subtr(i), t.substr(j))
    std::vector<std::vector<long>> dp_mat(s_size, std::vector<long>(t_size, 0));
    dp_mat.back().back() = s.back() == t.back() ? 1 : 0;
    for (int i = s_size - 2; i >= 0; --i) {
        dp_mat[i].back() = dp_mat[i + 1].back() + (s[i] == t.back() ? 1 : 0);
    }
    for (int i = t_size - 2; i >= 0; --i) {
        for (int j = s_size - 2; j >= 0; --j) {
            if (s[j] == t[i]) {
                // The result can be guaranteed to be represented as a 32bit signed int, but there is
                //   no promise that the intermediate result will not overflow.
                dp_mat[j][i] = (dp_mat[j + 1][i + 1] + dp_mat[j + 1][i]) % (std::numeric_limits<int>::max() + 1L);
            } else {
                dp_mat[j][i] = dp_mat[j + 1][i];
            }
        }
    }
    return static_cast<int>(dp_mat[0][0]);
}

}  // namespace leetcode::distinct_subsequences
