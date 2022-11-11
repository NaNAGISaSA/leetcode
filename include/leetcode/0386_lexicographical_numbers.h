#ifndef LEETCODE_LEXICOGRAPHICAL_NUMBERS_H_
#define LEETCODE_LEXICOGRAPHICAL_NUMBERS_H_

#include <vector>

namespace leetcode::lexicographical_numbers {

#define SOLUTION_CLASS_DECLARATION                    \
    class Solution {                                  \
    public:                                           \
        static std::vector<int> lexical_order(int n); \
    }

namespace dfs {
SOLUTION_CLASS_DECLARATION;
}

namespace law {
SOLUTION_CLASS_DECLARATION;
}

#undef SOLUTION_CLASS_DECLARATION

}  // namespace leetcode::lexicographical_numbers

#endif