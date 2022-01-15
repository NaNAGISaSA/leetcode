#include <cmath>
#include <limits>

#include "0029_divide_two_integers.h"

namespace leetcode::divide_two_integers {

namespace {
int bit_multi(int a, int b) {
    bool sign = (a < 0 && b > 0) || (a > 0 && b < 0);
    a = std::abs(a);
    b = std::abs(b);
    int result = 0;
    for (int i = 31; i >= 0; --i) {
        if ((b >> i) > 0) {
            result += (a << i);
            b -= (1 << i);
        }
    }
    return sign ? (~result) + 1 : result;
}
int bit_div(int a, int b) {
    bool sign = (a < 0 && b > 0) || (a > 0 && b < 0);
    a = std::abs(a);
    b = std::abs(b);
    int result = 0;
    for (int i = 31; i >= 0; --i) {
        if (b <= (a >> i)) {
            result |= (1 << i);
            a -= (b << i);
        }
    }
    return sign ? (~result) + 1 : result;
}
}  // namespace

int Solution::divide(int dividend, int divisor) {
    if (dividend == std::numeric_limits<int>::min() && divisor == std::numeric_limits<int>::min()) {
        return 1;
    } else if (divisor == std::numeric_limits<int>::min()) {
        return 0;
    } else if (dividend == std::numeric_limits<int>::min()) {
        if (divisor == -1) {
            return std::numeric_limits<int>::max();
        }
        int result = bit_div(dividend + 1, divisor);
        return result + bit_div(dividend - bit_multi(result, divisor), divisor);
    } else {
        return bit_div(dividend, divisor);
    }
}

}  // namespace leetcode::divide_two_integers
