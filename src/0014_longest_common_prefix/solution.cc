#include "0014_longest_common_prefix.h"

namespace leetcode::longest_common_prefix {

std::string Solution::longest_common_prefix(const std::vector<std::string>& strs) {
    // 1 <= strs.length <= 200, do not need to check strs empty case
    std::string result("");
    size_t index = 0;
    while (true) {
        if (strs[0].size() == index) {
            break;
        }
        char curr_char = strs[0][index];
        for (size_t i = 1; i < strs.size(); ++i) {
            if (strs[i].size() == index || strs[i][index] != curr_char) {
                return result;
            }
        }
        result.push_back(curr_char);
        ++index;
    }
    return result;
}

}  // namespace leetcode::longest_common_prefix
