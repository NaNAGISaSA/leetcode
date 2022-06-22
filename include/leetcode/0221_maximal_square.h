#ifndef _LEETCODE_MAXIMAL_SQUARE_H_
#define _LEETCODE_MAXIMAL_SQUARE_H_

#include <vector>

namespace leetcode::maximal_square {

#define SOLUTION_CLASS_DECLARATION                                         \
    class Solution {                                                       \
    public:                                                                \
        static int maximal_square(std::vector<std::vector<char>>& matrix); \
    }

namespace preprocess {
SOLUTION_CLASS_DECLARATION;
}

namespace dp {
SOLUTION_CLASS_DECLARATION;
}

}  // namespace leetcode::maximal_square

#endif