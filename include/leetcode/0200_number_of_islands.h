#ifndef _LEETCODE_NUMBER_OF_ISLAND_H_
#define _LEETCODE_NUMBER_OF_ISLAND_H_

#include <vector>

namespace leetcode::number_of_islands {

class Solution {
public:
    static int num_islands(std::vector<std::vector<char>>& grid);
};

}  // namespace leetcode::number_of_islands

#endif