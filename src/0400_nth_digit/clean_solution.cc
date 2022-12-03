#include "0400_nth_digit.h"

namespace leetcode::nth_digit::clean {

int Solution::find_nth_digit(int n) {
    long digit_num = 1, total_num = 9;
    while (digit_num * total_num < n) {
        n -= static_cast<int>(digit_num * total_num);
        ++digit_num;
        total_num *= 10;
    }

    total_num /= 9;
    long start = total_num + (n - 1) / digit_num;
    long idx = (n - 1) % digit_num;

    long result = 0;
    while (idx-- >= 0) {
        result = start / total_num;
        start %= total_num;
        total_num /= 10;
    }
    return static_cast<int>(result);
}

}  // namespace leetcode::nth_digit::clean
