class Solution {
public:
    vector<vector<int> > zigzagLevelOrder(TreeNode *root) {
        queue<TreeNode *> q;
        vector<int> level;
        vector<vector<int> > result;
        if(root) q.push(root);
        int level_count = 1, next_level_count = 0, order = 0;
        while(!q.empty()) {
            TreeNode *node = q.front();
            q.pop();
            if(!(order % 2)) level.push_back(node->val);
            else level.insert(level.begin(), node->val);
            level_count--;
            if(node->left) { q.push(node->left); next_level_count++; }
            if(node->right) { q.push(node->right); next_level_count++; }
            if(!level_count) {
                 result.push_back(level);
                 level.clear();
                 level_count = next_level_count;
                 next_level_count = 0;
                 order++;
            }
        }
        return result;
    }
};
