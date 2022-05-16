#include "0165_compare_version_numbers.h"

namespace leetcode::compare_version_numbers {

int Solution::compare_version(std::string& version1, std::string& version2) {
    // All the given revisions in version1 and version2 can be stored in a 32-bit integer.
    size_t begin1 = 0, end1 = 0, begin2 = 0, end2 = 0;
    size_t version1_size = version1.size(), version2_size = version2.size();
    while (end1 < version1_size && end2 < version2_size) {
        while (end1 < version1_size && version1[end1] != '.') {
            ++end1;
        }
        while (end2 < version2_size && version2[end2] != '.') {
            ++end2;
        }
        int num1 = std::stoi(version1.substr(begin1, end1 - begin1));
        int num2 = std::stoi(version2.substr(begin2, end2 - begin2));
        if (num1 > num2) {
            return 1;
        } else if (num1 < num2) {
            return -1;
        }
        ++end1;
        ++end2;
        begin1 = end1;
        begin2 = end2;
    }
    while (end1 < version1_size) {
        while (end1 < version1_size && version1[end1] != '.') {
            ++end1;
        }
        int num = std::stoi(version1.substr(begin1, end1 - begin1));
        if (num != 0) {
            return 1;
        }
        ++end1;
        begin1 = end1;
    }
    while (end2 < version2_size) {
        while (end2 < version2_size && version2[end2] != '.') {
            ++end2;
        }
        int num = std::stoi(version2.substr(begin2, end2 - begin2));
        if (num != 0) {
            return -1;
        }
        ++end2;
        begin2 = end2;
    }
    return 0;
}

}  // namespace leetcode::compare_version_numbers
