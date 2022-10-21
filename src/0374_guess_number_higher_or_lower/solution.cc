#include "0374_guess_number_higher_or_lower.h"

#include <cstdlib>
#include <string>

namespace leetcode::guess_number_higher_or_lower {

namespace {
const int HIGH = -1;
const int EQUAL = 0;
const int LOW = 1;

inline int guess(int num) {
    int target = std::stoi(std::getenv(Solution::TargetNum));
    return num == target ? EQUAL : (num > target ? HIGH : LOW);
}
}  // namespace

int Solution::guess_number(int n) {
    int begin = 1, end = n, middle = 0;
    int result = 0;
    while (begin < end) {
        middle = begin + (end - begin) / 2;
        result = guess(middle);
        if (result == EQUAL) {
            return middle;
        } else if (result == HIGH) {
            end = middle - 1;
        } else {
            begin = middle + 1;
        }
    }
    return begin;
}

}  // namespace leetcode::guess_number_higher_or_lower
