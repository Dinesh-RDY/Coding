#include<bits/stdc++.h>
using namespace std;
class Solution{
    int removeDuplicates(vector<int>& nums){
        int sp = 0, fp = 0;
        while(fp < nums.size()){
            if(nums[sp] != nums[fp]){
                nums[++sp] = nums[fp];
            }
            fp++;
        }
        return sp + 1;
    }
};