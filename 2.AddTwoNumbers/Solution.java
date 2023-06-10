public class Solution {
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
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        ListNode l3 = new ListNode(), p = l3;
        int sum = 0;
        while (l1 != null || l2 != null) {
            if (l1 != null) {
                sum += l1.val;
                l1 = l1.next;
            }
            if (l2 != null) {
                sum += l2.val;
                l2 = l2.next;
            }
            l3.val = sum % 10;
            sum /= 10;
            if (l1 != null || l2 != null || sum == 1) {
                l3.next = new ListNode();
            }
            l3 = l3.next;
        }
        if (sum) {
            l3.val = 1;
        }
        return p;
    }
}

