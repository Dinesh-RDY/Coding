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
    int solve(int n, vector<vi> queries)
    {
        vector<vector<int>> rows(n, vector<int>{0, 0}), cols(n, vector<int>{0, 0});
        int i = 1;
        for (vector<int> &q : queries)
        {
            if (q[0] == 1)
            {
                rows[q[1]] = {i++, q[2]};
            }
            else
            {
                cols[q[1]] = {i++, q[2]};
            }
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                ans += rows[i][0] > cols[j][0] ? rows[i][1] : cols[j][1];
            }
        }
        return ans;
    }
    int solve2(int n, vector<vi> &queries)
    {
        unordered_map<int, vector<int>> row, col;
        int i = 1;
        for (vector<int> &q : queries)
        {
            if (q[0])
                col[q[1]] = {i, q[2]};
            else
                row[q[1]] = {i, q[2]};
            i++;
        }
        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (row.find(i) == row.end() and col.find(j) != col.end())
                {
                    ans += col[j][2];
                }
                else if (row.find(i) != row.end() and col.find(j) == col.end())
                    ans += row[i][2];
                else if (row.find(i) != row.end() and col.find(j) != col.end())
                    ans += row[i][1] > col[j][1] ? row[i][2] : col[j][2];
            }
        }
        return ans;
    }
};