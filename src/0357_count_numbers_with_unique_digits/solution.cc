#include "0357_count_numbers_with_unique_digits.h"

namespace leetcode::count_numbers_with_unique_digits {

int Solution::count_numbers_with_unique_digits(int n) {
    int count = 1, multi = 9, add_on = 9;
    while (n-- > 0) {
        count += add_on;
        add_on *= multi;
        multi -= 1;
    }
    return count;
}

}  // namespace leetcode::count_numbers_with_unique_digits
