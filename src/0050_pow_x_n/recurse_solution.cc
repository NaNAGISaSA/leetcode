#include <limits>

#include "0050_pow_x_n.h"

namespace leetcode::pow_x_n::recurse {

namespace {
double recurse_pow(double result, double x_pow, double x, int n_pow, int n) {
    if (n == 0) {
        return result;
    } else if (n < n_pow || n_pow > std::numeric_limits<int>::max() / 2) {
        return recurse_pow(result, x, x, 1, n);
    } else {
        return recurse_pow(result * x_pow, x_pow * x_pow, x, 2 * n_pow, n - n_pow);
    }
}
}  // namespace

double Solution::my_pow(double x, int n) {
    // -100.0 < x < 100.0
    // -2^31 <= n <= 2^31 - 1
    // -10^4 <= x^n <= 10^4
    return n > 0 ? recurse_pow(1.0, x, x, 1, n) :
                   n == std::numeric_limits<int>::min() ?
                   recurse_pow(1.0, 1 / x, 1 / x, 1, std::numeric_limits<int>::max()) / x :
                   recurse_pow(1.0, 1 / x, 1 / x, 1, -1 * n);
}

}  // namespace leetcode::pow_x_n::recurse
