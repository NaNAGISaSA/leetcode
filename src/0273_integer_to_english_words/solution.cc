#include "0273_integer_to_english_words.h"

#include <vector>

namespace leetcode::integer_to_english_words {

namespace {
std::string num0to19(int num) {
    std::string words[20]{"Zero",     "One",     "Two",     "Three",     "Four",     "Five",    "Six",
                          "Seven",    "Eight",   "Nine",    "Ten",       "Eleven",   "Twelve",  "Thirteen",
                          "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    return words[num];
}

std::string num20to99(int num) {
    if (num < 20) {
        return num0to19(num);
    }
    std::string words[8]{"Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
    std::string result = words[num / 10 - 2];
    num %= 10;
    return num == 0 ? result : result + " " + num0to19(num);
}

std::string num100to999(int num) {
    if (num < 100) {
        return num20to99(num);
    }
    std::string result = num0to19(num / 100) + " Hundred";
    num %= 100;
    return num == 0 ? result : result + " " + num20to99(num);
}
}  // namespace

std::string Solution::number_to_words(int num) {
    if (num == 0) {
        return num0to19(num);
    }

    std::string words[3]{" Billion", " Million", " Thousand"};
    int nums[3]{1'000'000'000, 1'000'000, 1'000};

    std::vector<std::string> result_vec;
    for (int i = 0; i < 3; ++i) {
        if (num < nums[i]) {
            continue;
        }
        result_vec.push_back(num100to999(num / nums[i]) + words[i]);
        num %= nums[i];
    }
    if (num != 0) {
        result_vec.push_back(num100to999(num));
    }

    std::string result;
    for (auto& str : result_vec) {
        result += std::move(str) + " ";
    }
    result.pop_back();
    return result;
}

}  // namespace leetcode::integer_to_english_words
