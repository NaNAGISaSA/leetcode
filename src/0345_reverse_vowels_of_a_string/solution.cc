#include "0345_reverse_vowels_of_a_string.h"

#include <unordered_set>

namespace leetcode::reverse_vowels_of_a_string {

std::string Solution::reverse_vowels(std::string s) {
    std::unordered_set<char> vowel{'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    size_t begin = 0, end = s.size() - 1;
    while (begin < end) {
        while (begin < end && vowel.find(s[begin]) == vowel.end()) {
            ++begin;
        }
        while (begin < end && vowel.find(s[end]) == vowel.end()) {
            --end;
        }
        if (begin < end) {
            std::swap(s[begin++], s[end--]);
        }
    }
    return s;
}

}  // namespace leetcode::reverse_vowels_of_a_string
