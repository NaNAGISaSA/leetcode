#include "0395_longest_substring_with_at_least_k_repeating_characters.h"

#include <unordered_map>
#include <vector>

namespace leetcode::longest_substring_with_at_least_k_repeating_characters {

int Solution::longest_substring(const std::string& s, int k) {
    int s_size = static_cast<int>(s.size());
    if (k == 1) {
        return s_size;
    }

    std::vector<int> count_vec(26, 0);
    int less_k_num = 0, char_num = 0;
    for (auto chr : s) {
        int tmp = chr - 'a';
        if (++count_vec[tmp] == 1) {
            ++less_k_num;
            ++char_num;
        } else if (count_vec[tmp] == k) {
            --less_k_num;
        }
    }

    if (less_k_num == 0) {
        return s_size;
    }

    std::unordered_map<char, int> count_map;
    int left = 0, right = 0, result = 0;
    for (int i = 1, e = char_num; i <= e; ++i) {
        left = 0;
        right = 0;
        char_num = 0;
        less_k_num = 0;
        count_map.clear();
        while (right < s_size) {
            if (char_num > i) {
                if (--count_map[s[left]] == 0) {
                    --char_num;
                    --less_k_num;
                } else if (count_map[s[left]] == k - 1) {
                    ++less_k_num;
                }
                ++left;
            } else {
                if (++count_map[s[right]] == 1) {
                    ++char_num;
                    ++less_k_num;
                } else if (count_map[s[right]] == k) {
                    --less_k_num;
                }
                ++right;
            }
            if (less_k_num == 0) {
                result = std::max(result, right - left);
            }
        }
    }

    return result;
}

}  // namespace leetcode::longest_substring_with_at_least_k_repeating_characters
