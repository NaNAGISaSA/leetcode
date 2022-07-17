#include "0287_find_the_duplicate_number.h"

namespace leetcode::find_the_duplicate_number {

int Solution::find_duplicate(const std::vector<int>& nums) {
    int slow = nums.front(), fast = slow;
    do {
        slow = nums[slow];
        fast = nums[nums[fast]];
    } while (slow != fast);
    fast = nums.front();
    while (slow != fast) {
        slow = nums[slow];
        fast = nums[fast];
    }
    return slow;
}

}  // namespace leetcode::find_the_duplicate_number
