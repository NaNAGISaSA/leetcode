#include "0009_palindrome_number.h"

namespace leetcode::palindrome_number {

bool Solution::is_palindrome(int x) {
    if (x < 0) {
        return false;
    }
    int pow10 = 1, tmp = x / 10;
    while (tmp != 0) {
        pow10 *= 10;
        tmp /= 10;
    }
    while (x != 0) {
        if (x / pow10 != x % 10) {
            return false;
        }
        x = x % pow10 / 10;
        pow10 /= 100;
    }
    return true;
}

}  // namespace leetcode::palindrome_number
