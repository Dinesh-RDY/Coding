import java.util.HashSet;
import java.util.Set;

public class Solution {
    public int longestSubstring(String s) {
        int i = 0, j = 0, ans = 0, n = s.length();
        Set<String> ht = new HashSet<String>();
        while (j < n) {
            while(ht.contains(s.substring(i, 1)))
                ht.remove(s.substring(i++, 1));
            ans = Math.max(ans, j - i + 1);
            ht.add(s.substring(j, 1));
        }
        return ans;
    }
}