#ifndef _LEETCODE_LONGEST_CONSECUTIVE_SEQUENCE_H_
#define _LEETCODE_LONGEST_CONSECUTIVE_SEQUENCE_H_

#include <vector>

namespace leetcode::longest_consecutive_sequence {

#define SOLUTION_CLASS_DECLARATION                                    \
    class Solution {                                                  \
    public:                                                           \
        static int longest_consecutive(const std::vector<int>& nums); \
    }

namespace first {
SOLUTION_CLASS_DECLARATION;
}

namespace cleaner {
SOLUTION_CLASS_DECLARATION;
}

}  // namespace leetcode::longest_consecutive_sequence

#endif