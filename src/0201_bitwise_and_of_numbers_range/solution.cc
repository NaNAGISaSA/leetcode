#include "0201_bitwise_and_of_numbers_range.h"

namespace leetcode::bitwise_and_of_numbers_range {

/*
Algorithm:
Find the first different bit from right to left, for example
left:  xxx0xxxx
right: xxx1xxxx
the [left, right] range must contain the num xxx10000
so the result of bitwise and is xxx00000
*/
int Solution::range_bitwise_and(int left, int right) {
    int idx = 0;
    while (left != right) {
        left >>= 1;
        right >>= 1;
        ++idx;
    }
    return left << idx;
}

}  // namespace leetcode::bitwise_and_of_numbers_range
