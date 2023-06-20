public class Solution {
    public ListNode reverseKGroup(ListNode head, int k) {
        if (head == null || k == 1)
            return head;
        ListNode p = head;
        for (int i = 0; i < k; i++) {
            if (p == null)
                return head;
            p = p.next;
        }
        ListNode r = null, q = null, nextHead = p;
        p = head;
        for (int i = 0; i < k; i++) {
            r = q;
            q = p;
            p = p.next;
            q.next = r;
        }
        head.next = reverseKGroup(nextHead, k);
        return q;
    }
}

class ListNode {
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
