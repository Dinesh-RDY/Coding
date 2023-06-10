#include <bits/stdc++.h>
#define ll long long int
#define F first
#define S second
#define pb push_back
#define vi vector<int>
#define pii pair<int, int>
#define rep(a, x, y) for (int a = x; a < y; a++)
#define all(p) p.begin(), p.end()
#define mod 1000000007
using namespace std;
class Solution
{
public:
    bool solve(string s, string p)
    {
        int n = s.length(), m = p.length();
        bool dp[n + 1][m + 1]{false};
        dp[0][0] = true;
        rep(i,0,n+1){
            rep(j,1,m+1){
                if(p[j-1] == '*'){
                    dp[i][j] = dp[i][j - 2] || (i > 0 and (s[i - 1] == p[j - 2] or p[j - 2] == '.') and dp[i - 1][j]);
                }else{
                    dp[i][j] = i > 0 and dp[i - 1][j - 1] and (s[i - 1] == p[j - 1] or p[j - 1] == '.');
                }
            }
        }
        return dp[n][m];
    }
};