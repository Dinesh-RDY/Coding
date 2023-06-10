#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string covert(string s, int n)
    {
        if (s.length() < 2 || n >= s.length())
            return s;
        vector<string> res(n, "");
        int step = 1, index = 0;
        for (int i = 0; i < s.length(); i++)
        {
            res[index].push_back(s[i]);
            if (index == 0)
                step = 1;
            else if (index == n - 1)
                step = -1;
            if (step == -1)
                index--;
            else
                index++;
        }
        string ans = "";
        for(string x : res){
            ans += x;
        }
        return ans;
    }
};