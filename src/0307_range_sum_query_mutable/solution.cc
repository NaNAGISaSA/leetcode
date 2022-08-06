#include "0307_range_sum_query_mutable.h"

namespace leetcode::range_sum_query_mutable {

/*
 * Common method:
 * 1) O(n) for update, O(1) for sum
 * 2) O(1) for update, O(n) for sum
 *
 * Segment trees:
 * O(n) build tree, O(logn) for update, O(logn) for sum
 *
 * Details of segment trees can be found at:
 * https://www.geeksforgeeks.org/segment-tree-set-1-sum-of-given-range/
 */
class NumArray::Impl {
public:
    Impl(std::vector<int>& in_nums) : segment_tree(get_tree_size(in_nums.size()), 0), nums(std::move(in_nums)) {
        construct_segment_tree(0, nums.size() - 1, 0);
    }

    void update(int index, int val) {
        int diff = val - nums[index];
        nums[index] = val;
        update_segment_tree(0, nums.size() - 1, index, 0, diff);
    }

    int sum_range(int left, int right) {
        return sum_range_segment_tree(0, nums.size() - 1, left, right, 0);
    }

private:
    size_t get_tree_size(size_t nums_size) {
        size_t begin = 1;
        while (nums_size > begin) {
            begin *= 2;
        }
        return 2 * begin - 1;
    }

    int construct_segment_tree(size_t nums_idx_s, size_t nums_idx_e, size_t tree_idx) {
        if (nums_idx_s == nums_idx_e) {
            segment_tree[tree_idx] = nums[nums_idx_s];
            return segment_tree[tree_idx];
        }
        size_t mid = nums_idx_s + (nums_idx_e - nums_idx_s) / 2;
        segment_tree[tree_idx] = construct_segment_tree(nums_idx_s, mid, 2 * tree_idx + 1) +
                                 construct_segment_tree(mid + 1, nums_idx_e, 2 * tree_idx + 2);
        return segment_tree[tree_idx];
    }

    void update_segment_tree(size_t nums_idx_s, size_t nums_idx_e, size_t update_idx, size_t tree_idx, int diff) {
        if (update_idx < nums_idx_s || update_idx > nums_idx_e) {
            return;
        }
        segment_tree[tree_idx] += diff;
        if (nums_idx_s != nums_idx_e) {
            size_t mid = nums_idx_s + (nums_idx_e - nums_idx_s) / 2;
            update_segment_tree(nums_idx_s, mid, update_idx, 2 * tree_idx + 1, diff);
            update_segment_tree(mid + 1, nums_idx_e, update_idx, 2 * tree_idx + 2, diff);
        }
    }

    int sum_range_segment_tree(size_t nums_idx_s,
                               size_t nums_idx_e,
                               size_t sum_idx_s,
                               size_t sum_idx_e,
                               size_t tree_idx) {
        if (sum_idx_s <= nums_idx_s && nums_idx_e <= sum_idx_e) {
            return segment_tree[tree_idx];
        } else if (sum_idx_s > nums_idx_e || sum_idx_e < nums_idx_s) {
            return 0;
        }
        size_t mid = nums_idx_s + (nums_idx_e - nums_idx_s) / 2;
        return sum_range_segment_tree(nums_idx_s, mid, sum_idx_s, sum_idx_e, 2 * tree_idx + 1) +
               sum_range_segment_tree(mid + 1, nums_idx_e, sum_idx_s, sum_idx_e, 2 * tree_idx + 2);
    }

private:
    std::vector<int> segment_tree;
    std::vector<int> nums;
};

NumArray::NumArray(std::vector<int>& nums) : impl(std::make_unique<Impl>(nums)) {
}

NumArray::~NumArray() = default;

void NumArray::update(int index, int val) {
    impl->update(index, val);
}

int NumArray::sum_range(int left, int right) {
    return impl->sum_range(left, right);
}

}  // namespace leetcode::range_sum_query_mutable
