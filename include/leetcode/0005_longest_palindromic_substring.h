#ifndef _LEETCODE_LONGEST_PALINDROMIC_SUBSTRING_H_
#define _LEETCODE_LONGEST_PALINDROMIC_SUBSTRING_H_

#include <string>

namespace leetcode::longest_palindromic_substring {

// TODO: Use Manacher's algorithm to get O(N) time complexity
class Solution {
public:
    static std::string longest_palindrome(const std::string& s);
};

}  // namespace leetcode::longest_palindromic_substring

#endif