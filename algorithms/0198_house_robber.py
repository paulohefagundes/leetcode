from typing import List


class Solution:
    def rob(self, nums: List[int]) -> int:
        prev = 0
        curr = 0
        for n in nums:
            temp = max(prev + n, curr)
            prev = curr
            curr = temp
        return curr
