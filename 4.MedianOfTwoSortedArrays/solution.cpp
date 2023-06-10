#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        int n1 = nums1.size(), n2 = nums2.size(), total = n1 + n2 + 1;
        if(n1 > n2)
            return findMedianSortedArrays(nums2, nums1);
        int l = 0, h = n1;
        while(l <= h){
            int mid = (l + h) / 2;
            int part = (total) / 2 - mid;
            int l1 = mid == 0 ? INT_MIN : nums1[mid - 1];
            int r1 = mid == n1 ? INT_MAX : nums1[mid];
            int l2 = part == 0 ? INT_MIN : nums2[part - 1];
            int r2 = part == n2 ? INT_MAX : nums2[part];
            if(l1 <= r2 and l2 <= r1){
                if((total - 1) % 2)
                    return max(l1, l2);
                return (min(r1, r2) + max(l1, l2)) / 2.0;
            }else if(l1 > r2){
                h = mid - 1;
            }else{
                l = mid + 1;
            }
        }
        return -1.0;
    }
};