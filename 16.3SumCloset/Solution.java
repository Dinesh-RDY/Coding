import java.util.*;
public class Solution {
    public int threeSumClosest(int[] nums, int t) {
        Arrays.sort(nums);
        int prevDiff = Integer.MAX_VALUE;
        int ans;
        for (int i = 0; i < nums.length - 2; i++) {
            int j = i + 1, k = nums.length - 1;
            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                int diff = Math.abs(t - sum);
                if (diff < prevDiff) {
                    prevDiff = diff;
                    ans = sum;
                } else if (sum < t) {
                    j++;
                } else {
                    k--;
                }
            }
        }
        return ans;
    }
}
