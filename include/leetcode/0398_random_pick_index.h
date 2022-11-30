#ifndef LEETCODE_RANDOM_PICK_INDEX_H_
#define LEETCODE_RANDOM_PICK_INDEX_H_

#include <vector>

namespace leetcode::random_pick_index {

class Solution {
public:
    Solution(const std::vector<int>& nums);
    int pick(int target);

private:
    std::vector<int> nums;
};

}  // namespace leetcode::random_pick_index

#endif
