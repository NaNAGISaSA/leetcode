#include "0409_longest_palindrome.h"

#include <unordered_map>

namespace leetcode::longest_palindrome {

int Solution::longest_palindrome(const std::string& s) {
    std::unordered_map<char, int> count_map;
    for (auto chr : s) {
        ++count_map[chr];
    }
    int result = 0;
    for (auto it = count_map.begin(), end = count_map.end(); it != end; ++it) {
        result += it->second / 2 * 2;
    }
    return result == static_cast<int>(s.size()) ? result : result + 1;
}

}  // namespace leetcode::longest_palindrome
