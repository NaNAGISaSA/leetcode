#include "0372_super_pow.h"

namespace leetcode::super_pow {

namespace {
// a ^ b % 1337, 0 <= b <= 10
int pow_mod(int a, int b) {
    a %= 1337;
    int result = 1;
    for (int i = 0; i < b; ++i) {
        result = result * a % 1337;
    }
    return result;
}
}  // namespace

// ab % k = (a % k)(b % k) % k
int Solution::super_pow(int a, std::vector<int>& b) {
    if (b.empty()) {
        return 1;
    }
    int last = b.back();
    b.pop_back();
    return pow_mod(super_pow(a, b), 10) * pow_mod(a, last) % 1337;
}

}  // namespace leetcode::super_pow
