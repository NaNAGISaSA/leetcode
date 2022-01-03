#include "0017_letter_combinations_of_a_phone_number.h"

namespace leetcode::letter_combinations_of_a_phone_number {

// The most voted methods for this problem use 1) FIFO Linkedlist and 2) recurse coding,
// but the time complexity of these methods are also O(4^(length of digits)) as above.
std::vector<std::string> Solution::letter_combinations(const std::string& digits) {
    static const std::vector<std::vector<std::string>> vec{{"a", "b", "c"},
                                                           {"d", "e", "f"},
                                                           {"g", "h", "i"},
                                                           {"j", "k", "l"},
                                                           {"m", "n", "o"},
                                                           {"p", "q", "r", "s"},
                                                           {"t", "u", "v"},
                                                           {"w", "x", "y", "z"}};
    if (digits.size() == 0) {
        return {};
    }
    std::vector<std::string> result = vec[digits[0] - '2'];
    for (size_t i = 1; i < digits.size(); ++i) {
        std::vector<std::string> tmp;
        tmp.reserve(result.size() * vec[digits[i] - '2'].size());
        for (size_t j = 0; j < result.size(); ++j) {
            for (size_t k = 0; k < vec[digits[i] - '2'].size(); ++k) {
                tmp.push_back(result[j] + vec[digits[i] - '2'][k]);
            }
        }
        result = std::move(tmp);
    }
    return result;
}

}  // namespace leetcode::letter_combinations_of_a_phone_number
