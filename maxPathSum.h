/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
    int crossing(TreeNode *node, int &res) {
        if(!node) return 0;
        int ans = node->val;
        int left = crossing(node->left, res), right = crossing(node->right, res);
        if(left >= right && left > 0) ans += left;
        if(right > left && right > 0) ans += right;
        res = max(max(res, ans), node->val + left + right);
        return ans;
        }
public:
    int maxPathSum(TreeNode *root) {
        int res = INT_MIN;
        int temp = crossing(root, res);
        return res;
    }
};
