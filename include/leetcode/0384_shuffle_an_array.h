#ifndef LEETCODE_SHUFFLE_AN_ARRAY_H_
#define LEETCODE_SHUFFLE_AN_ARRAY_H_

#include <memory>
#include <vector>

namespace leetcode::shuffle_an_array {

class Solution {
public:
    Solution(const std::vector<int>& nums);
    ~Solution();

    std::vector<int> reset();
    std::vector<int> shuffle();

private:
    class Impl;
    std::unique_ptr<Impl> impl;
};

}  // namespace leetcode::shuffle_an_array

#endif