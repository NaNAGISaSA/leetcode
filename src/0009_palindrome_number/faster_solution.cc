#include "0009_palindrome_number.h"

namespace leetcode::palindrome_number::faster {

bool Solution::is_palindrome(int x) {
    if (x < 0) {
        return false;
    }
    if (x % 10 == 0 && x != 0) {
        return false;
    }
    int result = 0;
    while (result < x) {
        result = 10 * result + x % 10;
        x /= 10;
    }
    return result == x || result / 10 == x;
}

}  // namespace leetcode::palindrome_number::faster
