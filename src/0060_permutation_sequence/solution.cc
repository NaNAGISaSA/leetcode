#include <vector>

#include "0060_permutation_sequence.h"

namespace leetcode::permutation_sequence {

std::string Solution::get_permutation(int n, int k) {
    std::vector<int> multi(n, 1), num(n, 1);
    for (int i = 2; i <= n; ++i) {
        num[i - 1] = i;
        multi[n - i] = (i - 1) * multi[n - i + 1];
    }

    auto delete_element = [&num](int number) {
        auto it = num.begin();
        while (*it != number) {
            ++it;
        }
        num.erase(it);
    };

    std::string result;
    --k;  // key of this alg
    for (int i = 0; i < n; ++i) {
        int idx = k / multi[i];
        result.push_back(static_cast<char>('0' + num[idx]));
        delete_element(num[idx]);
        k -= idx * multi[i];
    }
    return result;
}

}  // namespace leetcode::permutation_sequence
