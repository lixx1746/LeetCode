class Solution {
public:
    const int INF = -1;
    int uniquePathsWithObstacles(vector<vector<int> > &obstacleGrid) {
        int n = obstacleGrid.size();
        if(n == 0) return 0;
        int m = obstacleGrid[0].size();
        int dp[n][m];
        if(obstacleGrid[0][0] == 1) return 0;
        dp[0][0] = 1;
        for(int i = 1; i < n; i++) dp[i][0] = obstacleGrid[i][0] == 1 ? INF : dp[i - 1][0];
        for(int i = 1; i < m; i++) dp[0][i] = obstacleGrid[0][i] == 1 ? INF : dp[0][i - 1];
        for(int i = 1; i < n; i++) {
            for(int j = 1; j < m; j++) {
                if(obstacleGrid[i][j] == 1) dp[i][j] = INF;
                else dp[i][j] = max(dp[i - 1][j], 0) + max(0, dp[i][j - 1]);
            }
        }
        return max(dp[n - 1][m - 1], 0);
    }
};
