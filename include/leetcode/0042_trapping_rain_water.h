#ifndef _LEETCODE_TRAPPING_RAIN_WATER_H_
#define _LEETCODE_TRAPPING_RAIN_WATER_H_

#include <vector>

namespace leetcode::trapping_rain_water {

#define SOLUTION_CLASS_DECLARATION                       \
    class Solution {                                     \
    public:                                              \
        static int trap(const std::vector<int>& height); \
    }

namespace first {
SOLUTION_CLASS_DECLARATION;
}

namespace two_pointers {
SOLUTION_CLASS_DECLARATION;
}

}  // namespace leetcode::trapping_rain_water

#endif
