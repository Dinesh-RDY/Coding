class Solution {
    public int maxArea(int[] nums) {
        int i = 0, j = nums.length - 1, ans = 0, temp;
        while (i < j) {
            if (nums[i] > nums[j]) {
                temp = nums[j--];
            } else {
                temp = nums[i++];
            }
            ans = Math.max(ans, temp * (j - i + 1));
        }
        return ans;
    }
}