#ifndef _LEETCODE_COURSE_SCHEDULE_H_
#define _LEETCODE_COURSE_SCHEDULE_H_

#include <vector>

namespace leetcode::course_schedule {

class Solution {
public:
    static bool can_finish(int num_courses, const std::vector<std::vector<int>>& prerequisites);
};

}  // namespace leetcode::course_schedule

#endif