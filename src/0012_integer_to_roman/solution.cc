#include <vector>

#include "0012_integer_to_roman.h"

namespace leetcode::integer_to_roman {

std::string Solution::int_to_roman(int num) {
    static std::vector<char> vec{'I', 'V', 'X', 'L', 'C', 'D', 'M'};
    auto num_to_roman = [](int num, int index) {
        if (num < 4) {
            return std::string(num, vec[index]);
        } else if (num == 4) {
            return std::string(1, vec[index]) + std::string(1, vec[index + 1]);
        } else if (num == 5) {
            return std::string(1, vec[index + 1]);
        } else if (num < 9) {
            return std::string(1, vec[index + 1]) + std::string(num - 5, vec[index]);
        } else {
            return std::string(1, vec[index]) + std::string(1, vec[index + 2]);
        }
    };

    std::vector<std::string> result_vec;
    int digit = 0, index = 0;
    while (num != 0) {
        digit = num % 10;
        num /= 10;
        if (digit != 0) {
            result_vec.push_back(num_to_roman(digit, index));
        }
        index += 2;
    }

    std::string result("");
    for (auto it = result_vec.rbegin(); it != result_vec.rend(); ++it) {
        result += *it;
    }
    return result;
}

}  // namespace leetcode::integer_to_roman
