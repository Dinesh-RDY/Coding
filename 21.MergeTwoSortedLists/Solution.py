class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
class Solution:
    def mergeTwoLists(self,l1:ListNode, l2:ListNode)->ListNode:
        if not l1: return l2;
        if not l2: return l1;
        if l1.val > l2.val:
            return self.mergeTwoLists(l2,l1)
        p,prev,q = l1,l1,l2
        while p and q:
            if p.val <= q.val:
                prev,p = p , p.next
            else:
                prev.next = q
                prev = q
                q = q.next
                prev.next = p
        if not p and q:
            prev.next = q
        return l1