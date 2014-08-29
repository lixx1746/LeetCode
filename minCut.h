class Solution {
public:
    int minCut(string s) {
        int n = s.size();
        int dp[n];
        dp[0] = 0;
        bool isPal[n];
        for(int i = 1; i < n; i++) {
            dp[i] = dp[i - 1] + 1;
            isPal[i] = true;
            for(int j = 0; j < i; j++) {
                if(s[j] == s[i] && isPal[j + 1]) {
                    isPal[j] = true;
                    dp[i] = j == 0 ? 0 : min(dp[i], dp[j - 1] + 1);
                }
                isPal[j] = false;
            }
        }
        return dp[n - 1];
    }
};
