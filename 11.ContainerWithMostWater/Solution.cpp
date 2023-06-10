#include<bits/stdc++.h>
using namespace std;
#define rep(i, x, y) for (int i = x; i < y;i++)
#define vi vector<int>
class Solution{
    public:
        int maxArea(vector<int>& nums){
            int n = nums.size(), i = 0 , j = n-1,ans = 0;
            while(i < j){
                ans = max(ans, min(nums[i], nums[j]) * (j - i + 1));
                if(nums[i] > nums[j])
                    j--;
                    else
                    i++;
            }
            return ans;
        }
};