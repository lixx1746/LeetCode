class Solution {
public:
    ListNode *deleteDuplicates(ListNode *head) {
        ListNode *pre = head, *cur = NULL;
        if(head) cur = head->next;
        for(; cur; cur = cur->next) {
            if(cur->val != pre->val) pre = pre->next = cur;
            else pre->next = NULL;
        }
        return head;
    }
};
