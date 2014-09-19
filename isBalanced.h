class Solution {
    int depth(TreeNode *node) {
        if(!node) return 0;
        int l = depth(node->left) + 1, r = depth(node->right) + 1;
        return max(l, r);
    }
public:
    bool isBalanced(TreeNode *root) {
        if(!root) return true;
        int l = depth(root->left);
        int r = depth(root->right);
        return abs(l - r) <= 1 && isBalanced(root->left) && isBalanced(root->right);
        }
};
