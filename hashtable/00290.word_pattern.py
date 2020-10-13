
"""
Runtime: 24 ms, faster than 93.81% of Python3 online submissions for Word Pattern.
Memory Usage: 14 MB, less than 5.33% of Python3 online submissions for Word Pattern.
"""


class Solution:
    def word_pattern(self, pattern: str, str: str) -> bool:  # pylint: disable=redefined-builtin
        split_list = str.split(' ')
        if len(pattern) != len(split_list) or len(set(pattern)) != len(set(split_list)):
            return False
        set_join = {''.join(e) for e in zip(pattern, split_list)}
        return len(set_join) == len(set(pattern)) == len(set(split_list))


"""
Runtime: 28 ms, faster than 80.81% of Python3 online submissions for Word Pattern.
Memory Usage: 13.9 MB, less than 40.24% of Python3 online submissions for Word Pattern.
"""


class Solution2:
    def word_pattern(self, pattern: str, str: str) -> bool:  # pylint: disable=redefined-builtin
        split_list = str.split(' ')
        return (len(pattern) == len(split_list)) and \
               (len(set(zip(pattern, split_list))) == len(set(pattern)) == len(set(split_list)))
