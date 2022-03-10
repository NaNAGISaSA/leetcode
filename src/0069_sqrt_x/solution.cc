#include "0069_sqrt_x.h"

namespace leetcode::sqrt_x {

int Solution::my_sqrt(int x) {
    if (x == 0) {
        return x;
    }
    int left = 1, right = x, middle = 0;
    while (left <= right) {
        middle = left + (right - left) / 2;
        if (middle == x / middle) {
            return middle;
        } else if (middle < x / middle) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }
    // For the last left = mid = right
    // 1) If x < sqrt(x), left = mid + 1, right is the answer;
    // 2) If x > sqrt(x), right = mid - 1, right is also the answer.
    return right;
}

}  // namespace leetcode::sqrt_x
