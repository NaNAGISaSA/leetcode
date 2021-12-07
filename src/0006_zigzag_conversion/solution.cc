#include "0006_zigzag_conversion.h"

namespace leetcode::zigzag_conversion {

std::string Solution::convert(const std::string& s, int numRows) {
    int str_size = static_cast<int>(s.size());
    if (numRows == 1 || str_size <= numRows) {
        return s;
    }
    std::string result("");
    int middel_lines = numRows - 2, interval = numRows + middel_lines, add_on = interval - 2;
    for (int i = 0; i < str_size; i += interval) {
        result.push_back(s[i]);
    }
    for (int i = 1; i <= middel_lines; ++i) {
        for (int j = i; j < str_size; j += interval) {
            result.push_back(s[j]);
            if (j + add_on < str_size) {
                result.push_back(s[j + add_on]);
            }
        }
        add_on -= 2;
    }
    for (int i = numRows - 1; i < str_size; i += interval) {
        result.push_back(s[i]);
    }
    return result;
}

}  // namespace leetcode::zigzag_conversion
