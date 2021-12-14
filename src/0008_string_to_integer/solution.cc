#include <limits>

#include "0008_string_to_integer.h"

namespace leetcode::string_to_integer {

int Solution::my_atoi(const std::string& s) {
    size_t begin = 0;
    while (s[begin] == ' ') {
        ++begin;
    }

    auto resolve_number = [&s](size_t begin, bool is_positive) {
        long result = 0;
        while (s[begin] >= '0' && s[begin] <= '9') {
            result = 10 * result + (s[begin++] - '0');
            if (is_positive && result >= std::numeric_limits<int>::max()) {
                return std::numeric_limits<int>::max();
            } else if (!is_positive && -1L * result <= std::numeric_limits<int>::min()) {
                return std::numeric_limits<int>::min();
            }
        }
        return is_positive ? static_cast<int>(result) : -1 * static_cast<int>(result);
    };

    if (s[begin] >= '0' && s[begin] <= '9') {
        return resolve_number(begin, true);
    } else if (s[begin] == '+' || s[begin] == '-') {
        return s[begin + 1] >= '0' && s[begin + 1] <= '9' ? resolve_number(begin + 1, s[begin] == '+') : 0;
    } else {
        return 0;
    }
}

}  // namespace leetcode::string_to_integer
