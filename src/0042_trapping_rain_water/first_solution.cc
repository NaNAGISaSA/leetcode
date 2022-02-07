#include <algorithm>

#include "0042_trapping_rain_water.h"

namespace leetcode::trapping_rain_water::first {

int Solution::trap(const std::vector<int>& height) {
    if (height.size() < 3) {
        return 0;
    }
    std::vector<int> max_height_left(height.size(), height.front()), max_height_right(height.size(), height.back());
    for (size_t i = 1; i < height.size(); ++i) {
        max_height_left[i] = std::max(height[i], max_height_left[i - 1]);
    }
    for (size_t i = height.size() - 2; i < height.size(); --i) {
        max_height_right[i] = std::max(height[i], max_height_right[i + 1]);
    }
    int result = 0;
    for (size_t i = 1; i < height.size() - 1; ++i) {
        result += max_height_left[i - 1] > height[i] && max_height_right[i + 1] > height[i] ?
                      std::min(max_height_left[i - 1], max_height_right[i + 1]) - height[i] :
                      0;
    }
    return result;
}

}  // namespace leetcode::trapping_rain_water