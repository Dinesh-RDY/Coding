#include <bits/stdc++.h>
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2){
        ListNode *l3 = new ListNode(), *p = l3;
        int sum = 0;
        while(l1 or l2){
            if(l1){
                sum += l1->val;
                l1 = l1->next;
            }
            if (l2){
                sum += l2->val;
                l2 = l2->next;
            }
            p->val = sum%10;
            sum /= 10;
            p->next = new ListNode();
            p = p->next;
        }
        return l3;
    }
};