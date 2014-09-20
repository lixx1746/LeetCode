class Solution {
    void helper(vector<int> &candidates, int target, vector<vector<int> > &res, vector<int> &sol, int level, int sum) {
        if(sum == target) {
            res.push_back(sol);
            return;
        }
        if(sum > target) return;
        for(int i = level; i < candidates.size(); i++) {
            sol.push_back(candidates[i]);
            helper(candidates, target, res, sol, i, sum + candidates[i]);
            sol.pop_back();
        }
    }
public:
    vector<vector<int> > combinationSum(vector<int> &candidates, int target) {
        vector<vector<int> > res;
        vector<int> sol;
        sort(candidates.begin(), candidates.end());
        helper(candidates, target, res, sol, 0, 0);
        return res;
    }
};
