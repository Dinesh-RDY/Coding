from typing import List

class Solution:
    def threeSumClosest(nums:List[int],target:int)->int:
            nums.sort()
            prevDiff = float('inf')
            ans = 0
            for i in range(len(nums) - 2):
                j, k = i + 1, len(nums) -1
                while j <k:
                    sums = nums[i] + nums[j] + nums[k]
                    diff = abs(sums - target)
                    if diff < prevDiff:
                        prevDiff = diff
                        ans = sums
                    elif sums< diff:
                        j += 1
                    else:
                        k-=1
            return ans