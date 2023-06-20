#include <bits/stdc++.h>
using namespace std;
class Solution
{
    ListNode *reverseKGroup(ListNode *head, int k)
    {
        if (k == 1 or !head or !head->next)
            return head;
        ListNode *p = head;
        int len = 0;
        for (int i = 0; i < k; i++)
        {
            if (!p)
                return head;
            p = p->next;
        }
        ListNode *q = nullptr, *r = nullptr, *nextHead = p;
        p = head;
        for (int i = 0; i < k; i++)
        {
            r = q;
            q = p;
            p = p->next;
            q->next = r;
        }
        head->next = reverseKGroup(nextHead, k);
        return q;
    }
};
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};