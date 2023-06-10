#include<bits/stdc++.h>
using namespace  std;
class Solution{
    public:
        string longestCommonPrefix(vector<string>& strs){
            sort(strs.begin(), strs.end());
            string low = strs[0], high = strs[strs.size() - 1];
            int i = 0;
            while (i < low.length() and low[i] == high[i]){
                i++;
            }
            return low.substr(0, i + 1);
        }
};