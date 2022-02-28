#include <vector>

#include "0060_permutation_sequence.h"

namespace leetcode::permutation_sequence {

std::string Solution::get_permutation(int n, int k) {
    std::vector<int> factorial{1};
    std::vector<char> nums;
    for (int i = 1; i < n; ++i) {
        factorial.push_back(factorial.back() * i);
        nums.push_back(static_cast<char>('0' + i));
    }
    nums.push_back(static_cast<char>('0' + n));

    auto delete_element = [&nums](int idx) {
        auto it = nums.begin();
        while (idx-- != 0) {
            it = std::next(it);
        }
        nums.erase(it);
    };

    std::string result;
    result.reserve(n);
    --k;  // key of this algorithm
    for (int i = 1; i <= n; ++i) {
        int idx = k / factorial[n - i];
        result.push_back(nums[idx]);
        delete_element(idx);
        k -= idx * factorial[n - i];
    }
    return result;
}

}  // namespace leetcode::permutation_sequence
