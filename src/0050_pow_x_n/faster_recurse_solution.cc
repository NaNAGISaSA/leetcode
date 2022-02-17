#include <limits>

#include "0050_pow_x_n.h"

namespace leetcode::pow_x_n::faster {

double Solution::my_pow(double x, int n) {
    // -100.0 < x < 100.0
    // -2^31 <= n <= 2^31 - 1
    // -10^4 <= x^n <= 10^4
    if (n == 0) {
        return 1;
    }
    if (n < 0) {
        return n == std::numeric_limits<int>::min() ? my_pow(1 / x, -1 * (n + 1)) / x : my_pow(1 / x, -1 * n);
    }
    return n % 2 == 0 ? my_pow(x * x, n / 2) : x * my_pow(x * x, n / 2);
}

}  // namespace leetcode::pow_x_n::faster