class Solution {
    bool helper(TreeNode *left, TreeNode *right) {
        if(!left) return !right;
        if(!right) return !left;
        return left->val == right->val && helper(left->left, right->right) && helper(left->right, right->left);
    }
public:
    bool isSymmetric(TreeNode *root) {
        if(!root) return true;
        return helper(root->left, root->right);
    }
};
