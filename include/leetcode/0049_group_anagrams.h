#ifndef _LEETCODE_GROUP_ANAGRAMS_H_
#define _LEETCODE_GROUP_ANAGRAMS_H_

#include <string>
#include <vector>

namespace leetcode::group_anagrams {

#define SOLUTION_CLASS_DECLARATION                                                                   \
    class Solution {                                                                                 \
    public:                                                                                          \
        static std::vector<std::vector<std::string>> group_anagrams(std::vector<std::string>& strs); \
    }

namespace sort {
SOLUTION_CLASS_DECLARATION;
}

namespace encode {
SOLUTION_CLASS_DECLARATION;
}

}  // namespace leetcode::group_anagrams

#endif