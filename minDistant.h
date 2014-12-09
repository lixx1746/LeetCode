class Solution {
public:
    int minDistance(string word1, string word2) {
        int n1 = word1.size(), n2 = word2.size();
        if(n1 == 0 || n2 == 0) return max(n1, n2);
        int dp[n1 + 1][n2 + 1];
        dp[0][0] = 0;
        for(int i = 1; i <= n1; i++) dp[i][0] = dp[i - 1][0] + 1;
        for(int i = 1; i <= n2; i++) dp[0][i] = dp[0][i - 1] + 1;
        for(int i = 1; i <= n1; i++) {
            for(int j = 1; j <= n2; j++) {
                if(word1[i - 1] == word2[j - 1]) dp[i][j] = dp[i - 1][j - 1];
                else dp[i][j] = min(dp[i - 1][j - 1], min(dp[i - 1][j], dp[i][j - 1])) + 1;
            }
        }
        return dp[n1][n2];
    }
};
