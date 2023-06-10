from typing import List

class Solution:
    def longestCommonPrefix(self, strs:List[str])->str:
        strs.sort()
        low,high = strs[0] , strs[len(strs)-1]
        i = 0
        while i < len(low) and low[i] == high[i]:
            i += 1
        return low[0:i]