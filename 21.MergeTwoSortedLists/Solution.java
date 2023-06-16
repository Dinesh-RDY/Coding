public class Solution {
    public ListNode mergeTwoLists(ListNode l1, ListNode l2) {
        if (l1 == null)
            return l2;
        if (l2 == null)
            return l1;
        if (l1.val > l2.val)
            return mergeTwoLists(l2, l1);
        ListNode p = l1, q = l2, prev = l1;
        while (p != null && q != null) {
            if (p.val <= q.val) {
                prev = p;
                p = p.next;
            } else {
                prev.next = q;
                q = q.next;
                prev = prev.next;
                prev.next = p;
            }
        }
        if (p == null && q != null) {
            prev.next = q;
        }
        return l1;
    }
}

public class ListNode {
    int val;
    ListNode next;

    ListNode() {
    }

    ListNode(int val) {
        this.val = val;
    }

    ListNode(int val, ListNode next) {
        this.val = val;
        this.next = next;
    }
}
