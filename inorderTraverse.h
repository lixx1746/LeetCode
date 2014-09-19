class Solution {
public:
    vector<int> inorderTraversal(TreeNode *root) {
        vector<TreeNode *> st;
        vector<int> ans;
        while(!st.empty() || root) {
            if(root) {
                st.push_back(root);
                root = root->left;
            }
            else {
                root = st.back();
                st.pop_back();
                ans.push_back(root->val);
                root = root->right;
            }
        }
        return ans;
    }
};
