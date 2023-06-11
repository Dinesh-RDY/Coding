#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    unordered_map<int, string> mp{{2, "abc"}, {3,"def"},{4,"ghi"}, {5,"jkl"}, {6,"mno"},{7,"pqrs"}, {8,"tuv"}, {9, "wxyz"}};
    vector<string> letterCombinations(string digits,int i = 0) {
        if(digits.length() == 0) return {};
        if(i == digits.length())
            return {""};
        vector<string> prev = letterCombinations(digits, i + 1);
        vector<string> ans;
        for(char digit: mp[digits[i] - '0']){
            for(string& s: prev){
                ans.push_back(digit + s);
            }
        }
        return ans;
    }
};