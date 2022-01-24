#include "0035_search_insert_position.h"

namespace leetcode::search_insert_position {

int Solution::search_insert(const std::vector<int>& nums, int target) {
    // 1 <= nums.length <= 10^4
    int begin = 0, middle = 0, end = static_cast<int>(nums.size() - 1);
    while (begin <= end) {
        middle = begin + (end - begin) / 2;
        if (nums[middle] == target) {
            return middle;
        } else if (nums[middle] < target) {
            begin = middle + 1;
        } else {
            end = middle - 1;
        }
    }
    return begin;
}

}  // namespace leetcode::search_insert_position
