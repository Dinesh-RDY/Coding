class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
class Solution:
    def swapPairs(self, head:ListNode)->ListNode:
        if not head or not head.next:
            return head
        previousHead = self.swapPairs(head.next.next)
        currentHead = head.next
        head.next.next = head
        head.next =previousHead
        return currentHead
