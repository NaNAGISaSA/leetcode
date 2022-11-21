#include "0394_decode_string.h"

#include <utility>

namespace leetcode::decode_string {

namespace {
std::pair<std::string, size_t> expand(const std::string& s, size_t begin, int number) {
    size_t s_size = s.size();
    std::string str;
    int expand_num = 0;
    while (begin < s_size && s[begin] != ']') {
        if (s[begin] >= 'a' && s[begin] <= 'z') {
            str.push_back(s[begin++]);
        } else if (s[begin] >= '0' && s[begin] <= '9') {
            expand_num = 10 * expand_num + (s[begin++] - '0');
        } else {
            auto result = expand(s, begin + 1, expand_num);
            str += std::move(result.first);
            begin = result.second;
            expand_num = 0;
        }
    }
    std::string result;
    while (number-- != 0) {
        result += str;
    }
    return {std::move(result), begin + 1};
}
}  // namespace

std::string Solution::decode(const std::string& s) {
    return std::move(expand(s, 0, 1).first);
}

}  // namespace leetcode::decode_string
