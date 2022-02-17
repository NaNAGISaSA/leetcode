#ifndef _LEETCODE_POW_X_N_H_
#define _LEETCODE_POW_X_N_H_

namespace leetcode::pow_x_n {

#define SOLUTION_CLASS_DECLARATION             \
    class Solution {                           \
    public:                                    \
        static double my_pow(double x, int n); \
    }

namespace recurse {
SOLUTION_CLASS_DECLARATION;
}

namespace faster {
SOLUTION_CLASS_DECLARATION;
}

}  // namespace leetcode::pow_x_n

#endif