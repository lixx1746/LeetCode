class Solution {
public:
    int numTrees(int n) {
        int dp[n + 1];
        dp[0] = 1;
        for(int i = 1; i <= n; i++) {
            int sum = 0;
            for(int num = 1; num <= i; num++) {
                sum += dp[num - 1] * dp[i - num];
            }
            dp[i] = sum;
        }
        return dp[n];
    }
};
