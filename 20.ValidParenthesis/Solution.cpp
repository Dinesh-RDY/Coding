#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
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
};