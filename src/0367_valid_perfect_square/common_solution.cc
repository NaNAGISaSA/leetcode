#include "0367_valid_perfect_square.h"

namespace leetcode::valid_perfect_square::common {

bool Solution::is_perfect_square(int num) {
    long cp_num = num;
    long idx = 1, tmp = idx * idx;
    while (tmp < cp_num) {
        ++idx;
        tmp = idx * idx;
    }
    return tmp == cp_num;
}

}  // namespace leetcode::valid_perfect_square::common
