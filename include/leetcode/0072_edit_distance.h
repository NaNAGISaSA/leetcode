#ifndef _LEETCODE_EDIT_DISTANCE_H_
#define _LEETCODE_EDIT_DISTANCE_H_

#include <string>

namespace leetcode::edit_distance {

class Solution {
public:
    static int min_distance(const std::string& word1, const std::string& word2);
};

}  // namespace leetcode::edit_distance

#endif