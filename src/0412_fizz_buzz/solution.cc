#include "0412_fizz_buzz.h"

namespace leetcode::fizz_buzz {

std::vector<std::string> Solution::fizz_buzz(int n) {
    std::vector<std::string> result;
    result.reserve(n);
    for (int i = 1; i <= n; ++i) {
        result.push_back(std::to_string(i));
    }
    for (int i = 3; i <= n; i += 3) {
        result[i - 1] = "Fizz";
    }
    for (int i = 5; i <= n; i += 5) {
        result[i - 1] = "Buzz";
    }
    for (int i = 15; i <= n; i += 15) {
        result[i - 1] = "FizzBuzz";
    }
    return result;
}

}  // namespace leetcode::fizz_buzz
