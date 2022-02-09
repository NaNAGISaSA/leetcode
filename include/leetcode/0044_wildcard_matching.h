#ifndef _LEETCODE_WILDCARD_MATCHING_H_
#define _LEETCODE_WILDCARD_MATCHING_H_

#include <string>

namespace leetcode::wildcard_matching {

#define SOLUTION_CLASS_DECLARATION                                        \
    class Solution {                                                      \
    public:                                                               \
        static bool is_match(const std::string& s, const std::string& p); \
    }

namespace dp {
SOLUTION_CLASS_DECLARATION;
}

namespace greedy {
SOLUTION_CLASS_DECLARATION;
}

}  // namespace leetcode::wildcard_matching

#endif