#include <algorithm>

#include "0011_container_with_most_water.h"

namespace leetcode::container_with_most_water {

int Solution::max_area(const std::vector<int>& height) {
    int begin = 0, end = static_cast<int>(height.size()) - 1, area = 0;
    while (begin < end) {
        area = std::max(area, std::min(height[begin], height[end]) * (end - begin));
        if (height[begin] > height[end]) {
            --end;
        } else {
            ++begin;
        }
    }
    return area;
}

}  // namespace leetcode::container_with_most_water
