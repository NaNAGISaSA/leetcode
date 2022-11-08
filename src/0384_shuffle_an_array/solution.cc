#include "0384_shuffle_an_array.h"

#include <cstdlib>

namespace leetcode::shuffle_an_array {

class Solution::Impl {
public:
    Impl(const std::vector<int>& nums) : origin_num(nums), shuffle_num(nums), is_shuffle(false) {
    }

    std::vector<int> reset() {
        if (is_shuffle) {
            shuffle_num = origin_num;
        }
        return shuffle_num;
    }

    std::vector<int> shuffle() {
        is_shuffle = true;
        int i = 1, size = static_cast<int>(origin_num.size());
        while (i <= size) {
            int idx = rand() % i;
            std::swap(shuffle_num[idx], shuffle_num[i - 1]);
            ++i;
        }
        return shuffle_num;
    }

private:
    const std::vector<int> origin_num;
    std::vector<int> shuffle_num;
    bool is_shuffle;
};

Solution::Solution(const std::vector<int>& nums) : impl(std::make_unique<Impl>(nums)) {
}

Solution::~Solution() = default;

std::vector<int> Solution::reset() {
    return impl->reset();
}

std::vector<int> Solution::shuffle() {
    return impl->shuffle();
}

}  // namespace leetcode::shuffle_an_array
