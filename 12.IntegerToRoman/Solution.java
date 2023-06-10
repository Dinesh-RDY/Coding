class Solution {
    public String intToRoman(int num) {
        String ans = "";
        int[] nums = new int[] { 1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000 };
        String[] romans = new String[] { "I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M" };
        int i= 12;
        while (num != 0) {
            if (num < nums[i])
                i--;
            else {
                num -= nums[i];
                ans += romans[i];
            }
        }
        return ans;
    }
}