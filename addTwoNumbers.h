class Solution {
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        int l1_val, l2_val, carry = 0;
        ListNode *dummy = new ListNode(-1);
        ListNode *cur = dummy;
        while(l1 || l2) {
            l1_val = l1 ? l1->val : 0;
            l2_val = l2 ? l2->val : 0;
            int sum = l1_val + l2_val + carry;
            carry = sum / 10;
            cur->next = new ListNode(sum % 10);
            cur = cur->next;
            if(l1) l1 = l1->next;
            if(l2) l2 = l2->next;
            }
        if(carry) cur->next = new ListNode(carry);
        cur = dummy->next;
        delete(dummy);
        return cur;
    }
};
