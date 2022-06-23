#include <limits>

#include "0007_reverse_integer.h"

namespace leetcode::reverse_integer::first {

int Solution::reverse(int x) {
    if (x == 0) {
        return 0;
    }

    auto reverse_number = [&x]() {
        int result = 0;
        while (x != 0) {
            result = 10 * result + x % 10;
            x /= 10;
        }
        return result;
    };

    if (x % 10 == 0) {
        while (x % 10 == 0) {
            x /= 10;
        }
        return reverse_number();
    }

    int number_count = 0, max_number_count = 0;
    int temp = x;
    while (temp != 0) {
        ++number_count;
        temp /= 10;
    }
    temp = std::numeric_limits<int>::max();
    while (temp != 0) {
        ++max_number_count;
        temp /= 10;
    }
    if (number_count < max_number_count) {
        return reverse_number();
    }

    number_count = 1;
    temp = 0;
    while (number_count < max_number_count) {
        temp = 10 * temp + x % 10;
        x /= 10;
        ++number_count;
    }

    bool valid =
        (x > 0 && (temp < std::numeric_limits<int>::max() / 10 ||
                   (temp == std::numeric_limits<int>::max() / 10 && x <= std::numeric_limits<int>::max() % 10))) ||
        (x < 0 && (temp > std::numeric_limits<int>::min() / 10 ||
                   (temp == std::numeric_limits<int>::min() / 10 && x >= std::numeric_limits<int>::min() % 10)));
    return valid ? 10 * temp + x : 0;
}

}  // namespace leetcode::reverse_integer::first
