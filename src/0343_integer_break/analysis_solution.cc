#include "0343_integer_break.h"

namespace leetcode::integer_break::analysis {

int Solution::integer_break(int n) {
    if (n < 4) {
        return n - 1;
    }
    int result = 1;
    while (n > 4) {
        result *= 3;
        n -= 3;
    }
    return result * n;
}

}  // namespace leetcode::integer_break::analysis
