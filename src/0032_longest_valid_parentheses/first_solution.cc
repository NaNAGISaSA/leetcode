#include <algorithm>
#include <vector>

#include "0032_longest_valid_parentheses.h"

namespace leetcode::longest_valid_parentheses::dp {

int Solution::longest_valid_parentheses(const std::string& s) {
    if (s.size() < 2) {
        return 0;
    }
    std::vector<int> dp_vec(s.size() + 1, 0);
    int str_index = 0, max_valid = 0;
    for (int i = 2; i < static_cast<int>(dp_vec.size()); ++i) {
        str_index = i - 1;
        if (s[str_index] == ')') {
            if (s[str_index - 1] == '(') {
                dp_vec[i] = 2 + dp_vec[i - 2];
            } else if (str_index - dp_vec[i - 1] - 1 >= 0 && s[str_index - dp_vec[i - 1] - 1] == '(') {
                dp_vec[i] = 2 + dp_vec[i - 1] + dp_vec[i - dp_vec[i - 1] - 2];
            }
        }
        max_valid = std::max(max_valid, dp_vec[i]);
    }
    return max_valid;
}

}  // namespace leetcode::longest_valid_parentheses::dp
