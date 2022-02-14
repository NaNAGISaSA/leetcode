#ifndef _LEETCODE_PERMUTATIONS_TWO_H_
#define _LEETCODE_PERMUTATIONS_TWO_H_

#include <vector>

namespace leetcode::permutations_two {

#define SOLUTION_CLASS_DECLARATION                                                   \
    class Solution {                                                                 \
    public:                                                                          \
        static std::vector<std::vector<int>> permute_unique(std::vector<int>& nums); \
    }

namespace swap {
SOLUTION_CLASS_DECLARATION;
}

namespace another {
SOLUTION_CLASS_DECLARATION;
}

}  // namespace leetcode::permutations_two

#endif