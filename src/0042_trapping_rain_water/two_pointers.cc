#include <algorithm>

#include "0042_trapping_rain_water.h"

namespace leetcode::trapping_rain_water::two_pointers {

int Solution::trap(const std::vector<int>& height) {
    if (height.size() < 3) {
        return 0;
    }
    int leftmost = height.front(), rightmost = height.back();
    int left = 1, right = static_cast<int>(height.size()) - 2;
    int result = 0;
    while (left <= right) {
        if (leftmost < rightmost) {
            result += std::max(leftmost - height[left], 0);
            leftmost = std::max(leftmost, height[left++]);
        } else {
            result += std::max(rightmost - height[right], 0);
            rightmost = std::max(rightmost, height[right--]);
        }
    }
    return result;
}

}  // namespace leetcode::trapping_rain_water::two_pointers