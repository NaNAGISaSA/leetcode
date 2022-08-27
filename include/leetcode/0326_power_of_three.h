#ifndef LEETCODE_POWER_OF_THREE_H_
#define LEETCODE_POWER_OF_THREE_H_

namespace leetcode::power_of_three {

#define SOLUTION_CLASS_DECLARATION            \
    class Solution {                          \
    public:                                   \
        static bool is_power_of_three(int n); \
    }

namespace common {
SOLUTION_CLASS_DECLARATION;
}

namespace trick {
SOLUTION_CLASS_DECLARATION;
}

#undef SOLUTION_CLASS_DECLARATION

}  // namespace leetcode::power_of_three

#endif