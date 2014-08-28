class Solution {
    void helper(int n, int col, int ld, int rd, vector<vector<string> > &res, vector<string> &sol) {
        if(col == (1 << n) - 1) {
            res.push_back(sol);
            return;
        }
        int cand = ~(col | ld | rd);
        for(int i = 0; i < n; i++) {
            string temp(n, '.');
            int pos = 1 << i;
                if(pos & cand) {
                    temp[i] = 'Q';
                    sol.push_back(temp);
                    helper(n, col | pos, (ld | pos) << 1, (rd | pos) >> 1, res, sol);
                    sol.pop_back();
                }
        }
    }

public:
    vector<vector<string> > solveNQueens(int n) {
        vector<vector<string> > res;
        vector<string> sol;
        helper(n, 0, 0, 0, res, sol);
        return res;
    }
};