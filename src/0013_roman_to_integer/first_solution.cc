#include <vector>

#include "0013_roman_to_integer.h"

namespace leetcode::roman_to_integer::first {

int Solution::roman_to_int(const std::string& s) {
    static std::vector<std::string> roman{"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    static std::vector<int> data{1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    size_t s_size = s.size(), str_index = 0, vec_index = 0;
    int result = 0;
    while (str_index != s_size) {
        size_t length = roman[vec_index].size();
        while (str_index + length <= s_size && s.substr(str_index, length) == roman[vec_index]) {
            result += data[vec_index];
            str_index += length;
        }
        ++vec_index;
    }
    return result;
}

}  // namespace leetcode::roman_to_integer::first
