#include <algorithm>
#include <unordered_map>

#include "0003_longest_substring_without_repeating_characters.h"

namespace leetcode::longest_substring_without_repeating_characters::first_solution {

int Solution::length_of_longest_substring(const std::string& s) {
    std::unordered_map<char, int> index_map;
    int result = 0, start = 0;
    for (int i = 0; i < static_cast<int>(s.size()); ++i) {
        if (index_map.find(s[i]) != index_map.end()) {
            start = std::max(start, index_map[s[i]] + 1);
        }
        index_map[s[i]] = i;
        result = std::max(result, i - start + 1);
    }
    return result;
}

}  // namespace leetcode::longest_substring_without_repeating_characters::first_solution