#include "0275_h_index_two.h"

#include <algorithm>

namespace leetcode::h_index_two {

int Solution::h_index(const std::vector<int>& citations) {
    int paper_num = static_cast<int>(citations.size());
    int begin = 0, end = paper_num - 1, middle = 0;
    int result = 0;
    while (begin <= end) {
        middle = begin + (end - begin) / 2;
        if (citations[middle] >= paper_num - middle) {
            result = std::max(result, paper_num - middle);
            end = middle - 1;
        } else {
            begin = middle + 1;
        }
    }
    return result;
}

}  // namespace leetcode::h_index_two
