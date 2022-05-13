#include "0169_majority_element.h"

namespace leetcode::majority_element {

int Solution::majority_element(const std::vector<int>& nums) {
    // the majority element always exists
    int result = 0, count = 0;
    for (auto& num : nums) {
        if (count == 0) {
            result = num;
            ++count;
        } else if (num == result) {
            ++count;
        } else {
            --count;
        }
    }
    return result;
}

}  // namespace leetcode::majority_element
