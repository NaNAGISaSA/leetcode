#include "0131_palindrome_partitioning.h"

namespace leetcode::palindrome_partitioning {

namespace {
void dfs(const std::string& s,
         size_t start,
         std::vector<std::string>& acc,
         std::vector<std::vector<std::string>>& res,
         const std::vector<std::vector<bool>>& dp_mat) {
    if (start == s.size()) {
        res.push_back(acc);
        return;
    }
    for (size_t i = start; i < s.size(); ++i) {
        if (dp_mat[start][i]) {
            acc.push_back(s.substr(start, i - start + 1));
            dfs(s, i + 1, acc, res, dp_mat);
            acc.pop_back();
        }
    }
}
}  // namespace

std::vector<std::vector<std::string>> Solution::partition(const std::string& s) {
    size_t s_size = s.size();
    std::vector<std::vector<bool>> dp_mat(s_size, std::vector<bool>(s_size, false));
    for (size_t i = 0; i < s_size; ++i) {
        dp_mat[i][i] = true;
    }
    for (size_t i = s_size - 2; i < s_size; --i) {
        for (size_t j = i + 1; j < s_size; ++j) {
            dp_mat[i][j] = (j == i + 1 ? s[i] == s[j] : s[i] == s[j] && dp_mat[i + 1][j - 1]);
        }
    }
    std::vector<std::string> acc;
    std::vector<std::vector<std::string>> res;
    dfs(s, 0, acc, res, dp_mat);
    return res;
}

}  // namespace leetcode::palindrome_partitioning
