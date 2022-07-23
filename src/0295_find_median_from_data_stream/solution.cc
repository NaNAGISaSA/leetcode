#include "0295_find_median_from_data_stream.h"

#include <algorithm>
#include <queue>
#include <vector>

namespace leetcode::find_median_from_data_stream {

class MedianFinder::Impl {
public:
    Impl() : max_heap{}, min_heap{} {
    }

    void add_num(int num) {
        size_t max_size = max_heap.size(), min_size = min_heap.size();
        if (max_size == 0 || min_size == 0 || num < max_heap.top()) {
            max_heap.push(num);
            ++max_size;
        } else {
            min_heap.push(num);
            ++min_size;
        }
        if (max_size - min_size == 2) {
            min_heap.push(max_heap.top());
            max_heap.pop();
        } else if (min_size - max_size == 2) {
            max_heap.push(min_heap.top());
            min_heap.pop();
        }
    }

    double find_median() {
        size_t max_size = max_heap.size(), min_size = min_heap.size();
        if (max_size + min_size == 0) {
            return 0.0;
        } else if ((max_size + min_size) % 2 == 0) {
            return (max_heap.top() + min_heap.top()) / 2.0;
        } else {
            return max_size > min_size ? max_heap.top() : min_heap.top();
        }
    }

private:
    std::priority_queue<int, std::vector<int>, std::less<int>> max_heap;
    std::priority_queue<int, std::vector<int>, std::greater<int>> min_heap;
};

MedianFinder::MedianFinder() : impl(std::make_unique<Impl>()) {
}

MedianFinder::~MedianFinder() = default;

void MedianFinder::add_num(int num) {
    impl->add_num(num);
}

double MedianFinder::find_median() {
    return impl->find_median();
}

}  // namespace leetcode::find_median_from_data_stream
