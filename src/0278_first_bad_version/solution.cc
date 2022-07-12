#include "0278_first_bad_version.h"

#include <algorithm>

namespace leetcode::first_bad_version {

namespace {
bool is_bad_version(int version) {
    return version > 3;
}
}  // namespace

int Solution::first_bad_version(int n) {
    int begin = 1, end = n, middle = 0;
    int result = n;
    while (begin <= end) {
        middle = begin + (end - begin) / 2;
        if (is_bad_version(middle)) {
            result = std::min(result, middle);
            end = middle - 1;
        } else {
            begin = middle + 1;
        }
    }
    return result;
}

}  // namespace leetcode::first_bad_version
