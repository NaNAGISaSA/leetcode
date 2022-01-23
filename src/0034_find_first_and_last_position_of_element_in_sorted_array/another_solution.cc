#include <string>

#include "0034_find_first_and_last_position_of_element_in_sorted_array.h"

namespace leetcode::find_first_and_last_position_of_element_in_sorted_array::another {

std::vector<int> Solution::search_range(const std::vector<int>& nums, int target) {
    auto binary_search = [&nums, &target](int begin, const std::string& position) {
        int middle = 0, end = static_cast<int>(nums.size() - 1);
        int idx = -1;
        while (begin <= end) {
            middle = begin + (end - begin) / 2;
            if (nums[middle] == target) {
                idx = middle;
                if (position == "left") {
                    end = middle - 1;
                } else {
                    begin = middle + 1;
                }
            } else if (nums[middle] > target) {
                end = middle - 1;
            } else {
                begin = middle + 1;
            }
        }
        return idx;
    };

    int idx = binary_search(0, "left");
    std::vector<int> result{idx, idx};
    if (idx == -1) {
        return result;
    }
    idx = binary_search(idx + 1, "right");
    if (idx != -1) {
        result[1] = idx;
    }
    return result;
}

}  // namespace leetcode::find_first_and_last_position_of_element_in_sorted_array::another