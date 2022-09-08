#ifndef LEETCODE_PALINDROME_PAIRS_H_
#define LEETCODE_PALINDROME_PAIRS_H_

#include <string>
#include <vector>

namespace leetcode::palindrome_pairs {

class Solution {
public:
    static std::vector<std::vector<int>> palindrome_pairs(const std::vector<std::string>& words);
};

}  // namespace leetcode::palindrome_pairs

#endif