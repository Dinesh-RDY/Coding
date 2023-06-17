#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    
    vector<string> ans;

    void recurse(int o,int c,int n, string s){
        // idea is very simple add n open then
        // add other n closed
        // closed < open wil make sure closed will be added
        // after open are added 
        //since we are adding opens first and then second
        // thus the output will always be valid
        if(s.length() == 2 * n){
            ans.push_back(s);
            return;
        }
        if(o < n)
            recurse(o + 1, c, n, s + '(');
        if(c < o)
            recurse(o, c + 1, n, s + ')');
    }
    //naive method
    inline bool ismatch(char c, char d)
    {
        if ((c == ')' and d == '(') or (c == ']' and d == '[') or (c == '}' and d == '{'))
            return true;
        return false;
    }
    bool isValid(string s)
    {
        stack<char> stk;
        for (char c : s)
        {
            if (c == '(' or c == '[' or c == '{')
                stk.push(c);
            else if (stk.empty() || !ismatch(c, stk.top()))
                return false;
            else
                stk.pop();
        }
        return stk.empty();
    }
    void generate(int n, string& s,int open,int close)
    {
        if(close > open) return;
        if(open > n) return;
        if (s.length() == n * 2){
            if(isValid(s)) ans.push_back(s);
            return;
        }
        s.push_back('(');
        open++;
        generate(n, s,open,close);
        s.pop_back();
        open--;
        s.push_back(')');
        close++;
        generate(n, s,open,close);
        s.pop_back();
        close--;
    }
    vector<string> generateParenthesis(int n, string s = "")
    {
        recurse(0, 0, n, "");
        return ans;
        // if (n == 0)
        //     return {};
        // generate(n, s,0,0);
        // return ans;
    }
};