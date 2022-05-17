#include "0165_compare_version_numbers.h"

namespace leetcode::compare_version_numbers {

int Solution::compare_version(std::string& version1, std::string& version2) {
    // All the given revisions in version1 and version2 can be stored in a 32-bit integer.
    size_t idx1 = 0, idx2 = 0;
    int num1 = 0, num2 = 0;
    while (idx1 < version1.size() || idx2 < version2.size()) {
        while (idx1 < version1.size() && version1[idx1] != '.') {
            num1 = 10 * num1 + (version1[idx1] - '0');
            ++idx1;
        }
        while (idx2 < version2.size() && version2[idx2] != '.') {
            num2 = 10 * num2 + (version2[idx2] - '0');
            ++idx2;
        }
        if (num1 > num2) {
            return 1;
        } else if (num1 < num2) {
            return -1;
        }
        ++idx1;
        ++idx2;
        num1 = 0;
        num2 = 0;
    }
    return 0;
}

}  // namespace leetcode::compare_version_numbers
