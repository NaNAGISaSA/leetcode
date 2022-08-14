#include "0313_super_ugly_number.h"

#include <limits>

namespace leetcode::super_ugly_number::first {

int Solution::nth_super_ugly_number(int n, const std::vector<int>& primes) {
    size_t idx = 1, primes_size = primes.size();
    std::vector<int> multi_idx(primes_size, 0);
    std::vector<long> result(n, 1);
    while (--n != 0) {
        long curr_prime = std::numeric_limits<int>::max();
        for (size_t i = 0; i < primes_size; ++i) {
            curr_prime = std::min(curr_prime, result[multi_idx[i]] * primes[i]);
        }
        result[idx++] = curr_prime;
        for (size_t i = 0; i < primes_size; ++i) {
            if (primes[i] * result[multi_idx[i]] == curr_prime) {
                ++multi_idx[i];
            }
        }
    }
    return static_cast<int>(result.back());
}

}  // namespace leetcode::super_ugly_number::first
