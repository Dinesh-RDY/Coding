from typing import List


class Solution:
    def maxArea(self, nums:List[int])->int:
        i,j,ans = 0,len(nums)- 1, 0
        while i < j:
            if nums[i]> nums[j]:
                temp = nums[j]
                j -= 1
            else:
                temp = nums[i]
                i += 1
            ans= max(ans, temp * (j - i + 1))
        return ans
