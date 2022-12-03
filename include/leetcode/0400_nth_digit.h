#ifndef LEETCODE_NTH_DIGIT_H_
#define LEETCODE_NTH_DIGIT_H_

namespace leetcode::nth_digit {

#define SOLUTION_CLASS_DECLARATION        \
    class Solution {                      \
    public:                               \
        static int find_nth_digit(int n); \
    }

namespace recurse {
SOLUTION_CLASS_DECLARATION;
}

namespace clean {
SOLUTION_CLASS_DECLARATION;
}

}  // namespace leetcode::nth_digit

#endif
