#ifndef LEETCODE_DATA_STREAM_AS_DISJOINT_INTERVALS_H_
#define LEETCODE_DATA_STREAM_AS_DISJOINT_INTERVALS_H_

#include <memory>
#include <vector>

namespace leetcode::data_stream_as_disjoint_intervals {

class SummaryRanges {
public:
    SummaryRanges();
    ~SummaryRanges();

    void add_num(int value);
    std::vector<std::vector<int>> get_intervals();

private:
    class Impl;
    std::unique_ptr<Impl> impl;
};

}  // namespace leetcode::data_stream_as_disjoint_intervals

#endif