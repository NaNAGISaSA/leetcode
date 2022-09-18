#ifndef LEETCODE_POWER_OF_FOUR_H_
#define LEETCODE_POWER_OF_FOUR_H_

namespace leetcode::power_of_four {

#define SOLUTION_CLASS_DECLARATION           \
    class Solution {                         \
    public:                                  \
        static bool is_power_of_four(int n); \
    }

namespace common {
SOLUTION_CLASS_DECLARATION;
}

namespace trick {
SOLUTION_CLASS_DECLARATION;
}

#undef SOLUTION_CLASS_DECLARATION

}  // namespace leetcode::power_of_four

#endif