#include <bits/stdc++.h>
#define ll long long int
#define F first
#define S second
#define pb push_back
#define vi vector<int>
#define pii pair<int, int>
#define rep(a, x, y) for (int a = x; a < y; a++)
#define all(p) p.begin(), p.end()
#define mod 1000000007
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution
{
public:
    ListNode *solve(ListNode *l1, ListNode *l2)
    {
        ListNode *p = l1, *q = l2, * prev = l1;
       if (!p)
            return q;
        else if (!q)
            return p;
        if(p->val > q->val)
            return solve(l2, l1);
        while (p and q)
        {
            if (p->val <= q->val){
                prev = p;
                p=p->next;
            }else{
                prev->next = q;
                q = q->next;
                prev->next->next = p;
                prev = prev->next;
            }
        }
        if(!p and q)
            prev->next = q;
        return l1; 
    }

};