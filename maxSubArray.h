class Solution {
public:
    int maxSubArray(int A[], int n) {
        if(n <= 0) return 0;
        int ans = A[0], pre = A[0], cur;
        for(int i = 1; i < n; i++) {
            cur = pre <= 0 ? A[i] : pre + A[i];
            pre = cur;
            ans = max(ans, cur);
        }
        return ans;
    }
};
