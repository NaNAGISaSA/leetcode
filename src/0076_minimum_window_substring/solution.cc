#include <unordered_map>

#include "0076_minimum_window_substring.h"

namespace leetcode::minimum_window_substring {

std::string Solution::min_window(const std::string& s, const std::string& t) {
    size_t s_size = s.size(), t_size = t.size();
    if (s_size < t_size) {
        return "";
    }
    std::unordered_map<char, int> count_map;
    for (auto& chr : t) {
        ++count_map[chr];
    }
    size_t left = 0, right = 0;
    std::string result;
    for (; right < s_size; ++right) {
        if (count_map.find(s[right]) == count_map.end()) {
            continue;
        }
        if (count_map[s[right]]-- > 0) {
            --t_size;
        }
        while (t_size == 0) {
            if (count_map.find(s[left]) == count_map.end()) {
                ++left;
                continue;
            }
            if (++count_map[s[left]] == 1) {
                if (result.size() == 0 || result.size() > right - left + 1) {
                    result = s.substr(left, right - left + 1);
                }
                ++t_size;
            }
            ++left;
        }
    }
    return result;
}

}  // namespace leetcode::minimum_window_substring
