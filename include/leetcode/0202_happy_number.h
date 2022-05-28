#ifndef _LEETCODE_HAPPY_NUMBER_H_
#define _LEETCODE_HAPPY_NUMBER_H_

namespace leetcode::happy_number {

#define SOLUTION_CLASS_DECLARATION   \
    class Solution {                 \
    public:                          \
        static bool is_happy(int n); \
    }

namespace set {
SOLUTION_CLASS_DECLARATION;
}

namespace floyd_cycle {
SOLUTION_CLASS_DECLARATION;
}

}  // namespace leetcode::happy_number

#endif