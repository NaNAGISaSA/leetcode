#include "0007_reverse_integer.h"

namespace leetcode::reverse_integer::elegant {

// NOTE: This code will cause **Runtime Error** in leetcode online tests for c++.
//   But the idea is nice, so we record it here.
int Solution::reverse(int x) {
    int result = 0, prev = result;
    while (x != 0) {
        result = 10 * result + x % 10;
        // Can not use (result - x % 10) / 10 here
        if (result / 10 != prev) {
            return 0;
        }
        x /= 10;
        prev = result;
    }
    return result;
}

}  // namespace leetcode::reverse_integer::elegant
