class Solution {
    TreeNode *helper(vector<int>::iterator in, vector<int>::iterator po, int len) {
        if(len == 0) return NULL;
        int ele = *(po + len - 1);
        TreeNode *root = new TreeNode(ele);
        auto pos = find(in, in + len, ele);
        int l = pos - in;
        root->left = helper(in, po, l);
        root->right = helper(pos + 1, po + l, len - l - 1);
        return root;
    }
public:
    TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder) {
        int n = inorder.size();
        return helper(inorder.begin(), postorder.begin(), n);
    }
};
