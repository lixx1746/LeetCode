class Solution {
    void helper(vector<int> &num, vector<int> &sol, vector<vector<int> > &res, bool *visited) {
        if(sol.size() == num.size()) {
            res.push_back(sol);
            return;
        }
        for(int i = 0; i < num.size(); i++) {
            if(!visited[i]) {
                visited[i] = true;
                sol.push_back(num[i]);
                helper(num, sol, res, visited);
                sol.pop_back();
                visited[i] = false;
                while(i < num.size() - 1 && num[i] == num[i + 1]) i++;
            }
        }
    }
public:
    vector<vector<int> > permuteUnique(vector<int> &num) {
        int n = num.size();
        sort(num.begin(), num.end());
        bool visited[n];
        memset(visited, 0, sizeof(visited));
        vector<vector<int> > res;
        vector<int> sol;
        helper(num, sol, res, visited);
        return res;
    }
};
