#include "0134_gas_station.h"

namespace leetcode::gas_station {

int Solution::can_complete_circuit(const std::vector<int>& gas, const std::vector<int>& cost) {
    int start = static_cast<int>(gas.size()) - 1, end = 0;
    int remain = gas[start] - cost[start];
    while (end < start) {
        if (remain >= 0) {
            remain += gas[end] - cost[end];
            ++end;
        } else {
            --start;
            remain += gas[start] - cost[start];
        }
    }
    return remain >= 0 ? start : -1;
}

}  // namespace leetcode::gas_station
