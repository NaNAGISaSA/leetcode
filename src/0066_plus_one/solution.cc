#include "0066_plus_one.h"

namespace leetcode::plus_one {

std::vector<int> Solution::plus_one(std::vector<int>& digits) {
    int plus = 1;
    for (int i = static_cast<int>(digits.size()) - 1; i >= 0; --i) {
        if (digits[i] == 9) {
            digits[i] = 0;
            plus = 1;
        } else {
            digits[i] += 1;
            plus = 0;
            break;
        }
    }
    if (plus == 1) {
        digits.insert(digits.begin(), 1);
    }
    return digits;
}

}  // namespace leetcode::plus_one
