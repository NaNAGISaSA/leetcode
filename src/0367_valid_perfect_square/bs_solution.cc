#include "0367_valid_perfect_square.h"

namespace leetcode::valid_perfect_square::bs {

bool Solution::is_perfect_square(int num) {
    long cp_num = num;
    long begin = 1, end = cp_num, middle = 0;
    long res = 0;
    while (begin <= end) {
        middle = begin + (end - begin) / 2;
        res = middle * middle;
        if (res == cp_num) {
            return true;
        } else if (res > cp_num) {
            end = middle - 1;
        } else {
            begin = middle + 1;
        }
    }
    return false;
}

}  // namespace leetcode::valid_perfect_square::bs
