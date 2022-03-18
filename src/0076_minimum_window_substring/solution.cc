#include <unordered_map>

#include "0076_minimum_window_substring.h"

namespace leetcode::minimum_window_substring {

std::string Solution::min_window(const std::string& s, const std::string& t) {
    int s_size = static_cast<int>(s.size()), t_size = static_cast<int>(t.size());
    if (t_size > s_size) {
        return "";
    }
    std::unordered_map<char, int> count_map;
    for (auto& chr : t) {
        ++count_map[chr];
    }
    int left = 0, right = 0;
    std::string result;
    bool first = true;
    while (right < s_size) {
        if (count_map.find(s[right]) != count_map.end()) {
            if (count_map[s[right]] > 0) {
                --t_size;
            }
            --count_map[s[right]];
            while (t_size == 0) {
                if (count_map.find(s[left]) != count_map.end()) {
                    ++count_map[s[left]];
                    if (count_map[s[left]] == 1) {
                        if (first || static_cast<int>(result.size()) > right - left + 1) {
                            result = s.substr(left, right - left + 1);
                            first = false;
                        }
                        ++t_size;
                    }
                }
                ++left;
            }
        }
        ++right;
    }
    return first ? "" : result;
}

}  // namespace leetcode::minimum_window_substring
