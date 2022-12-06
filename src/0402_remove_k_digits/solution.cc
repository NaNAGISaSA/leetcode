#include "0402_remove_k_digits.h"

namespace leetcode::remove_k_digits {

std::string Solution::remove_k_digits(const std::string& num, int k) {
    std::string result;
    result.reserve(num.size() - k);
    for (size_t i = 0, e = num.size(); i < e; ++i) {
        while (k > 0 && !result.empty() && result.back() > num[i]) {
            result.pop_back();
            --k;
        }
        if (!result.empty() || num[i] != '0') {
            result.push_back(num[i]);
        }
    }
    while (!result.empty() && k-- != 0) {
        result.pop_back();
    }
    return result.empty() ? "0" : result;
}

}  // namespace leetcode::remove_k_digits
