#include "0343_integer_break.h"

#include <vector>

namespace leetcode::integer_break::first {

int Solution::integer_break(int n) {
    if (n < 4) {
        return n - 1;
    }

    int max_split_num = n / 2, result = 0;
    for (int i = 2; i <= max_split_num; ++i) {
        std::vector<int> split_elements(i, n / i);
        for (int idx = 0, acc = split_elements.front() * i; acc < n; ++acc, ++idx) {
            ++split_elements[idx];
        }
        int multi = 1;
        for (const auto& ele : split_elements) {
            multi *= ele;
        }
        result = std::max(result, multi);
    }

    return result;
}

}  // namespace leetcode::integer_break::first
