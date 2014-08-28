class Solution {
    void helper(vector<int> &S, vector<vector<int> > &res, vector<int> &sol, int l, int r) {
        res.push_back(sol);
        for(int i = l; i <= r; i++) {
            sol.push_back(S[i]);
            helper(S, res, sol, i + 1, r);
            sol.pop_back();
            }
        }
public:
    vector<vector<int> > subsets(vector<int> &S) {
        vector<vector<int> > res;
        vector<int> sol;
        sort(S.begin(), S.end());
        helper(S, res, sol, 0, S.size() - 1);
        return res;
    }
};
