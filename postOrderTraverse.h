class Solution {
public:
    vector<int> postorderTraversal(TreeNode *root) {
        vector<TreeNode *> st;
        vector<int> ans;
        TreeNode *lastvisited = NULL;
        while(root || !st.empty()) {
            if(root) {
                st.push_back(root);
                root = root->left;
            }
            else {
                TreeNode *p = st.back();
                if(p->right && lastvisited != p->right) root = p->right;
                else {
                    st.pop_back();
                    ans.push_back(p->val);
                    lastvisited = p;
                }
            }
        }
        return ans;
    }
};
