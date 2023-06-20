from typing import Optional


class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


class Solution:
    def reverseKGroup(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:
        if k is 1 or head is None:
            return head
        p = head
        for i in range(k):
            if p is None:
                return head
            p = p.next
        r, q, next_head, p = None, None, p, head
        for i in range(k):
            r, q, p = q, p, p.next
            q.next = r
        head.next = self.reverseKGroup(next_head, k)
        return q
