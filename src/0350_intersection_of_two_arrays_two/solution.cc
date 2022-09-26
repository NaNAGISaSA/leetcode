#include "0350_intersection_of_two_arrays_two.h"

#include <unordered_map>

namespace leetcode::intersection_of_two_arrays_two {

std::vector<int> Solution::intersection(const std::vector<int>& nums1, const std::vector<int>& nums2) {
    std::unordered_map<int, int> count_map;
    for (auto num : nums1) {
        ++count_map[num];
    }
    std::vector<int> result;
    for (auto num : nums2) {
        if (count_map.find(num) != count_map.end()) {
            result.push_back(num);
            if (--count_map[num] == 0) {
                count_map.erase(num);
            }
        }
    }
    return result;
}

}  // namespace leetcode::intersection_of_two_arrays_two
