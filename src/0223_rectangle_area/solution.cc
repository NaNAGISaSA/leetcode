#include "0223_rectangle_area.h"

#include <algorithm>

namespace leetcode::rectangle_area {

int Solution::compute_area(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
    int width1 = ax2 - ax1, width2 = bx2 - bx1;
    int height1 = ay2 - ay1, height2 = by2 - by1;
    int overlap_width = width1 + width2 - (std::max(ax2, bx2) - std::min(ax1, bx1));
    int overlap_height = height1 + height2 - (std::max(ay2, by2) - std::min(ay1, by1));
    if (overlap_width <= 0 || overlap_height <= 0) {
        return width1 * height1 + width2 * height2;
    } else {
        return width1 * height1 + width2 * height2 - overlap_height * overlap_width;
    }
}

}  // namespace leetcode::rectangle_area
