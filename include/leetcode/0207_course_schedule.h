#ifndef _LEETCODE_COURSE_SCHEDULE_H_
#define _LEETCODE_COURSE_SCHEDULE_H_

#include <vector>

namespace leetcode::course_schedule {

#define SOLUTION_CLASS_DECLARATION                                                                   \
    class Solution {                                                                                 \
    public:                                                                                          \
        static bool can_finish(int num_courses, const std::vector<std::vector<int>>& prerequisites); \
    }

namespace bfs {
SOLUTION_CLASS_DECLARATION;
}

namespace kahn {
SOLUTION_CLASS_DECLARATION;
}

}  // namespace leetcode::course_schedule

#endif