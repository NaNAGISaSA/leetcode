#include "0405_convert_a_number_to_hexadecimal.h"

namespace leetcode::convert_a_number_to_hexadecimal {

std::string Solution::to_hex(int num) {
    if (num == 0) {
        return "0";
    }

    std::string result("00000000");
    auto get_pos_num_hex = [&result](int number) {
        int div = 1 << 28, idx = 0;
        while (number != 0) {
            if (number >= div) {
                int tmp = number / div;
                result[idx] = static_cast<char>(tmp < 10 ? tmp + '0' : tmp - 10 + 'a');
                number %= div;
            }
            ++idx;
            div /= 16;
        }
    };

    if (num > 0) {
        get_pos_num_hex(num);
        int idx = 0;
        while (result[idx] == '0') {
            ++idx;
        }
        result = result.substr(idx);
    } else {
        get_pos_num_hex(static_cast<int>(-1 * static_cast<long>(std::numeric_limits<int>::min()) + num));
        if (result[0] == '0' || result[0] == '1') {
            result[0] = static_cast<char>(result[0] + 8);
        } else {
            result[0] = static_cast<char>(result[0] - '0' + 8 - 10 + 'a');
        }
    }

    return result;
}

}  // namespace leetcode::convert_a_number_to_hexadecimal
