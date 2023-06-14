#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> fourSum(vector<int> &nums, int t)
    {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<vector<int>> ans;

        for (int i = 0; i < n - 3; i++)
        {
            for (int j = i + 1; j < n - 2; j++)
            {
                long long target = (long long)t - (long long)nums[i] - (long long)nums[j];
                int l = j + 1, h = n - 1;
                while (l < h)
                {
                    if (nums[l] + nums[h] == target)
                    {
                        ans.push_back({nums[i], nums[j], nums[l], nums[h]});
                        while (l < h and nums[l] == nums[l + 1])
                            l++;
                        l++;
                        while (l < h and nums[h] == nums[h - 1])
                            h--;
                        h--;
                    }
                    else if (nums[l] + nums[h] < target)
                    {
                        l++;
                    }
                    else
                    {
                        h--;
                    }
                }
                while (j < n - 1 and nums[j] == nums[j + 1])
                    j++;
            }
            while (i < n - 1 and nums[i] == nums[i + 1])
                i++;
        }
        return ans;
    }
};