#include "0004_median_of_two_sorted_arrays.h"

namespace leetcode::median_of_two_sorted_arrays {

namespace {
// Here, two vec must be same length
int find_upper_median(const std::vector<int>& vec1,
                      int start1,
                      int end1,
                      const std::vector<int>& vec2,
                      int start2,
                      int end2) {
    int middle1 = 0, middle2 = 0;
    while (start1 != end1) {
        middle1 = (start1 + end1) / 2;
        middle2 = (start2 + end2) / 2;
        if (vec1[middle1] == vec2[middle2]) {
            return vec1[middle1];
        } else if (vec1[middle1] > vec2[middle2]) {
            end1 = middle1;
            start2 = (end2 - start2) % 2 == 0 ? middle2 : middle2 + 1;
        } else {
            end2 = middle2;
            start1 = (end1 - start1) % 2 == 0 ? middle1 : middle1 + 1;
        }
    }
    return vec1[start1] < vec2[start2] ? vec1[start1] : vec2[start2];
}

double find_k_number(const std::vector<int>& vec1, const std::vector<int>& vec2, int kth) {
    int lsize = static_cast<int>(vec1.size()), ssize = static_cast<int>(vec2.size());
    if (kth <= ssize) {
        // min of kth is short_size
        return static_cast<double>(find_upper_median(vec1, 0, kth - 1, vec2, 0, kth - 1));
    } else if (kth > lsize) {
        /*
         * Common Case:
         * if (vec2[kth - lsize - 1] >= vec1[lsize - 1]) {
         *     return static_cast<double>(vec2[kth - lsize - 1]);
         * }
         * if (vec1[kth - ssize - 1] >= vec2[ssize - 1]) {
         *     return static_cast<double>(vec1[kth - ssize - 1]);
         * }
         * return static_cast<double>(find_upper_median(vec1, kth - ssize, lsize - 1, vec2, kth - lsize, ssize - 1));
         */

        // For this problem, optimize as follows
        // if kth > long size, kth must be long size + 1
        if (vec2[0] >= vec1[lsize - 1]) {
            return static_cast<double>(vec2[0]);
        }
        if (vec1[0] >= vec2[ssize - 1]) {
            return static_cast<double>(vec1[0]);
        }
        return static_cast<double>(find_upper_median(vec1, 1, lsize - 1, vec2, 1, ssize - 1));
    } else {
        if (vec1[kth - ssize - 1] >= vec2[ssize - 1]) {
            return static_cast<double>(vec1[kth - ssize - 1]);
        }
        return static_cast<double>(find_upper_median(vec1, kth - ssize, kth - 1, vec2, 0, ssize - 1));
    }
}
}  // namespace

double Solution::find_median_sorted_arrays(const std::vector<int>& nums1, const std::vector<int>& nums2) {
    auto find_median = [](const std::vector<int>& vec, int end) {
        int middle = end / 2;
        if (end % 2 == 0) {
            return static_cast<double>(vec[middle]);
        } else {
            return (static_cast<double>(vec[middle]) + static_cast<double>(vec[middle + 1])) / 2;
        }
    };

    int m = static_cast<int>(nums1.size()), n = static_cast<int>(nums2.size());
    if (m == 0 && n == 0) {
        return 0.0;
    } else if (m == 0) {
        return find_median(nums2, n - 1);
    } else if (n == 0) {
        return find_median(nums1, m - 1);
    }

    const auto& long_vec = m > n ? nums1 : nums2;
    const auto& short_vec = m > n ? nums2 : nums1;
    if ((m + n) % 2 == 0) {
        return (find_k_number(long_vec, short_vec, (m + n) / 2) + find_k_number(long_vec, short_vec, (m + n) / 2 + 1)) /
               2;
    } else {
        return find_k_number(long_vec, short_vec, (m + n) / 2 + 1);
    }
}

}  // namespace leetcode::median_of_two_sorted_arrays
