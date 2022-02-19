#ifndef _LEETCODE_N_QUEEN_H_
#define _LEETCODE_N_QUEEN_H_

#include <string>
#include <vector>

namespace leetcode::n_queens {

class Solution {
public:
    static std::vector<std::vector<std::string>> solve_n_queens(int n);
};

}  // namespace leetcode::n_queens

#endif