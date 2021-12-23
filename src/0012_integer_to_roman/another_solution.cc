#include <vector>

#include "0012_integer_to_roman.h"

namespace leetcode::integer_to_roman::another {

std::string Solution::int_to_roman(int num) {
    static std::vector<std::string> roman{"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    static std::vector<int> data{1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    size_t index = 0;
    std::string result("");
    while (num != 0) {
        while (num >= data[index]) {
            result += roman[index];
            num -= data[index];
        }
        ++index;
    }
    return result;
}

}  // namespace leetcode::integer_to_roman::another