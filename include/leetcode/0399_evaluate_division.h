#ifndef LEETCODE_EVALUATE_DIVISION_H_
#define LEETCODE_EVALUATE_DIVISION_H_

#include <string>
#include <vector>

namespace leetcode::evaluate_division {

class Solution {
public:
    static std::vector<double> calc_equation(const std::vector<std::vector<std::string>>& equations,
                                             const std::vector<double>& values,
                                             const std::vector<std::vector<std::string>>& queries);
};

}  // namespace leetcode::evaluate_division

#endif
