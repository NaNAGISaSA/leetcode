#include "0316_remove_duplicate_letters.h"

#include <algorithm>
#include <unordered_map>

namespace leetcode::remove_duplicate_letters::select {

std::string Solution::remove_duplicate_letters(std::string s) {
    auto get_count_map = [&s]() {
        std::unordered_map<char, int> map;
        for (auto& chr : s) {
            ++map[chr];
        }
        return map;
    };

    auto get_erase_letter_info = [&s](size_t end) {
        char letter = s[0];
        size_t idx = 0;
        for (size_t i = 1; i <= end; ++i) {
            if (s[i] < letter) {
                letter = s[i];
                idx = i;
            }
        }
        return std::pair<size_t, char>{idx, letter};
    };

    auto adjust_str = [&s](size_t idx, char letter) {
        s = s.substr(idx);
        for (auto it = s.begin(); it != s.end();) {
            if (*it == letter) {
                it = s.erase(it);
            } else {
                ++it;
            }
        }
    };

    std::string result;
    while (!s.empty()) {
        auto map = get_count_map();
        size_t idx = 0;
        for (; idx < s.size(); ++idx) {
            if (--map[s[idx]] == 0) {
                break;
            }
        }
        auto [letter_idx, letter] = get_erase_letter_info(idx);
        result.push_back(letter);
        adjust_str(letter_idx, letter);
    }
    return result;
}

}  // namespace leetcode::remove_duplicate_letters::select
