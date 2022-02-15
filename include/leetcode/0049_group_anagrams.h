#ifndef _LEETCODE_GROUP_ANAGRAMS_H_
#define _LEETCODE_GROUP_ANAGRAMS_H_

#include <string>
#include <vector>

namespace leetcode::group_anagrams {

class Solution {
public:
    static std::vector<std::vector<std::string>> group_anagrams(std::vector<std::string>& strs);
};

}  // namespace leetcode::group_anagrams

#endif