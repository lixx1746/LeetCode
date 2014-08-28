class Solution {
    void helper(vector<string> &res, int left_remain, int right_remain, string sol) {
        if(left_remain > right_remain || left_remain < 0) return;
        if(left_remain == right_remain && left_remain == 0) {
            res.push_back(sol);
            return;
        }
        helper(res, left_remain - 1, right_remain, sol + "(");
        if(left_remain != right_remain) helper(res, left_remain, right_remain - 1, sol + ")");
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        helper(res, n, n, "");
        return res;
    }
};
