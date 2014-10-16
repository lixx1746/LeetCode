class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        int s1_len = s1.size(), s2_len = s2.size(), s3_len = s3.size();
        if(s1_len + s2_len != s3.size()) return false;
        int flag[s1_len + 2][s2_len + 2];
        memset(flag, 0, sizeof(flag));
        flag[0][0] = 1;
        for(int i = 1; i <= s1_len; i++) if(s1[i - 1] == s3[i - 1]) flag[i][0] = 1; else break;
        for(int j = 1; j <= s2_len; j++) if(s2[j - 1] == s3[j - 1]) flag[0][j] = 1; else break;
        for(int i = 1; i <= s1_len; i++)
            for(int j = 1; j <= s2_len; j++)
                flag[i][j] = (s1[i - 1] == s3[i + j - 1] && flag[i - 1][j]) || (s2[j - 1] == s3[i + j - 1] && flag[i][j - 1]);

        return flag[s1_len][s2_len];
    }
};
