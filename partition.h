class Solution {
    bool isPal(string str) {
       int l = 0;
       int r = str.size() - 1;
       while(l < r){
           if(str[l] != str[r]) return false;
           l++;
           r--;
       }
       return true;
    }
public:
    void helper(const string s, int l, vector<vector<string> > &res, vector<string> &sol) {
        if(l >= s.size()) {
            res.push_back(sol);
            return;
        }
        for(int i = l; i < s.size(); i++) {
            string can = s.substr(l, i - l + 1);
            if(isPal(can)) {
                sol.push_back(can);
                helper(s, i + 1, res, sol);
                sol.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> sol;
        helper(s, 0, res, sol);
        return res;
    }
};
