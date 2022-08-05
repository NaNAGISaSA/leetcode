#include "0306_additive_number.h"

#include <algorithm>

namespace leetcode::additive_number {

bool recurse_calculate(const std::string& num, int s1, int e1, int s2, int e2) {
    int num_size = static_cast<int>(num.size());
    if (e2 == num_size - 1) {
        return true;
    } else if (num[s2] == '0' && e2 != s2) {
        return false;
    }

    auto sum_equal = [&num, &num_size](int s1, int e1, int s2, int e2) {
        std::string result;
        int carry = 0, idx = e2 + 1;
        while (e1 >= s1 || e2 >= s2 || carry) {
            if (e1 >= s1) {
                carry += num[e1] - '0';
                --e1;
            }
            if (e2 >= s2) {
                carry += num[e2] - '0';
                --e2;
            }
            result.push_back(static_cast<char>(carry % 10 + '0'));
            carry /= 10;
        }
        int result_size = static_cast<int>(result.size());
        if (num_size - idx < result_size) {
            return 0;
        }
        std::reverse(result.begin(), result.end());
        for (int i = 0; i < result_size; ++i) {
            if (result[i] != num[idx + i]) {
                return 0;
            }
        }
        return result_size;
    };

    int result = sum_equal(s1, e1, s2, e2);
    if (result != 0 && recurse_calculate(num, s2, e2, e2 + 1, e2 + result)) {
        return true;
    }
    return false;
}

bool Solution::is_additive_number(const std::string& num) {
    int num_size = static_cast<int>(num.size());
    if (num_size < 3) {
        return false;
    }
    int last_i = (num_size - 1) / 2;
    for (int i = 0; i < last_i; ++i) {
        int start_j = i + 1, last_j = start_j + (num_size - start_j) / 2;
        for (int j = start_j; j < last_j; ++j) {
            if (recurse_calculate(num, 0, i, start_j, j)) {
                return true;
            }
        }
    }
    return false;
}

}  // namespace leetcode::additive_number
