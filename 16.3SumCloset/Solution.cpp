#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        vector<int> threeSumClosest(vector<int>& nums,int target){
            int n = nums.size();
            vector<int> ans;
            int prevDiff = INT_MAX;
            sort(begin(nums), end(nums));
            for (int i = 0; i < n - 2; i++){
                int j = i + 1, k = n - 1;
                while(j < k){
                    int sum = nums[i] + nums[j] + nums[k];
                    int diff = abs(sum - target);
                    if(diff < prevDiff){
                        ans = {nums[i], nums[j], nums[k]};
                        prevDiff = diff;
                    }else if(sum > target){
                        k--;
                    }else{
                        j++;
                    }
                }
            }
            return ans;
        }
};