#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        int longestSubstring(string s){
            int i = 0, j = 0, ans = 0;
            unordered_set<int> ht;
            while(j < s.length()){
                while(ht.count(s[j]))
                    ht.erase(s[i++]);
                ans = max(ans, j - i + 1);
                ht.insert(s[j++]);
            }
            return ans;
        }
};