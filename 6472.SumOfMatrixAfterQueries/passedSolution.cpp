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
    // The idea is to start from the last query as that is the one
    // That will win every time we see a row we mark it as done
    // because no matter what we do it will be changed to some other value
    // and we have already added that value.
    // every time we add a row we decrement the total number
    // of rows we have and vice verca
    long long solve(int n, vector<vi> &q)
    {
        long long ans = 0;
        vector<bool> row(n, false), col(n, false);
        int rows = n, cols = n;
        for (int i = q.size() - 1; i >= 0; i--)
        {
            if (q[i][0] and !col[q[i][1]])
            {
                col[q[i][1]] = true;
                ans += cols * q[i][2];
                rows--;
            }
            else if (!q[i][0] and !row[q[i][1]])
            {
                row[q[i][1]] = true;
                ans += rows * q[i][2];
                cols--;
            }
        }
        return ans;
    }
};