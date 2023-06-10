#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        string longestPalindrome(string s){
            int start = 0, ans = 1;
            int n = s.size();
            vector<vector<int>> dp(n, vector<int> (n,0));
            for (int len = 1; len <= n; len++){
                for (int i = 0; i < n; i++){
                    int j = i + len - 1;
                    if(i == j)
                        dp[i][j] = 1;
                    else if(s[i] == s[j] and dp[i+1][j-1]){
                        dp[i][j] = 1;
                        if(ans < len){
                            ans = len;
                            start = i;
                        }
                    }
                }
            }
            return s.substr(start, ans);
        }
};