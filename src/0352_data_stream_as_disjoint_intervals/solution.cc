#include "0352_data_stream_as_disjoint_intervals.h"

#include <map>
#include <unordered_set>

namespace leetcode::data_stream_as_disjoint_intervals {

class SummaryRanges::Impl {
public:
    Impl() : map{}, appear{} {
    }

    void add_num(int value) {
        if (appear.find(value) != appear.end()) {
            return;
        }
        appear.insert(value);
        bool has_left = map.find(value - 1) != map.end();
        bool has_right = map.find(value + 1) != map.end();
        if (has_left && has_right) {
            int left_len = map[value - 1][1] - map[value - 1][0] + 1;
            int right_len = map[value + 1][1] - map[value + 1][0] + 1;
            map[value - left_len][1] += (right_len + 1);
            map[value + right_len][0] -= (left_len + 1);
            if (left_len != 1) {
                map.erase(value - 1);
            }
            if (right_len != 1) {
                map.erase(value + 1);
            }
            return;
        }
        map.insert({value, {value, value}});
        if (has_left) {
            int left_len = map[value - 1][1] - map[value - 1][0] + 1;
            map[value - left_len][1] += 1;
            map[value][0] -= left_len;
            if (left_len != 1) {
                map.erase(value - 1);
            }
        }
        if (has_right) {
            int right_len = map[value + 1][1] - map[value + 1][0] + 1;
            map[value + right_len][0] -= 1;
            map[value][1] += right_len;
            if (right_len != 1) {
                map.erase(value + 1);
            }
        }
    }

    std::vector<std::vector<int>> get_intervals() {
        std::vector<std::vector<int>> result;
        result.reserve(map.size());
        for (auto it = map.cbegin(), end = map.cend(); it != end; ++it) {
            if (it->first == it->second[0]) {
                result.push_back(it->second);
            }
        }
        return result;
    }

private:
    std::map<int, std::vector<int>> map;
    std::unordered_set<int> appear;
};

SummaryRanges::SummaryRanges() : impl(std::make_unique<Impl>()) {
}

SummaryRanges::~SummaryRanges() = default;

void SummaryRanges::add_num(int value) {
    impl->add_num(value);
}

std::vector<std::vector<int>> SummaryRanges::get_intervals() {
    return impl->get_intervals();
}

}  // namespace leetcode::data_stream_as_disjoint_intervals
