class Solution {
public:
    int minimumTotal(vector<vector<int> > &triangle) {
        int m = triangle.size();
        int n = triangle[m - 1].size();
        int dp[n];
        dp[0] = triangle[0][0];
        for(int i = 1; i < n; i++) {
            for(int j = i; j >= 0; j--) {
               int ele = triangle[i][j];
               if(j != i && j != 0) dp[j] = min(dp[j], dp[j - 1]) + ele;
               else if(j == i) dp[j] = dp[j - 1] + ele;
               else dp[j] = dp[0] + ele;
            }
         }
        int ans = dp[0];
        for(int i = 1; i < n; i++) ans = min(ans, dp[i]);
        return ans;
    }
};
