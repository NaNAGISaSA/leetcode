#include "0387_first_unique_character_in_a_string.h"

#include <unordered_map>

namespace leetcode::first_unique_character_in_a_string {

int Solution::first_unique_char(const std::string& s) {
    std::unordered_map<char, int> map;
    for (auto chr : s) {
        ++map[chr];
    }
    for (size_t i = 0, end = s.size(); i < end; ++i) {
        if (map[s[i]] == 1) {
            return static_cast<int>(i);
        }
    }
    return -1;
}

}  // namespace leetcode::first_unique_character_in_a_string
