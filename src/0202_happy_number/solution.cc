#include "0202_happy_number.h"

#include <unordered_set>

namespace leetcode::happy_number {

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

    std::unordered_set<int> appear{n};
    while (true) {
        int tmp = get_square(n);
        n = tmp;
        if (appear.find(n) != appear.end() || n == 1) {
            break;
        }
        appear.insert(n);
    }

    return n == 1;
}

}  // namespace leetcode::happy_number