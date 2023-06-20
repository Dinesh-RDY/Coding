#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
        int ans = 0;
        int count = 0;
        while(mainTank){
            count++;
            mainTank--;
            ans += 10;
            if(count == 5){
                count = 0;
                if(additionalTank){
                    mainTank++;
                    additionalTank--;
                }
            }
        }
    }
};