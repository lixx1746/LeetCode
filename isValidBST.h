class Solution {
public:
    bool isValidBST(TreeNode *root) {
        vector<TreeNode *> st;
        TreeNode* prev = NULL;
        while(!st.empty() || root) {
            if(root) {
                st.push_back(root);
                root = root->left;
            }
            else {
                root = st.back();
                st.pop_back();
                if(prev && prev->val >= root->val) return false;
                prev = root;
                root = root->right;
            }
        }
        return true;
    }
};
