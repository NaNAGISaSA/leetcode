#include "0371_sum_of_two_integers.h"

namespace leetcode::sum_of_two_integers {

int Solution::get_sum(int a, int b) {
    int carry = 0;
    while (b) {
        carry = a & b;
        a = a ^ b;
        b = static_cast<unsigned>(carry) << 1;
    }
    return a;
}

}  // namespace leetcode::sum_of_two_integers
