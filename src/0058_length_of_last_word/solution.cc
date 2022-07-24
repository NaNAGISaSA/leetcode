#include "0058_length_of_last_word.h"

namespace leetcode::length_of_last_word {

int Solution::length_of_last_word(const std::string& s) {
    // There will be at least one word in s
    int idx = static_cast<int>(s.size()) - 1, length = 0;
    while (s[idx] == ' ') {
        --idx;
    }
    while (idx >= 0 && s[idx] != ' ') {
        --idx;
        ++length;
    }
    return length;
}

}  // namespace leetcode::length_of_last_word
