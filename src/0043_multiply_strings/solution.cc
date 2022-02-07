#include <vector>

#include "0043_multiply_strings.h"

namespace leetcode::multiply_strings {

std::string Solution::multiply(const std::string& num1, const std::string& num2) {
    // 1 <= num1.length, num2.length <= 200
    if (num1 == "0" || num2 == "0") {
        return "0";
    }
    // Tips: num1[i] * num2[j] will be placed at (result[i + j], result[i + j + 1])
    std::vector<int> result_vec(num1.size() + num2.size(), 0);
    for (int i = static_cast<int>(num1.size() - 1); i >= 0; --i) {
        for (int j = static_cast<int>(num2.size() - 1); j >= 0; --j) {
            int res = (num1[i] - '0') * (num2[j] - '0');
            res += result_vec[i + j + 1];
            result_vec[i + j + 1] = res % 10;
            result_vec[i + j] += res / 10;
        }
    }
    std::string result("");
    for (int i = 0; i < static_cast<int>(result_vec.size()); ++i) {
        result += std::to_string(result_vec[i]);
    }
    return result.front() == '0' ? result.substr(1) : result;
}

}  // namespace leetcode::multiply_strings
