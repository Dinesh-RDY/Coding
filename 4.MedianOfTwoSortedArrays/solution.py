from typing import List


class Solution:
    def findMedianSortedArrays(self, nums1:List, nums2:List)->float:
        n1, n2 = len(nums1), len(nums2) 
        if n1 > n2: return self.findMedianSortedArrays(nums2, nums1)
        total = n1 + n2 + 1
        l, h = 0 , n1
        while l <= h:
            mid = (l + h) // 2
            part = total // 2 - mid
            l1 = float("-inf") if mid == 0 else nums1[mid - 1]
            r1 = float("inf") if mid == n1 else nums1[mid]
            l2 = float("-inf") if part == 0 else nums2[part - 1]
            r2 = float("inf") if part == n2 else nums2[part]
            if l1 <= r2 and l2 <= r1:
                if (total - 1) % 2:
                    return (min(r1,r2) + max(l1, l2)) / 2
                return max(l1,l2)
            elif l1 > r2:
                h = mid - 1
            else:
                l = mid + 1
        return -1.0