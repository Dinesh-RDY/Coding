from typing import List


class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        mp = {}
        for i, num in enumerate(nums):
            if num in mp:
                return mp[num], i
            mp[target - num] = i
