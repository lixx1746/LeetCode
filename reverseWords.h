class Solution {
public:
    void reverseWords(string &s) {
    vector<string> st;
    int len = s.size(), r = 0, l = 0;
    for(;;) {
        while(l < len && s[l] == ' ') l++;
        if(l >= len) break;
        r = l + 1;
        while(r < len && s[r] != ' ') r++;
        st.push_back(s.substr(l, r - l));
        l = r + 1;
        }
    string str;
    while(!st.empty()) {
        str += st.back();
        st.pop_back();
        if(st.size() >= 1) str += " ";
        }
    s = str;
    }
};
