#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findValueOfPartition(vector<int>& nums) {
        sort(begin(nums), end(nums));
        int ans = INT_MAX;
        for (int i = 0; i < nums.size() - 1; i++){
            ans = min(ans, nums[i + 1] - nums[i]);
        }
        return ans;
    }
};