#include "0167_two_sum_two.h"

namespace leetcode::two_sum_two {

std::vector<int> Solution::two_sum(const std::vector<int>& numbers, int target) {
    // sorted in non-decreasing order
    // exactly one solution
    int begin = 0, end = static_cast<int>(numbers.size()) - 1;
    while (begin < end) {
        int curr_num = numbers[begin] + numbers[end];
        if (curr_num == target) {
            return {begin + 1, end + 1};
        } else if (curr_num > target) {
            --end;
        } else {
            ++begin;
        }
    }
    return {-1, -1};
}

}  // namespace leetcode::two_sum_two
