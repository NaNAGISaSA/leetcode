#include "0202_happy_number.h"

namespace leetcode::happy_number::floyd_cycle {

bool Solution::is_happy(int n) {
    auto get_square = [](int num) {
        int res = 0, tmp = 0;
        while (num != 0) {
            tmp = num % 10;
            res += tmp * tmp;
            num /= 10;
        }
        return res;
    };

    int slow = n, fast = n;
    do {
        slow = get_square(slow);
        fast = get_square(get_square(fast));
    } while (slow != fast);

    return slow == 1;
}

}  // namespace leetcode::happy_number::floyd_cycle
