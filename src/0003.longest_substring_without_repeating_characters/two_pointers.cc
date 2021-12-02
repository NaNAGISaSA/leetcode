#include <algorithm>
#include <unordered_set>

#include "0003_longest_substring_without_repeating_characters.h"

namespace leetcode::longest_substring_without_repeating_characters::two_pointers {

int Solution::length_of_longest_substring(const std::string& s) {
    std::unordered_set<char> appear_set;
    int result = 0, start = 0, current = 0;
    while (current < static_cast<int>(s.size())) {
        if (appear_set.find(s[current]) == appear_set.end()) {
            appear_set.insert(s[current++]);
            result = std::max(result, current - start);
        } else {
            appear_set.erase(s[start++]);
        }
    }
    return result;
}

}  // namespace leetcode::longest_substring_without_repeating_characters::two_pointers
