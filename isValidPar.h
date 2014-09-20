class Solution {
    int match(char c, char s) {
        if(c == ')') return s == '(';
        if(c == ']') return s == '[';
        if(c == '}') return s == '{';
    }
public:
    bool isValid(string s) {
        int n = s.size();
        vector<char> st;
        for(int i = 0; i < n; i++) {
            if(s[i] == '(' || s[i] == '[' || s[i] == '{') st.push_back(s[i]);
            else {
                if(st.empty() || !match(s[i], st.back())) return false;
                st.pop_back();
            }
        }
        return st.empty();
    }
};
