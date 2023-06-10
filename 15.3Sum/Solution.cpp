#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        vector<vector<int>> ans;
        int n = nums.size();
        sort(begin(nums), end(nums));
        for (int i = 0; i < n - 2; i++)
        {
            int j = i + 1, k = n - 1;
            while (j < k)
            {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum == 0)
                {
                    ans.push_back({nums[i], nums[j], nums[k]});
                    while (k != 0 and j < k and nums[k] == nums[k - 1])
                        k--;
                    k--;
                    while (j != n - 1 and j < k and nums[j] == nums[j + 1])
                        j++;
                    j++;
                }
                else if (sum > 0)
                {
                    k--;
                }
                else
                {
                    j++;
                }
            }
            while (i != n - 1 and nums[i] == nums[i + 1])
                i++;
        }
        return ans;
    }
};