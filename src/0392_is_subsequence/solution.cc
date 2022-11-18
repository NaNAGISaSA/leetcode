#include "0392_is_subsequence.h"

namespace leetcode::is_subsequence {

bool Solution::is_subsequence(const std::string& s, const std::string& t) {
    size_t s_size = s.size(), t_size = t.size();
    size_t s_idx = 0, t_idx = 0;
    while (s_idx < s_size && t_idx < t_size) {
        if (s[s_idx] == t[t_idx]) {
            ++s_idx;
        }
        ++t_idx;
    }
    return s_idx == s_size;
}

}  // namespace leetcode::is_subsequence
