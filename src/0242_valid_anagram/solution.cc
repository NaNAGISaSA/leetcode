#include "0242_valid_anagram.h"

#include <vector>

namespace leetcode::valid_anagram {

bool Solution::is_anagram(const std::string& s, const std::string& t) {
    if (s.size() != t.size()) {
        return false;
    }
    std::vector<int> count(26, 0);
    for (auto& chr : s) {
        ++count[chr - 'a'];
    }
    for (auto& chr : t) {
        if (--count[chr - 'a'] < 0) {
            return false;
        }
    }
    for (auto& num : count) {
        if (num > 0) {
            return false;
        }
    }
    return true;
}

}  // namespace leetcode::valid_anagram
