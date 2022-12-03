#include "0400_nth_digit.h"

namespace leetcode::nth_digit::recurse {

namespace {
int recurse_find(long n, long begin, long len, long digit_num) {
    if (len * digit_num < n) {
        return recurse_find(n - len * digit_num, 10 * begin, len + 1, 10 * digit_num);
    }
    while (n > len) {
        n -= len;
        ++begin;
    }
    int div_num = 1;
    while (--len != 0) {
        div_num *= 10;
    }
    int result = 0;
    while (n-- != 0) {
        result = static_cast<int>(begin / div_num);
        begin %= div_num;
        div_num /= 10;
    }
    return result;
}
}  // namespace

int Solution::find_nth_digit(int n) {
    return recurse_find(n, 1, 1, 9);
}

}  // namespace leetcode::nth_digit::recurse
