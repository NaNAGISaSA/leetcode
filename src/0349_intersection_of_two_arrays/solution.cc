#include "0349_intersection_of_two_arrays.h"

#include <unordered_set>

namespace leetcode::intersection_of_two_arrays {

std::vector<int> Solution::intersection(const std::vector<int>& nums1, const std::vector<int>& nums2) {
    std::unordered_set<int> set1, set2;
    for (auto num : nums1) {
        set1.insert(num);
    }
    for (auto num : nums2) {
        if (set1.find(num) != set1.end()) {
            set2.insert(num);
        }
    }
    std::vector<int> result(set2.begin(), set2.end());
    return result;
}

}  // namespace leetcode::intersection_of_two_arrays
