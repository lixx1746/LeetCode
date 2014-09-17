class Solution {
    void helper(TreeNode *node, int &res, int path) {
        if(!node) return;
        if(!node->left && !node->right) {
            res += 10 * path + node->val;
            return;
        }
        helper(node->left, res, 10 *path + node->val);
        helper(node->right, res, 10 * path + node->val);

    }
public:
    int sumNumbers(TreeNode *root) {
        int res = 0;
        helper(root, res, 0);
        return res;
    }
};
