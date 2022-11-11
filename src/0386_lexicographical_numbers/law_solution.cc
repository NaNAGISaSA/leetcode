#include "0386_lexicographical_numbers.h"

namespace leetcode::lexicographical_numbers::law {

std::vector<int> Solution::lexical_order(int n) {
    std::vector<int> result;
    result.reserve(n);
    int curr = 1;
    while (static_cast<int>(result.size()) < n) {
        result.push_back(curr);
        curr *= 10;
        if (curr <= n) {
            continue;
        }
        curr /= 10;
        while (++curr <= n && curr % 10 != 0) {
            result.push_back(curr);
        }
        curr = (curr - 1) / 10;
        while (curr % 10 == 9) {
            curr /= 10;
        }
        ++curr;
    }
    return result;
}

}  // namespace leetcode::lexicographical_numbers::law
