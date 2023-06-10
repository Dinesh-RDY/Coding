#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int myAtoi(string s)
    {
        int n = s.size();
        int i = 0;
        while (i < n and s[i] == ' ')
            i++;
        if (i == n)
            return 0;
        int sign = 1;
        if ((s[i] >= '0' and s[i] <= '9') or ((s[i] == '-' or s[i] == '+') and i != n - 1 and s[i + 1] >= '0' and s[i + 1] <= '9'))
        {
            if (s[i] == '-')
                sign = -1, i++;
            if (s[i] == '+')
                i++;
        }
        else
        {
            return 0;
        }
        long long ans = 0;
        while (i < n and s[i] >= '0' and s[i] <= '9')
        {
            if (ans > INT_MAX)
                break;
            ans = ans * 10 + s[i] - '0';
            i++;
        }
        if (sign == -1 and ans - 1 > INT_MAX)
            return INT_MIN;
        else if (sign == -1)
            return -ans;
        else if (ans > INT_MAX)
            return INT_MAX;
        return ans;
    }
};