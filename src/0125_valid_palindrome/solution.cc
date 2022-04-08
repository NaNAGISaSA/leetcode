#include <ctype.h>

#include "0125_valid_palindrome.h"

namespace leetcode::valid_palindrome {

bool Solution::is_palindrome(const std::string& s) {
    // can replace this function with isalnum
    auto is_alphanumeric_char = [&s](int idx) {
        return (s[idx] >= 'a' && s[idx] <= 'z') || (s[idx] >= 'A' && s[idx] <= 'Z') || (s[idx] >= '0' && s[idx] <= '9');
    };

    int left = 0, right = static_cast<int>(s.size()) - 1;
    while (left < right) {
        while (left < right && !is_alphanumeric_char(left)) {
            ++left;
        }
        while (left < right && !is_alphanumeric_char(right)) {
            --right;
        }
        if (tolower(s[left]) != tolower(s[right])) {
            return false;
        }
        ++left;
        --right;
    }
    return true;
}

}  // namespace leetcode::valid_palindrome
