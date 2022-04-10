#ifndef _LEETCODE_PALINDROME_PARTITIONING_H_
#define _LEETCODE_PALINDROME_PARTITIONING_H_

#include <string>
#include <vector>

namespace leetcode::palindrome_partitioning {

class Solution {
public:
    static std::vector<std::vector<std::string>> partition(const std::string& s);
};

}  // namespace leetcode::palindrome_partitioning

#endif