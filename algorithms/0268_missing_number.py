from typing import List


class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        missing = len(nums)
        for i, n in enumerate(nums):
            missing ^= n
            missing ^= i
        return missing
