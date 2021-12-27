#include <unordered_map>

#include "0013_roman_to_integer.h"

namespace leetcode::roman_to_integer::another {

int Solution::roman_to_int(const std::string& s) {
    static std::unordered_map<char, int> map{
        {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};

    int s_size = static_cast<int>(s.size()), index = 0;
    int result = 0;
    while (index < s_size - 1) {
        result += (map[s[index]] < map[s[index + 1]] ? -1 * map[s[index]] : map[s[index]]);
        ++index;
    }
    return s_size == 0 ? result : result + map[s[index]];
}

}  // namespace leetcode::roman_to_integer::another
