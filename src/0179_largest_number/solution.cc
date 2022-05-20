#include "0179_largest_number.h"

#include <algorithm>

namespace leetcode::largest_number {

std::string Solution::largest_number(std::vector<int>& nums) {
    auto bigger = [](int a, int b) {
        std::string a_str(std::to_string(a)), b_str(std::to_string(b));
        return a_str + b_str > b_str + a_str;
    };
    std::sort(nums.begin(), nums.end(), bigger);
    std::string result;
    for (auto& num : nums) {
        result += std::to_string(num);
    }
    return result.front() == '0' ? "0" : result;
}

}  // namespace leetcode::largest_number
