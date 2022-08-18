#include "0318_maximum_product_of_word_lengths.h"

#include <algorithm>

namespace leetcode::maximum_product_of_word_lengths {

int Solution::max_product(const std::vector<std::string>& words) {
    size_t word_size = words.size();
    std::vector<int> word_bit(word_size, 0);
    for (size_t i = 0; i < word_size; ++i) {
        for (const auto& chr : words[i]) {
            word_bit[i] |= (1 << (chr - 'a'));
        }
    }
    size_t result = 0;
    for (size_t i = 0; i < word_size; ++i) {
        for (size_t j = i + 1; j < word_size; ++j) {
            if ((word_bit[i] & word_bit[j]) == 0) {
                result = std::max(result, words[i].size() * words[j].size());
            }
        }
    }
    return static_cast<int>(result);
}

}  // namespace leetcode::maximum_product_of_word_lengths
