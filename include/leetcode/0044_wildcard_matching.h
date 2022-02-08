#ifndef _LEETCODE_WILDCARD_MATCHING_H_
#define _LEETCODE_WILDCARD_MATCHING_H_

#include <string>

namespace leetcode::wildcard_matching {

class Solution {
public:
    static bool is_match(const std::string& s, const std::string& p);
};

}  // namespace leetcode::wildcard_matching

#endif