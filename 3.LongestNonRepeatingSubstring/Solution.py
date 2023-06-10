class Solution:
    def lengthOfLongestSubstring(self, s:str):
        mp = [False] * 256
        i,j = 0 , 0
        n = len(s)
        ans = 0
        while j < n:
            while(mp[ord(s[j])]):
                mp[ord(s[i])] = False
                i += 1
            mp[ord(s[j])] = True
            ans = max(ans, j - i + 1)
            j += 1
        return ans