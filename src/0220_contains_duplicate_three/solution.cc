#include "0220_contains_duplicate_three.h"

#include <set>

namespace leetcode::contains_duplicate_three {

/*
维护一个k个元素的滑窗，保证abs(i - j) <= k；
对于当前的元素ele，从滑窗中选择第一个大于等于ele - t的元素并比较其是否小于等于ele + t。
使用set可以将时间复杂度由O(k*N)缩小至O(logk*N)。
*/
bool Solution::contains_nearby_almost_duplicate(const std::vector<int>& nums, int k, int t) {
    // abs(nums[i] - nums[j]) <= t and abs(i - j) <= k
    std::set<long> window;
    long lt = static_cast<long>(t);
    int nums_size = static_cast<int>(nums.size());
    for (int i = 0; i < nums_size; ++i) {
        if (i > k) {
            window.erase(nums[i - k - 1]);
        }
        auto it = window.lower_bound(nums[i] - lt);
        if (it != window.end() && lt + nums[i] >= *it) {
            return true;
        }
        window.insert(static_cast<long>(nums[i]));
    }
    return false;
}

}  // namespace leetcode::contains_duplicate_three
