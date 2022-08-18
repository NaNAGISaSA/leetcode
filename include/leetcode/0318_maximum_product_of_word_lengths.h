#ifndef LEETCODE_MAXIMUM_PRODUCT_OF_WORD_LENGTHS_H_
#define LEETCODE_MAXIMUM_PRODUCT_OF_WORD_LENGTHS_H_

#include <string>
#include <vector>

namespace leetcode::maximum_product_of_word_lengths {

class Solution {
public:
    static int max_product(const std::vector<std::string>& words);
};

}  // namespace leetcode::maximum_product_of_word_lengths

#endif