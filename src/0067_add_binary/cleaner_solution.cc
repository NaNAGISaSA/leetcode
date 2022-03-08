#include <algorithm>

#include "0067_add_binary.h"

namespace leetcode::add_binary::cleaner {

std::string Solution::add_binary(const std::string& a, const std::string& b) {
    int a_size = static_cast<int>(a.size()), b_size = static_cast<int>(b.size());
    int carry = 0;
    std::string result;
    result.reserve(a_size > b_size ? a_size + 1 : b_size + 1);
    while (a_size > 0 || b_size > 0 || carry > 0) {
        if (a_size > 0) {
            carry += a[--a_size] - '0';
        }
        if (b_size > 0) {
            carry += b[--b_size] - '0';
        }
        result.insert(result.begin(), static_cast<char>(carry % 2 + '0'));
        carry = carry / 2;
    }
    return result;
}

}  // namespace leetcode::add_binary::cleaner
