#include "0068_text_justification.h"

namespace leetcode::text_justification {

std::vector<std::string> Solution::full_justify(std::vector<std::string>& words, int max_width) {
    // 1 <= words[i].length <= 20
    // words[i].length <= maxWidth
    int left = 0, right = 0;
    int width = 0, min_space_num = 0;
    std::vector<std::string> result;
    while (right < static_cast<int>(words.size())) {
        width += static_cast<int>(words[right].size());
        min_space_num = right - left;
        if (width + min_space_num > max_width) {
            std::string element;
            if (min_space_num == 1) {
                element += std::move(words[left]);
                element += std::string(max_width - static_cast<int>(words[left].size()), ' ');
            } else {
                width -= static_cast<int>(words[right].size());
                min_space_num = max_width - width;
                int space_num_div = min_space_num / (right - left - 1);
                int space_num_mod = min_space_num % (right - left - 1);
                for (int i = left; i < right - 1; ++i) {
                    element += std::move(words[i]);
                    element += std::string(space_num_div, ' ');
                    if (space_num_mod > 0) {
                        element += " ";
                        --space_num_mod;
                    }
                }
                element += std::move(words[right - 1]);
            }
            result.push_back(std::move(element));
            width = 0;
            min_space_num = 0;
            left = right;
        } else if (width + min_space_num == max_width) {
            std::string element;
            for (int i = left; i < right; ++i) {
                element += std::move(words[i]);
                element += " ";
            }
            element += std::move(words[right]);
            result.push_back(std::move(element));
            width = 0;
            min_space_num = 0;
            ++right;
            left = right;
        } else {
            ++right;
        }
    }

    if (left != right) {
        std::string element;
        for (int i = left; i < right; ++i) {
            element += std::move(words[i]);
            element += " ";
        }
        element += std::string(max_width - static_cast<int>(element.size()), ' ');
        result.push_back(std::move(element));
    }
    return result;
}

}  // namespace leetcode::text_justification
