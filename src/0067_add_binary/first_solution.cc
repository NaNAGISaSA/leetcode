#include <algorithm>

#include "0067_add_binary.h"

namespace leetcode::add_binary::first {

std::string Solution::add_binary(const std::string& a, const std::string& b) {
    size_t small_size = std::min(a.size(), b.size());
    size_t big_size = std::max(a.size(), b.size());
    const std::string& big_str = big_size == a.size() ? a : b;
    const std::string& small_str = big_size == a.size() ? b : a;

    std::string result;
    result.reserve(big_size + 1);
    int carry = 0, sum = 0;
    for (size_t i = 0; i < small_size; ++i) {
        sum = carry + (small_str[small_size - 1 - i] - '0') + (big_str[big_size - 1 - i] - '0');
        result.insert(result.begin(), sum % 2 == 0 ? '0' : '1');
        carry = sum / 2;
    }
    for (size_t i = 0; i < big_size - small_size; ++i) {
        sum = carry + (big_str[big_size - small_size - 1 - i] - '0');
        result.insert(result.begin(), sum % 2 == 0 ? '0' : '1');
        carry = sum / 2;
    }
    if (carry == 1) {
        result.insert(result.begin(), '1');
    }
    return result;
}

}  // namespace leetcode::add_binary::first
