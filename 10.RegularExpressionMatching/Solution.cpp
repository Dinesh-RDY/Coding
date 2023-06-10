#include <bits/stdc++.h>
using namespace std;
// This code I wrote is for wildcard matching 
// This code is not about regular expression matching
class Solution
{
    int recurse(vector<vector<int>> &dp, string s, string p, int m, int n)
    {
        if (n == -1 and m != -1)
            return 0;
        if (n == -1 and m == -1)
            return 1;
        if (dp[m][n] != -1)
            return dp[m][n];
        if (s[m] == p[n] or p[n] == '.')
        {
            return dp[m][n] = recurse(dp, s, p, m - 1, n - 1);
        }
        if (p[m] == '*')
        {
            return dp[m][n] = recurse(dp, s, p, m - 1, n) or recurse(dp, s, p, m, n - 1);
        }
        return dp[m][n] = 0;
    }
    bool isMatch(string s, string p)
    {
        int n = s.length(), m = p.length();
        vector<vector<int>> dp(n, vector<int>(m, -1));
        recurse(dp, s, p, n - 1, m - 1);
        return dp[n - 1][m - 1];
    }
};