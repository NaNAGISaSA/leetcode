#include "0204_count_primes.h"

#include <vector>

namespace leetcode::count_primes {

int Solution::count_primes(int n) {
    // 0 <= n <= 5 * 10^6
    std::vector<bool> is_prime(n, true);
    int result = 0;
    for (int i = 2; i < n; ++i) {
        if (is_prime[i]) {
            ++result;
            for (int j = i * 2; j < n; j += i) {
                is_prime[j] = false;
            }
        }
    }
    return result;
}

}  // namespace leetcode::count_primes
