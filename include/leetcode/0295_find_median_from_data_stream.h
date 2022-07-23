#ifndef _LEETCODE_FIND_MEDIAN_FROM_DATA_STREAM_H_
#define _LEETCODE_FIND_MEDIAN_FROM_DATA_STREAM_H_

#include <memory>

namespace leetcode::find_median_from_data_stream {

class MedianFinder {
public:
    MedianFinder();
    ~MedianFinder();

    void add_num(int num);
    double find_median();

private:
    class Impl;
    std::unique_ptr<Impl> impl;
};

}  // namespace leetcode::find_median_from_data_stream

#endif
