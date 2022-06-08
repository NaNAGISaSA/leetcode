#ifndef _LEETCODE_COURSE_SCHEDULE_TWO_H_
#define _LEETCODE_COURSE_SCHEDULE_TWO_H_

#include <vector>

namespace leetcode::course_schedule_two {

class Solution {
public:
    static std::vector<int> find_order(int num_courses, const std::vector<std::vector<int>>& prerequisites);
};

}  // namespace leetcode::course_schedule_two

#endif