public class Solution{
    public String longestPalindrome(String s) {
        int start = 0, end = 0, n = s.length(), ans = 1;
        boolean[][] dp = new boolean[n][n];
        for (int len = 1; len <= n; len++) {
            for (int i = 0; i < n - len + 1; i++) {
                int j = i + len - 1;
                if (len == 1)
                    dp[i][j] = true;
                else if (s.charAt(i) == s.charAt(j) && (len == 2 || dp[i + 1][j - 1])) {
                    dp[i][j] = true;
                    if (ans < len) {
                        ans = len;
                        start = i;
                        end = j;
                    }
                }
            }
        }
        return s.substring(start, end);
    }
}