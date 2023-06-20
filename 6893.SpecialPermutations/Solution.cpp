#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long int ans = 0;
    long long int mod = 10e9 + 7;
    unordered_set<int> ht;
    void recurse(vector<int>& nums,vector<int>& curr ,int j){
        if(j == nums.size()){
            ans++;
            ans = ans % mod;
        }
        
        for (int i = 0; i < nums.size();i++){
            if(ht.find(nums[i]) == ht.end() and (nums[j-1] % nums[i] == 0 || nums[i] & nums[j-1] ==0)){
                curr[j] = nums[i];
                ht.insert(nums[i]);
                recurse(nums, curr, j + 1);
                ht.erase(nums[i]);
            }
        }
    }
    int specialPerm(vector<int>& nums) {
        vector<int> curr(nums.size());
        for (int i = 0; i < nums.size(); i++){
            curr[0] = nums[i];
            recurse(nums, curr, 0);
        }
        return ans;
    }
};