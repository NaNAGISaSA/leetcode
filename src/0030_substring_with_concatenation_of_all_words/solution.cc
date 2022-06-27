#include <unordered_map>

#include "0030_substring_with_concatenation_of_all_words.h"

namespace leetcode::substring_with_concatenation_of_all_words {

std::vector<int> Solution::find_substring(const std::string& s, const std::vector<std::string>& words) {
    // 1 <= s.length <= 10^4, 1 <= words.length <= 5000, 1 <= words[i].length <= 30
    const int word_size = static_cast<int>(words[0].size());
    const int total_length = static_cast<int>(words.size()) * word_size;
    if (total_length > static_cast<int>(s.size())) {
        return {};
    }

    std::unordered_map<std::string, int> word_count_map;
    for (const auto& str : words) {
        if (word_count_map.find(str) != word_count_map.end()) {
            ++word_count_map[str];
        } else {
            word_count_map.insert({str, 1});
        }
    }

    std::vector<int> result;
    auto sliding_window = [&word_count_map, &result, &s, &total_length, &word_size](int left) {
        std::unordered_map<std::string, int> window_word_count_map;
        int right = left;
        while (right + word_size <= static_cast<int>(s.size())) {
            std::string str = s.substr(right, word_size);
            right += word_size;
            if (word_count_map.find(str) == word_count_map.end()) {
                left = right;
                window_word_count_map.clear();
                continue;
            }
            if (window_word_count_map.find(str) == window_word_count_map.end()) {
                window_word_count_map.insert({str, 1});
            } else {
                ++window_word_count_map[str];
            }
            while (window_word_count_map[str] > word_count_map[str]) {
                --window_word_count_map[s.substr(left, word_size)];
                left += word_size;
            }
            if (right - left == total_length) {
                result.push_back(left);
                --window_word_count_map[s.substr(left, word_size)];
                left += word_size;
            }
        }
    };

    // This loop is why this problem has so many downvotes
    for (int i = 0; i < word_size; ++i) {
        sliding_window(i);
    }

    return result;
}

}  // namespace leetcode::substring_with_concatenation_of_all_words
