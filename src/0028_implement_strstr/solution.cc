#include "0028_implement_strstr.h"

#include <vector>

namespace leetcode::implement_strstr {

int Solution::find_str(const std::string& haystack, const std::string& needle) {
    // 1 <= haystack.length, needle.length <= 10^4
    size_t pattern_size = needle.size(), str_size = haystack.size();
    std::vector<size_t> lps(pattern_size, 0);

    auto get_lps = [&needle, &pattern_size, &lps]() {
        size_t i = 0, j = 1;
        while (j < pattern_size) {
            if (needle[i] == needle[j]) {
                lps[j++] = ++i;
            } else if (i != 0) {
                i = lps[i - 1];  // tricky
            } else {
                lps[j++] = 0;
            }
        }
    };

    get_lps();

    size_t p_idx = 0, str_idx = 0;
    while (str_idx < str_size) {
        if (needle[p_idx] == haystack[str_idx]) {
            ++str_idx;
            if (++p_idx == pattern_size) {
                return static_cast<int>(str_idx - pattern_size);
            }
        } else if (p_idx != 0) {
            p_idx = lps[p_idx - 1];
        } else {
            ++str_idx;
        }
    }
    return -1;
}

}  // namespace leetcode::implement_strstr