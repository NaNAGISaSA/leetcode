#ifndef _LEETCODE_INTERLEAVING_STRING_H_
#define _LEETCODE_INTERLEAVING_STRING_H_

#include <string>

namespace leetcode::interleaving_string {

class Solution {
public:
    static bool is_interleave(const std::string& s1, const std::string& s2, const std::string& s3);
};

}  // namespace leetcode::interleaving_string

#endif