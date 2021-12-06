#include <vector>

#include "0005_longest_palindromic_substring.h"

namespace leetcode::longest_palindromic_substring {

std::string Solution::longest_palindrome(const std::string& s) {
    int str_size = static_cast<int>(s.size());
    if (str_size < 2) {
        return s;
    }
    std::vector<std::vector<bool>> dp_matrix(str_size, std::vector<bool>(str_size, false));
    for (int i = 0; i < str_size; ++i) {
        dp_matrix[i][i] = true;
    }
    int start = 0, end = 0, index_length = 0;
    for (int i = str_size - 2; i >= 0; --i) {
        for (int j = i + 1; j < str_size; ++j) {
            if (j == i + 1) {
                dp_matrix[i][j] = s[i] == s[j];
            } else {
                dp_matrix[i][j] = (s[i] == s[j] && dp_matrix[i + 1][j - 1]);
            }
            if (dp_matrix[i][j] && j - i > index_length) {
                index_length = j - i;
                start = i;
                end = j;
            }
        }
    }
    return s.substr(start, end - start + 1);
}

}  // namespace leetcode::longest_palindromic_substring