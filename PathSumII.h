class Solution {
    void helper(TreeNode *node, int sum,  vector<vector<int> > &res, vector<int> path) {
        if(!node) return;
        if(!node->left && !node->right && sum == node->val) {
            path.push_back(node->val);
            res.push_back(path);
            return;
        }
        path.push_back(node->val);
        helper(node->left, sum - node->val, res, path);
        helper(node->right, sum - node->val, res, path);
    }
public:
    vector<vector<int> > pathSum(TreeNode *root, int sum) {
         vector<vector<int> > res;
         if(!root) return res;
         vector<int> path;
         helper(root, sum, res, path);
         return res;
    }
};
