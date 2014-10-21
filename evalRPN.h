class Solution {
public:
    int evalRPN(vector<string> &tokens) {
        int n = tokens.size();
        stack<int> st;
        for(int i = 0; i < n; i++) {
            string s = tokens[i];
            if(s != "*" && s != "-" && s != "+" && s != "/") st.push(stoi(s));
            else {
                int r = st.top();
                st.pop();
                int l = st.top();
                st.pop();
                if(s == "*") st.push(l * r);
                if(s == "+") st.push(l + r);
                if(s == "/") st.push(l / r);
                if(s == "-") st.push(l - r);
                }
            }
           return st.top();
        }
};
