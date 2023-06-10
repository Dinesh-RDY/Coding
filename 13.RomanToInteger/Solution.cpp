#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        int romanToInt(string s){
            unordered_map<char, int> mp;
            mp['I'] = 1;
            mp['V'] = 5;
            mp['X'] = 10;
            mp['L'] = 50;
            mp['C'] = 100;
            mp['D'  ] = 500;
            mp['M'] = 1000;
            int prev = mp[s[0]];
            int num = prev;
            for (int i = 1; i < s.length(); i++){
                if(prev < mp[s[i]]){
                    num = num - 2 * prev + mp[s[i]];
                }else{
                    num += mp[s[i]];
                }
                prev = mp[s[i]];
            }
            return num;
        }
};