#include "0172_factorial_trailing_zeroes.h"

namespace leetcode::factorial_trailing_zeroes {

int Solution::trailing_zeroes(int n) {
    int result = 0;
    while (n != 0) {
        n /= 5;
        result += n;
    }
    return result;
}

}  // namespace leetcode::factorial_trailing_zeroes
