#ifndef _LEETCODE_MISSING_NUMBER_H_
#define _LEETCODE_MISSING_NUMBER_H_

#include <vector>

namespace leetcode::missing_number {

#define SOLUTION_CLASS_DECLARATION                         \
    class Solution {                                       \
    public:                                                \
        static int missing_number(std::vector<int>& nums); \
    }

namespace first {
SOLUTION_CLASS_DECLARATION;
}

namespace x_or {
SOLUTION_CLASS_DECLARATION;
}

}  // namespace leetcode::missing_number

#endif