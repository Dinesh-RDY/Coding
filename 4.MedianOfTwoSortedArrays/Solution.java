package MedianOfTwoSortedArrays;

public class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int n1 = nums1.length, n2 = nums2.length, total = n1 + n2 + 1;
        if (n1 > n2)
            return findMedianSortedArrays(nums2, nums1);
        int l = 0, h = n1;
        while (l <= h) {
            int mid = (l + h) / 2;
            int part = total / 2 - mid;
            int l1 = mid == 0 ? Integer.MIN_VALUE : nums1[mid - 1];
            int r1 = mid == n1 ? Integer.MAX_VALUE : nums1[mid];
            int l2 = part == 0 ? Integer.MIN_VALUE : nums2[part - 1];
            int r2 = part == n2 ? Integer.MAX_VALUE : nums2[part];
            if (l1 <= r1 && l2 <= r2) {
                if (total - 1 % 2 == 0)
                    return (Math.max(l1, l2) + Math.min(r1, r2)) / 2.0;
                return Math.max(l1, l2);
            } else if (l1 > r1)
                h = mid - 1;
            else
                l = mid + 1;
        }
        return -1.0;
    }
}
