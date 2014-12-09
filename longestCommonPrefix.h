class Solution {
public:
    string longestCommonPrefix(vector<string> &strs) {
        int len = strs.size();
        if(len < 1) return "";
        string ans = strs[0];
        for(int i = 1; i < len; i++) {
            int j = 0;
            for(; j < min(ans.size(), strs[i].size(); j++)) {
                if(ans[j] != strs[i][j]) break;
            }
            ans.resize(j);
        }
        return ans;
    }
};
