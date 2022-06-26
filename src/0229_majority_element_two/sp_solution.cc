#include "0229_majority_element_two.h"

namespace leetcode::majority_element_two::sp {

std::vector<int> Solution::majority_element(const std::vector<int>& nums) {
    int num1 = 0, num2 = 0;
    int cnt1 = 0, cnt2 = 0;
    for (auto& num : nums) {
        if (cnt1 == 0) {
            ++cnt1;
            num1 = num;
        } else if (num == num1) {
            ++cnt1;
        } else if (cnt2 == 0) {
            ++cnt2;
            num2 = num;
        } else if (num == num2) {
            ++cnt2;
        } else {
            --cnt1;
            --cnt2;
            if (cnt1 == 0 && cnt2 != 0) {
                cnt1 = cnt2;
                cnt2 = 0;
                num1 = num2;
            }
        }
    }
    std::vector<int> result;
    if (cnt1 == 0 && cnt2 == 0) {
        return result;
    }

    auto count_num = [&result, &nums](int target) {
        int cnt = 0;
        for (auto& num : nums) {
            if (num == target) {
                ++cnt;
            }
        }
        if (cnt > static_cast<int>(nums.size()) / 3) {
            result.push_back(target);
        }
    };

    if (cnt1 != 0) {
        count_num(num1);
    }
    if (cnt2 != 0) {
        count_num(num2);
    }
    return result;
}

}  // namespace leetcode::majority_element_two::sp
