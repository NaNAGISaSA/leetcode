#include "0166_fraction_to_recurring_decimal.h"

#include <cmath>
#include <unordered_map>

namespace leetcode::fraction_to_recurring_decimal {

std::string Solution::fraction_to_decimal(int numerator, int denominator) {
    if (numerator == 0) {
        return "0";
    }
    std::string result;
    if ((numerator ^ denominator) < 0) {
        result.push_back('-');
    }
    long l1 = std::abs(static_cast<long>(numerator));
    long l2 = std::abs(static_cast<long>(denominator));
    result += std::to_string(l1 / l2);
    l1 %= l2;
    if (l1 == 0) {
        return result;
    }

    result.push_back('.');
    std::unordered_map<long, size_t> map;
    size_t idx = result.size() - 1;
    while (l1 != 0) {
        l1 *= 10;
        if (map.find(l1) != map.end()) {
            return result.substr(0, map[l1]) + "(" + result.substr(map[l1]) + ")";
        }
        map.insert({l1, ++idx});
        result += std::to_string(l1 / l2);
        l1 %= l2;
    }
    return result;
}

}  // namespace leetcode::fraction_to_recurring_decimal
