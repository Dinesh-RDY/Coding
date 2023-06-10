#include<bits/stdc++.h>
#define ll             long long int
#define F              first
#define S              second
#define pb             push_back
#define vi             vector <int>
#define pii            pair <int, int>
#define rep(a,x,y)     for (int a = x; a < y; a++)
#define all(p)         p.begin(), p.end()
#define mod 1000000007
using namespace std;
class Solution{
    public:
    int solve(string s){
        unordered_set<char> ht;
        for(char c : s)
            ht.insert(c);
        return ht.size();
    }
};