class ListNode(object):
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


class Solution:
    def addTwoNumbers(self, l1: ListNode, l2: ListNode) -> ListNode:
        l3 = ListNode()
        p = l3
        s = 0
        while l1 or l2:
            if l1:
                s += l1.val
                l1 = l1.next
            if l2:
                s += l2.val
                l2 = l2.next
            l3.val = s % 10
            s /= 10
            if l1 or l2 or s:
                l3.next = ListNode(1)
            l3 = l3.next
        return p
