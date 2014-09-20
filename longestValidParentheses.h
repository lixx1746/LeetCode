class Solution {
public:
    int longestValidParentheses(string s) {
        int n = s.size(), ans = 0;
        vector<int> st;
        int start = 0;
        for(int i = 0; i < n; i++) {
            if(s[i] == '(') st.push_back(i);
            else if(st.empty()) start = i + 1;
            else {
                st.pop_back();
                ans = max(ans, st.empty() ? i - start + 1 : i - st.back());
            }
        }
        return ans;
    }
};
