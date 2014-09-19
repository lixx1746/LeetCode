class Solution {
    int find[256], need[256];
public:
    string minWindow(string S, string T) {
        int ns = S.size(), nt = T.size();
        for(int i = 0; i < nt; i++) need[T[i]]++;
        int flag = 0, count = 0, ans_len = ns;
        string ans = "";
        for(int r = 0, l = 0; ;flag = 0) {
            for(; r < ns && count < nt; r++) if(need[S[r]] > find[S[r]]++) count++;
            flag = count == nt;
            for(; l < r && count == nt; l++) if(need[S[l]] && --find[S[l]] < need[S[l]]) count--;
            if(flag  && r - l + 1 <= ans_len) {
                ans_len = r - l + 1;
                ans = S.substr(l - 1, ans_len);
            }
            if(r == ns) break;
        }
        return ans;
    }
};
