class Solution {
public:
    int maxProfit(vector<int> &prices) {
        int n = prices.size();
        if(n <= 1) return 0;
        int ans = 0, lmin = prices[0];
        for(int i = 1; i < n; i++) {
            if(prices[i] < lmin) lmin = prices[i];
            ans = max(ans, prices[i] - lmin);
        }
        return ans;
    }
};
