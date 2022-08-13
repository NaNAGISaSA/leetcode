#ifndef LEETCODE_SUPER_UGLY_NUMBER_H_
#define LEETCODE_SUPER_UGLY_NUMBER_H_

#include <vector>

namespace leetcode::super_ugly_number {

class Solution {
public:
    static int nth_super_ugly_number(int n, const std::vector<int>& primes);
};

}  // namespace leetcode::super_ugly_number

#endif