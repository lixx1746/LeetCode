class Solution {
    void helper(int n, int k, int level, vector<int> &sol, vector<vector<int> > &res) {
        if(sol.size() == k) {
            res.push_back(sol);
            return;
        }
        for(int i = level; i <= n; i++) {
            sol.push_back(i);
            helper(n, k, i + 1, sol, res);
            sol.pop_back();
        }
    }
public:
    vector<vector<int> > combine(int n, int k) {
        vector<vector<int> > res;
        vector<int> sol;
        helper(n, k, 1, sol, res);
        return res;
    }
};
