class Solution {
public:
    void connect(TreeLinkNode *root) {
        TreeLinkNode *level = root, *upper, *prev;
        while(level) {
            upper = level;
            prev = level = NULL;
            while(upper) {
                if(upper->left || upper->right) {
                    if(!level) prev = level = upper->left ? upper->left : upper->right;
                    if(prev && upper->left && upper->left != prev) prev = prev->next = upper->left;
                    if(prev && upper->right && upper->right != prev) prev = prev->next = upper->right;
                }
                upper = upper->next;
            }
        }
    }
};
