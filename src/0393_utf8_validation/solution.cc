#include "0393_utf8_validation.h"

namespace leetcode::utf8_validation {

/*
 *    Number of Bytes   |        UTF-8 Octet Sequence
 *                      |              (binary)
 *  --------------------+-----------------------------------------
 *           1          |   0xxxxxxx
 *           2          |   110xxxxx 10xxxxxx
 *           3          |   1110xxxx 10xxxxxx 10xxxxxx
 *           4          |   11110xxx 10xxxxxx 10xxxxxx 10xxxxxx
 *
 * [  0, 127]
 * [192, 223]  [128, 191]
 * [224, 239]  [128, 191]  [128, 191]
 * [240, 247]  [128, 191]  [128, 191]  [128, 191]
 */
bool Solution::valid_utf8(const std::vector<int>& data) {
    auto is_valid = [&data](size_t idx, size_t data_size, size_t num) {
        while (num-- < 3) {
            if (++idx >= data_size || data[idx] < 128 || data[idx] > 191) {
                return false;
            }
        }
        return true;
    };

    size_t idx = 0, data_size = data.size();
    while (idx < data_size) {
        if (0 <= data[idx] && data[idx] <= 127) {
            idx += 1;
        } else if (192 <= data[idx] && data[idx] <= 223) {
            if (!is_valid(idx, data_size, 0)) {
                break;
            }
            idx += 2;
        } else if (224 <= data[idx] && data[idx] <= 239) {
            if (!is_valid(idx, data_size, 1)) {
                break;
            }
            idx += 3;
        } else if (240 <= data[idx] && data[idx] <= 247) {
            if (!is_valid(idx, data_size, 2)) {
                break;
            }
            idx += 4;
        } else {
            break;
        }
    }
    return idx == data_size;
}

}  // namespace leetcode::utf8_validation
