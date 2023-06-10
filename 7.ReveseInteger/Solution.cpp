#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int reverse(int x){
        bool flag = x  < 0;
        if(flag)
            x *= -1;
        int ans = 0;
        while(x){
            int rem = x % 10;
            if(ans > INT_MAX/ 10)
                return 0;
            ans = ans * 10 + rem;
            x /= 10;
        }
        return ans;
    }
};