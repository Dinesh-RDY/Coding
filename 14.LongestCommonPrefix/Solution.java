import java.util.Arrays;
public class Solution{
    public String longestCommonPrefix(String[] strs) {
        Arrays.sort(strs);
        String low = strs[0], high = strs[strs.length - 1];
        int i = 0;
        while(i < low.length() && low.charAt(i) == high.charAt(i)) i++;
        return low.substring(0, i);
    }
}