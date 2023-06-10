#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        bool isPalindrome(int n){
            if(n < 0)
                return false;
            int num = 0 , temp = n;
            while(n){
                if(num > INT_MAX / 10)
                    return false;
                num = num * 10 + n % 10;
                n /= 10;
            }
            return temp == num;
        }
};