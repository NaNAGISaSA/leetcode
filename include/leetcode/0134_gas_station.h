#ifndef _LEETCODE_GAS_STATION_H_
#define _LEETCODE_GAS_STATION_H_

#include <vector>

namespace leetcode::gas_station {

class Solution {
public:
    static int can_complete_circuit(const std::vector<int>& gas, const std::vector<int>& cost);
};

}  // namespace leetcode::gas_station

#endif