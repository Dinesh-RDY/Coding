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
    int solve(vector<int> &nums)
    {
        int i1, i4;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 1)
                i1 = i;
            if(nums[i] == nums.size())
                i4 = i;
        }

        int ans = i1 + nums.size() - i4 - 1;
        return i1 > i4 ? ans - 1 : ans;
    }
};