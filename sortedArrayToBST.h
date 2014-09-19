class Solution {
    TreeNode *helper(vector<int> &num, int l, int r) {
        if(l > r) return NULL;
        if(l == r) return new TreeNode(num[l]);
        int mid = (l + r) / 2;
        TreeNode *root = new TreeNode(num[mid]);
        root->left = helper(num, l, mid - 1);
        root->right = helper(num, mid + 1, r);
        return root;
    }
public:
    TreeNode *sortedArrayToBST(vector<int> &num) {
        int n = num.size();
        return helper(num, 0, n - 1);
    }
};
