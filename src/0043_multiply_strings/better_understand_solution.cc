#include <vector>

#include "0043_multiply_strings.h"

namespace leetcode::multiply_strings::better_understand {

std::string Solution::multiply(const std::string& num1, const std::string& num2) {
    if (num1 == "0" || num2 == "0") {
        return "0";
    }
    std::vector<int> result(num1.size() + num2.size(), 0);
    for (int i = static_cast<int>(num1.size()) - 1; i >= 0; --i) {
        for (int j = static_cast<int>(num2.size()) - 1; j >= 0; --j) {
            result[i + j + 1] += (num1[i] - '0') * (num2[j] - '0');
        }
    }
    int carry = 0, tmp = 0;
    for (int i = static_cast<int>(result.size()) - 1; i >= 0; --i) {
        tmp = (result[i] + carry) / 10;
        result[i] = (result[i] + carry) % 10;
        carry = tmp;
    }
    std::string res("");
    for (int i = 0; i < static_cast<int>(result.size()); ++i) {
        res += std::to_string(result[i]);
    }
    return res.front() == '0' ? res.substr(1) : res;
}

}  // namespace leetcode::multiply_strings::better_understand