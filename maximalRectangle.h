class Solution {
public:
    int maximalRectangle(vector<vector<char> > &matrix) {
        int m = matrix.size();
        int ans = 0;
        if(m == 0) return ans;
        int n = matrix[0].size();
        int dp[m + 1][n + 1][2];
        memset(dp, 0, sizeof(dp));
        for(int i = 1; i <= m; i++) {
            for(int j = 1; j <= n; j++) {
                if (matrix[i - 1][j - 1] == '0') continue;
                dp[i][j][0] = dp[i - 1][j][0] + 1;
                dp[i][j][1] = dp[i][j - 1][1] + 1;
                int temp_height = dp[i][j][0];
                int temp_max = temp_height;
                for(int x = j - 1; x > j - dp[i][j][1]; x--) {
                    if(temp_height > dp[i][x][0]) temp_height = dp[i][x][0];
                    temp_max = max(temp_max, (j - x + 1) * temp_height);
                }
                ans = max(ans, temp_max);
            }
        }
        return ans;
    }
};
