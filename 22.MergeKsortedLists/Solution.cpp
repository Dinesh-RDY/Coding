#include <bits/stdc++.h>
using namespace std;
class Compare
{
public:
    bool operator()(ListNode *p, ListNode *q)
    {
        return p->val > q->val;
    }
};
class Solution
{
public:
    ListNode *mergeKLists(vector<ListNode *> &lists)
    {
        priority_queue<ListNode *, vector<ListNode *>, Compare> pq;
        ListNode *dummyhead = new ListNode(0), *p = dummyhead;
        for (ListNode *head : lists)
        {
            while (head)
            {
                pq.push(head);
                head = head->next;
            }
        }
        while (!pq.empty())
        {
            p->next = pq.top();
            p = p->next;
            pq.pop();
            
        }
        p->next = nullptr;
        return dummyhead->next;
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