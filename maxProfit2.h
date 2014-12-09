class Solution {
public:
    int maxProfit(vector<int> &prices) {
        if(prices.size() <= 1) return 0;
        int l = 0, r = 1;
        int ans = 0;
        for(; r < prices.size(); r++) {
            if(prices[r] < prices[r - 1]) {
                ans += max(prices[r - 1] - prices[l], 0);
                l = r;
            }
        }
        ans += max(prices[r - 1] - prices[l], 0);
        return ans;
    }
};
