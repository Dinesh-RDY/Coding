public class Solution{
    public int removeDuplicates(int[] nums) {
        int sp = 0;
        for (int i = 0; i < nums.length; i++) {
            if (nums[sp] != nums[i]) {
                nums[++sp] = nums[i];
            }
        }
        return ++sp;
    }
}