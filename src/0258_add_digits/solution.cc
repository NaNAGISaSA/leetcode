#include "0258_add_digits.h"

namespace leetcode::add_digits {

int Solution::add_digits(int num) {
    return 1 + (num - 1) % 9;
}

}  // namespace leetcode::add_digits
