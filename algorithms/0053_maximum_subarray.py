class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        current = nums[0]
        result = current
        for i in range(1, len(nums)):
            current = max(nums[i], current + nums[i])
            result = max(result, current)
        return result
