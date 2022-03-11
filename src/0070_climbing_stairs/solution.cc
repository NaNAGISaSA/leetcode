#include "0070_climbing_stairs.h"

namespace leetcode::climbing_stairs {

int Solution::climb_stairs(int n) {
    if (n < 3) {
        return n;
    }
    int prev = 1, curr = 2, tmp = 0;
    for (int i = 3; i <= n; ++i) {
        tmp = prev + curr;
        prev = curr;
        curr = tmp;
    }
    return curr;
}

}  // namespace leetcode::climbing_stairs
