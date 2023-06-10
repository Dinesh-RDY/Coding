#include<bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < b; i++)
class Solution{
    public:
        string intToRoman(int num){
            string s="";
            vector<int> nums{1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
            vector<string> symbols{"I", "IV", "V", "IX","X","XL", "L", "XC", "C", "CD", "D", "CM", "M"};
            int i = 12;
            while(num){
                if(num < nums[i]){
                    i--;
                }else{
                    s += symbols[i];
                    num -= nums[i];
                }
            }
            return s;
        }
};