class Solution {
public:
    vector<int> preorderTraversal(TreeNode *root) {
        vector<TreeNode *> st;
        vector<int> ans;
        st.push_back(NULL);
        while(root) {
            ans.push_back(root->val);
            if(root->right) st.push_back(root->right);
            if(root->left) st.push_back(root->left);
            root = st.back();
            st.pop_back();
        }
        return ans;
    }
};
