class Solution:
    def longestPalindrome(self, s:str)->str:
        """
        return longest Palindromic substring in the string s
        """
        st,end,ans = 0,0, 1
        n = len(s)
        dp = [[False] * n for i in range(n)]
        for len1 in range(1,n + 1):
            for i in range(0, n - len1 + 1):
                j = len1 + i - 1
                if len1 == 1:
                    dp[i][j] = True
                elif s[i] == s[j] and (len1 == 2 or dp[i+1][j-1]):
                    dp[i][j] = True
                    if ans < len1:
                        ans = len1
                        st = i
                        end = j + 1
        return s[st:end]


Solution().longestPalindrome("asdadsfc")