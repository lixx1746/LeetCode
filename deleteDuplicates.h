class Solution {
    enum State {IN, OUT};
public:
    ListNode *deleteDuplicates(ListNode *head) {
        ListNode *dummy = new ListNode(-1);
        ListNode *pre = dummy, *cur = head;
        State state = OUT;
        for(; cur; cur = cur->next) {
            if(!cur->next) pre->next = state == OUT ? cur : NULL;
            else if(cur->val == cur->next->val) state = IN;
            else if(state == OUT) {
                pre->next = cur;
                pre = pre->next;
            }
            else state = OUT;
        }
        return dummy->next;
    }
};
