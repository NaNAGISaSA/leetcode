#include "0233_number_of_digit_one.h"

#include <cmath>

namespace leetcode::number_of_digit_one {

namespace {
int get_digit_count(int num) {
    int count = 0;
    while (num != 0) {
        num /= 10;
        ++count;
    }
    return count;
}
}  // namespace

int Solution::count_digit_one(int n) {
    if (n < 10) {
        return n == 0 ? 0 : 1;
    }
    int digit_count = get_digit_count(n);
    int pow_num = static_cast<int>(std::pow(10, --digit_count));
    int high_digit = n / pow_num;
    int high_ones = high_digit == 1 ? n - pow_num + 1 : pow_num;
    int low_ones = high_digit * digit_count * (pow_num / 10);
    return high_ones + low_ones + count_digit_one(n % pow_num);
}

}  // namespace leetcode::number_of_digit_one
