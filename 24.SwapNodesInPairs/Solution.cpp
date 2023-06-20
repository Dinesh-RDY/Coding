#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    ListNode *swapPairs(ListNode *head)
    {
        if(!head and !head->next)
            return head;
        ListNode* prevHead = swapPairs(head->next->next);
        head->next->next = head;
        ListNode *presentHead = head->next;
        head->next = prevHead;
        return presentHead;
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