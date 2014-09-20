class Solution {
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
        ListNode *dummy = new ListNode(-1);
        ListNode *cur = dummy;
        while(l1 || l2) {
            int a_val = l1 ? l1->val : INT_MAX;
            int b_val = l2 ? l2->val : INT_MAX;
            cur = cur->next = a_val <= b_val ? l1 : l2;
            if(a_val <= b_val) l1 = l1->next;
            else l2 = l2->next;
        }
        return dummy->next;
    }
public:
    ListNode *sortList(ListNode *head) {
        if(!head || !head->next) return head;
        ListNode *fast = head, *slow = head, *pre = NULL;
        while(fast && fast->next) {
            fast = fast->next->next;
            pre = slow;
            slow = slow->next;
        }
        if(pre) pre->next = NULL;
        return mergeTwoLists(sortList(head), sortList(slow));
        }
};
