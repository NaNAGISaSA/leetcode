#include "0405_convert_a_number_to_hexadecimal.h"

namespace leetcode::convert_a_number_to_hexadecimal::clean {

std::string Solution::to_hex(int num) {
    if (num == 0) {
        return "0";
    }
    char table[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
    std::string result;
    int end = num > 0 ? 0 : -1;
    while (num != end) {
        result = std::string(1, table[num & 0x0f]) + result;
        num >>= 4;
    }
    if (end == -1 && result.size() != 8) {
        result = std::string(8 - result.size(), 'f') + result;
    }
    return result;
}

}  // namespace leetcode::convert_a_number_to_hexadecimal::clean
