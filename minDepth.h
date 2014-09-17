class Solution {
    void dfs(TreeNode *node, int &res, int depth) {
        if(!node || depth >= res) return;
        if(!node->left && !node->right) {
            res = min(res, depth + 1);
            return;
        }
        dfs(node->right, res, depth + 1);
        dfs(node->left, res, depth + 1);
    }
public:
    int minDepth(TreeNode *root) {
        if(!root) return 0;
        int res = INT_MAX;
        dfs(root, res, 0);
        return res;
    }
};
