#include "0038_count_and_say.h"

namespace leetcode::count_and_say {

std::string Solution::count_and_say(int n) {
    // 1 <= n <= 30
    std::string result("1");
    while (n-- > 1) {
        std::string tmp;
        int begin = 0, str_size = static_cast<int>(result.size());
        for (int i = 1; i < str_size; ++i) {
            if (result[i] != result[begin]) {
                tmp += std::to_string(i - begin) + result[begin];
                begin = i;
            }
        }
        tmp += std::to_string(str_size - begin) + result[str_size - 1];
        result = std::move(tmp);
    }
    return result;
}

}  // namespace leetcode::count_and_say
