from typing import List


class Solution:
    # brute force approach
    # def twoSum(self, nums: List[int], target: int) -> List[int]:
    #     for i in range(len(nums)):
    #         for j in range(i + 1, len(nums)):
    #             if nums[i] + nums[j] == target:
    #                 return [i, j]
    #     return []

    def twoSum(self, nums: List[int], target: int) -> List[int]:
        dic = {}
        for i, n in enumerate(nums):
            if n in dic:
                return [dic[n], i]
            dic[target - n] = i
        return []
